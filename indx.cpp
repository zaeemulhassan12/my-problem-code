#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;

        for (int num : nums) {
            res ^= num;
        }

        return res;
    }
};

int main() {
    
    vector<int> nums = {2, 2, 1};

    Solution obj;

    cout << "Single Number: " << obj.singleNumber(nums);

    return 0;
}
