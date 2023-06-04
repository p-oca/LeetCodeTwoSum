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
                    if(i == j){ // if the two iterators reference the same element
                        // do nothing
                    } else {
                        if (nums[i] + nums[j] == target){ // check if their sum reaches target
                            success = true;
                            return {int(i), int(j)};
                        }
                    }
                }
            }
        }*/
        // *** end of brute force method ***

        // *** optimal method ***
        unordered_map<int, int> mp; // initialise an unordered map
        for (int i = 0; i < nums.size(); i++) { // iterate through the array
            if (mp.find(target - nums[i]) == mp.end()) // check if the array contains the complement of the considered element is in the map
                mp[nums[i]] = i; // store index of array as key
            else
                return { mp[target - nums[i]], i }; // return complement's index and current element
        }
        return{ -1, -1 }; // if no solution found
        // *** end of optimal method ***
    }
};
