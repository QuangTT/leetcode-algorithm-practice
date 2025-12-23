// Sorting - Majority element

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    // danh sach cac phuong thuc
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int times = len / 2;
        int ketqua = 0;
        for (int i=0; i<len-times; i++) if (nums[i] == nums[i+times]) {
            ketqua = nums[i];
            break;
        } 
        return ketqua;
    }
};

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++) cin >> nums[i];

    Solution sol;
    cout << sol.majorityElement(nums);

    return 0;
}
