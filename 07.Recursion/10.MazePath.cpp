#include<iostream>
using namespace std;

int MazePath(int sr, int sc, int er, int ec){

    if(sr>er || sc>er) return 0;
    if(sr==er && sc==er) return 1;

      int rightways = MazePath(sr, sc+1, er, ec);
      int downways = MazePath(sr+1, sc, er, ec);

      return rightways + downways;
}
void PrintPath(int sr, int sc, int er, int ec, string s){

    if(sr>er || sc>er) return ;
    if(sr==er && sc==er) {
        cout<<s<<endl;
        return;
    }

      PrintPath(sr, sc+1, er, ec, s+"R");
      PrintPath(sr+1, sc, er, ec, s+"D");

      
}
  

int main(){
    cout<<MazePath(0,0,3,3);
    PrintPath(0,0,3,3,"");
    
}