#include<iostream>
#include<climits>
using namespace std;
int main(){

   int arr[] = {5,2, 1, 3, 6, 4};
   int n = sizeof(arr) / sizeof(arr[0]);

   for(int i = 0; i < n-1; i++){
    int min = INT_MAX;
    int idx = -1;
    for (int j = i; j < n; j++)
    {
        if(arr[j] < min){
            min = arr[j];
            idx = j;
        }
    }
    swap(arr[i], arr[idx]);
    
   }

   for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
   }


}