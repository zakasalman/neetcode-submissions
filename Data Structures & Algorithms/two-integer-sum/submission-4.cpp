class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // approach using map for unsorted arr
        unordered_map<int , int> mp ;
        for(int i = 0 ; i < nums.size() ; i++){
           int curr_sum = target - nums[i] ;
           if(mp.find(curr_sum) != mp.end()){
              return {mp[curr_sum] , i} ;
           }
            mp[nums[i]] = i ;
        }

        return {} ;
    }
};
