// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
        
//         vector<vector<int>> triangle;
//         for(int i = 0; i < numRows; i++){
//             vector <int>a(i+1);
//             triangle.push_back(a);
//         }

//         for(int i = 0; i<numRows; i++){
//             for(int j = 0; j<=i; j++){
//                if(j == 0 || j == i){
//                 triangle[i][j] = 1;
//                }
//                else{
//                 triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
//                }
//             }
//         }
//         return triangle;
        
//     }
// };