// Merge sort array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cur = n+m-1; // vi tri can chen phan tu lon nhat vao
        int i = m-1, j = n-1;
        while (i >= 0 && j >= 0) {
            if (nums2[j] > nums1[i]) {
                nums1[cur] = nums2[j];
                j--;
            } else {
                nums1[cur] = nums1[i];
                nums1[i] = 0;
                i--;
            }
            cur--;
        }
        while (j >= 0) {
            nums1[cur] = nums2[j];
            j--;
            cur--;
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    cout << "Mang sau khi gop: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
