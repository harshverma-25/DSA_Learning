#include<iostream>
using namespace std;


void TowerOFHanoi(int n, char S, char H, char D){

    if(n==0) return;
    TowerOFHanoi(n-1,S, D,H );
    cout<<S<<" -> "<<D<<endl;
    TowerOFHanoi(n-1,H,S,D);

}


int main(){

    int n = 3;
    TowerOFHanoi( n, 'A','B','C');
    
}