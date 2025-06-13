#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number of Student : ";
    cin>>n;

    int marks[n];
    cout<<"Enter the Students Marks : ";
    for(int i = 0; i<n; i++){
        cin>>marks[i];

    }

    for (int i = 0; i < n; i++)
    {
       cout<<marks[i]<<" ";
    }
    



}