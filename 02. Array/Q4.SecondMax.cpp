// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         if (arr.size() < 2) {
//             return -1;
//         }

//         int maxx = INT_MIN;
//         int smaxx = INT_MIN;

//         for(int i = 0; i < arr.size(); i++){
//             if(arr[i] > maxx){
//                 smaxx = maxx;
//                 maxx = arr[i];
//             }
//             else if (arr[i] > smaxx && arr[i] != maxx){
//                 smaxx = arr[i];
//             }
//         }

//         if (smaxx == INT_MIN) return -1;

//         return smaxx;
//     }
// };
