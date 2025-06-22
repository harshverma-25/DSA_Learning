#include<iostream>
#include <climits>
using namespace std;
int main(){

    int m = 2, n = 3, p = 3, q = 3;
     int arr[m][n] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int brr[p][q] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
     for (int i = 0; i < m; i++){
       for(int j=0; j<n; j++){
          cout<<arr[i][j]<< " ";       
       }
       cout<<endl;
    }
    cout<<endl;
       for (int i = 0; i < p; i++){
       for(int j=0; j<q; j++){
          cout<<brr[i][j]<< " ";       
       }
       cout<<endl;
    }

    int res [m][q] = {0};
     for (int i = 0; i < m; i++){
       for(int j=0; j<q; j++){
        for(int k = 0; k<p; k++){ 
          res[i][j] += arr[i][k] * brr[k][j];         
       }
       
    }
    cout<<endl;
    }

       for (int i = 0; i < m; i++){
       for(int j=0; j<q; j++){
          cout<<res[i][j]<< " ";       
       }
       cout<<endl;
    }
}