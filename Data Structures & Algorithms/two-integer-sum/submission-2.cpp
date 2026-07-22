class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int , int> mp ;
         for(int i = 0 ; i < nums.size() ; i++){
    // we calculate target - nums[i]
            int tmp = target - nums[i] ;
        //   we search the temp into out hashmap
          if(mp.find(tmp) != mp.end()){
             return {mp[tmp] , i} ;
          }
        //   insert the number , index into the  map 
             mp[nums[i]] = i ;
         }
         return {} ;
    }
};
