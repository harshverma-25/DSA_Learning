#include<iostream>
#include<climits>
using namespace std;
int main(){

   int arr[] = {5,2, 1, 3, 6, 4};
   int n = sizeof(arr) / sizeof(arr[0]);

   for(int i = 1; i < n; i++){
    int j = i;
    while(j>= 1){
        if (arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
             j--;
        }
       
        else break;
        
    }
        
    
   }

   for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
   }


}