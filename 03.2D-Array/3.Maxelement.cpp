#include<iostream>
#include <climits>
using namespace std;
int main(){

    
    int arr[3][3] = {1,2,5 ,9 ,56 ,25, 41 ,85 ,2};
    
    int maxx = INT_MIN;
    for (int i = 0; i < 3; i++){
       for(int j=0; j<3; j++){
            if (arr[i][j] > maxx)
            {
                maxx = arr[i][j];
            }
            
       }
      
    }
    cout<<maxx;
    
}