// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<int>res(2,-1);
//         int low = 0;
//         int high = n-1;
//         int flag = false;
//         while(low<=high){
//             int mid = low + (high-low)/2;
//             if(nums[mid] == target){
               
//                     res[0] = mid;
//                     high = mid - 1;
                    
                
//             }
          
//             else if(nums[mid] < target) low = mid +1;
//             else high = mid -1;
//         }
//         if (res[0] == -1) {
//             return {-1, -1};
//         }

//          low = 0, high = n - 1;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (nums[mid] == target) {
//                 res[1] = mid;
//                 low = mid + 1; 
//             }
//             else if (nums[mid] < target) low = mid + 1;
//             else high = mid - 1;
//         }
//         return res;
//     }
// };