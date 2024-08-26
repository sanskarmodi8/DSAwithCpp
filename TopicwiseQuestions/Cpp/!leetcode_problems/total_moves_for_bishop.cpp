#include <iostream>
using namespace std;

int main(){
    cout<<"Enter row number of bishop (on 8 X 8 chess board): ";
    int a;
    cin>>a;
    cout<<"Enter column number of bishop (on 8 X 8 chess board): ";
    int b;
    cin>>b;
    cout<<"Total available moves for the bishop are: " <<min(8-a,8-b)+min(8-a,b-1)+min(a-1,b-1)+min(a-1,8-b) <<endl;
}