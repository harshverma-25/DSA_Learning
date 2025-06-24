#include<iostream>
using namespace std;
int main(){

    string name;
    cout<<"Enter the String : ";
    getline(cin, name);

    int i = 0;
    while(name[i] != '\0'){
        if(i % 2 == 0){
            name[i] = 'a';
        }
        i++;
    }
    cout << "Updated String: " << name << endl;
    
}