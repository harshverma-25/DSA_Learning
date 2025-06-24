#include<iostream>
using namespace std;
int main(){

    string name;
    cout<<"Enter the String : ";
    getline(cin, name);

   int n = name.size();
   cout<<name.substr(0,n/2);
   cout<<endl;
   cout<<name.substr(n/2,n-1);
   

    
}