#include<iostream>
#include <climits>
using namespace std;
int main(){

    
    int arr[3][3] = {1,2,5 ,9 ,56 ,25, 41 ,85 ,2};
     int brr[3][3] = {1,2,5 ,9 ,56 ,25, 41 ,85 ,2};

     for (int i = 0; i < 3; i++){
       for(int j=0; j<3; j++){
          cout<<arr[i][j]<< "   "; 
            
       }
       cout<<endl;
      
    }
    cout<<endl;
     for (int i = 0; i < 3; i++){
       for(int j=0; j<3; j++){
          cout<<brr[i][j]<< "   "; 
            
       }
       cout<<endl;
      
    }
           cout<<endl;

    
    
    for (int i = 0; i < 3; i++){
       for(int j=0; j<3; j++){
           arr[i][j] = arr[i][j] + brr[i][j];
            
       }
      
    }
    for (int i = 0; i < 3; i++){
       for(int j=0; j<3; j++){
          cout<<arr[i][j]<< "   "; 
            
       }
       cout<<endl;
      
    }
    
}