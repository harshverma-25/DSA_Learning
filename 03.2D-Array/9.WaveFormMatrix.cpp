#include<iostream>
#include <climits>
using namespace std;
int main(){

    int m = 3, n = 3;
    int arr[m][n] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i = 0; i<m; i++){
        for(int j = 0; j< n; j++ ){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
        int k = 0;
      for(int i = 0; i<m; i++){
        if(i % 2 == 0){
        for(int j = 0; j< n; j++ ){
            cout<<arr[i][j]<< " ";
        
        }
        }
        else {
            for(int j = n-1; j>= 0; j-- ){
            cout<<arr[i][j]<< " ";
           
        }
        }
    }
}