
// Method One 
class Solution {
public:
	Solution() = default;
	vector<int> twoSum(const vector<int>& nums, int target)
	{
		int index1 = int();
		int index2 = int();

		for (std::size_t i = 0; i < nums.size(); i++)
		{
			int element2 = target - nums[i];
			for (std::size_t j = i + 1; j < nums.size(); j++)
			{
				if (element2 == nums[j])
				{
					index1 = i;
					index2 = j;
					break;
				}
			}
		}

		vector<int> indices = { index1, index2 };
		return indices;
	}
};


// Method Two 
#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        std::sort(nums.begin(),nums.end()); // sort the array 
        int index1 = 0;
        int index2 = nums.size()-1;
        while(index1<index2)
        {
            if(nums.at(index1) + nums.at(index2) == target) 
                break;
            else if (nums.at(index1) + nums.at(index2) > target)
                index2--;
            else 
                index1++;
        }
        
        vector<int> indices = {index1, index2};
        
        return indices;
    }
};
