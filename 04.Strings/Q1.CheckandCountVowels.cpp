#include<iostream>
using namespace std;
int main(){

    string s = "harshverma";
    int i = 0;
    int vowels = 0;
    while(s[i] != '\0'){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
            vowels++;
            
        }
        i++;
    }
    cout<<vowels;
}