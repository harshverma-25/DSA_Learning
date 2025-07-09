#include<iostream>
using namespace std;

int power(int a, int b){
    if(b == 0) return 1;
    if(b == 1) return a;

    int result = power(a, b / 2);

    if(b % 2 == 0){
        return result * result;
    } else {
        return a * result * result;
    }
}
  

int main(){
    cout<<power(3,4);
    
}