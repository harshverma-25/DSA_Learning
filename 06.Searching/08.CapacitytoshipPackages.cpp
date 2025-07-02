// class Solution {
// public:
//     bool canShip(vector<int>& weights, int days, int capacity) {
//         int currWeight = 0;
//         int requiredDays = 1;

//         for (int i = 0; i < weights.size(); i++) {
//             if (currWeight + weights[i] > capacity) {
//                 requiredDays++;
//                 currWeight = 0;
//             }
//             currWeight += weights[i];
//         }

//         return requiredDays <= days;
//     }

//     int shipWithinDays(vector<int>& weights, int days) {
//         int low = *max_element(weights.begin(), weights.end());  
//         int high = accumulate(weights.begin(), weights.end(), 0); 

//         while (low < high) {
//             int mid = low + (high - low) / 2;

//             if (canShip(weights, days, mid)) {
//                 high = mid; 
//             } else {
//                 low = mid + 1; 
//             }
//         }

//         return low;
//     }
// };
