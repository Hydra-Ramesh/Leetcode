// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     int k = 3;
//     k = k % n; // Handle cases where k is larger than the array size

//     // Print the original array
//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     // Reverse the entire array
//     for (int start = 0, end = n - 1; start < end; start++, end--) {
//         int temp = nums[start];
//         nums[start] = nums[end];
//         nums[end] = temp;
//     }

//     // Reverse the first k elements
//     for (int start = 0, end = k - 1; start < end; start++, end--) {
//         int temp = nums[start];
//         nums[start] = nums[end];
//         nums[end] = temp;
//     }

//     // Reverse the remaining n - k elements
//     for (int start = k, end = n - 1; start < end; start++, end--) {
//         int temp = nums[start];
//         nums[start] = nums[end];
//         nums[end] = temp;
//     }

//     // Print the rotated array
//     cout << "Rotated array: ";
//     for (int i = 0; i < n; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int> temp(n);
//         for(int i=0;i<n;i++){
//             temp[(i+k)%n]=nums[i];
//         }
//         nums=temp;
//     }
// };