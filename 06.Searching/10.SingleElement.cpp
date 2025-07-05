// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int low = 0;
//         int high = nums.size() - 1;

//         while (low < high) {
//             int mid = low + (high - low) / 2;

//             // Make sure mid is even
//             if (mid % 2 == 1) {
//                 mid--;
//             }

//             // Pair is valid, so single is after
//             if (nums[mid] == nums[mid + 1]) {
//                 low = mid + 2;
//             } else {
//                 high = mid;
//             }
//         }

//         // low == high is the index of the single element
//         return nums[low];
//     }
// };
