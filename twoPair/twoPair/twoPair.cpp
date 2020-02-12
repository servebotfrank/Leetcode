#include <iostream>
#include <map>
#include <vector>
using std::vector;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        //
        std::map<int, int>hashRes;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            auto sumMinusElement = target - nums[i];
            if (hashRes.find(sumMinusElement) != hashRes.end())
            {
                result.push_back(hashRes[sumMinusElement]);
                result.push_back(i);
                return result;
            }
            else
            {
                hashRes[nums[i]] = i;
            }
        }
        return result;
    }
};