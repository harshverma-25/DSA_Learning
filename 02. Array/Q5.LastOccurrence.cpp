#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;

    for(int i = 0; i < size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int LO = 1;
    int idx = size-1;
    for (int i = size-1; i > 0; i--)
    {
        if(LO == v[i]){
            cout<<idx;
            break;
        }
        else idx--;
    }
    


}