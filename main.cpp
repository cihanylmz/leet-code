#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int times = 0;
    int tmp = nums[0];
    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] == tmp)
            times++;
        else
        {
            times = 1;
            tmp = nums[i];

        }
        if(times == nums.size()/2 + 1)
            return nums[i];

    }
    return 0;
}
int main() {
    vector <int> nums;
    nums.push_back()

    return 0;
}
