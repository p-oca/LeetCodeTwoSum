#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // *** brute force method ***
        /*
        bool success = false;
        while(!success){
            for(unsigned int i = 0; i < nums.size(); i++){
                for(unsigned int j = 0; j < nums.size(); j++){
                    if(i == j){
                        // do nothing
                    } else {
                        if (nums[i] + nums[j] == target){
                            success = true;
                            return {int(i), int(j)};
                        }
                    }
                }
            }
        }*/
        // *** end of brute force method ***

        // *** optimal method ***
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return { mp[target - nums[i]], i };
        }
        return{ -1, -1 };
        // *** end of optimal method ***
    }
};