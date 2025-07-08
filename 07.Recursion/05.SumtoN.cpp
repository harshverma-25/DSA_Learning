#include<iostream>
using namespace std;

void print(int sum, int n){

    if(n == 0) {
        cout<<sum<<endl;
        return;
    }

    print(sum + n,n - 1);
   
   
}



int main(){
    print(0,3);
    
}