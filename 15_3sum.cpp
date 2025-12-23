// sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // sap xep lai mang
        int n = nums.size();
        int left, right; // khai bao hai con tro
        for (int i=0; i<n; i++) {
            if (i>0 && nums[i] == nums[i-1]) continue; // bo qua trung lap
            left = i+1; right = n-1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right]; // tinh tong ba so
                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    // loai bo cac phan tu trung lap
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++; right--;
                }
                else if (sum > 0) right--;
                else left++;
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);
    return 0;
}
