#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];//The middle item should be the majority item of the sorted list because
        //it has more than n/2 occurrences.
    }
};