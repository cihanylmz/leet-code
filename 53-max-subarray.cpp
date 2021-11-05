#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max = nums[0];
    int sum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        sum = nums[i] + (sum > 0 ? sum : 0); //Add sum to next number if sum is positive.
        max = std::max(sum,max); //Keep the biggest sum here.
    }

    return max;
}



