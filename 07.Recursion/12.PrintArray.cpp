#include<iostream>
using namespace std;

    void display(int arr[], int n, int idx){

        if(idx == n) return;
        cout<<arr[idx]<<" ";
        display(arr, n, idx+1);
    }

  

int main(){
    
    int arr[] = {2,2,3, 5, 8,6, 5, 9};
    int n = 8;
    int idx = 0;
    display(arr, n, idx);
    
}