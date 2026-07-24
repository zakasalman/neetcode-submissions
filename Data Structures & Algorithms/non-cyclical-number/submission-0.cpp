class Solution {
public:
    int sq(int n){
        int tmp = 0 ;
        while(n > 0){
            int d = n % 10 ;
            tmp += d * d ;
            n /= 10 ;
        }
        return tmp ;
    }

    bool isHappy(int n) {
        int slow = n , fast = sq(n);
        while(fast != 1 && slow != fast){
            slow = sq(slow) ;
            fast = sq(sq(fast)) ;
        }
        return fast == 1 ;
    }
};
