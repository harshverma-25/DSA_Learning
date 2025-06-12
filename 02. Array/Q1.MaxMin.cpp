
// class Solution {
//   public:
//     pair<int, int> getMinMax(vector<int> arr) {
        
//         // INT_MIN is the minimum value for an integer
//         // INT_MAX is the maximum value for an integer

//         int Maxx = INT_MIN;
//         int Minn = INT_MAX;
        
//         for(int i = 0; i < arr.size(); i++) {
//             if(arr[i] > Maxx) {
//                 Maxx = arr[i];
//             }
//             if(arr[i] < Minn) {
//                 Minn = arr[i];
//             }
//         }
        
//         return {Minn, Maxx}; 
//     }
   
// };