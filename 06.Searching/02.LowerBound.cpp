#include<iostream>
using namespace std;
int main(){

    int arr[] = {1, 3, 5, 8, 9, 12, 11, 15, 7};
    int n = 9;
    int x = 10;

    int low = 0;
    int high = n-1;
    int flag = false;
    while (low<high){
    int mid = low + (high-low)/2;
    if(arr[mid] == x){
        flag = true;
        cout<<arr[mid-1];
        
        break;
    }
    else if(arr[mid] < x) low = mid;
    else high = mid-1;
        
    }
    if(flag == false) cout<<arr[low];
    
}