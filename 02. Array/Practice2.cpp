#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    
    // for add the element we use push back
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    
    //print element using loop

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    // pop_back is use to remove the element from the last

    v.pop_back();
    cout<<endl;
      for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
    
    // Taking input of the array

    vector<int>v1;
    for(int i = 0; i < 5; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
       for(int i = 0; i < 5; i++){
        cout<<v1[i]<<" ";
    }


}