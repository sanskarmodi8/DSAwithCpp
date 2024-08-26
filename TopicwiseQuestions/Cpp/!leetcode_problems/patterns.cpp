#include <iostream>
using namespace std;

int main(){

    cout<<endl;

    // row wise incremental number solid rectangle
    for( int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout <<i <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // column wise incremental alphabets solid rectangle
    for( int i = 0; i<5; i++){
        for(int j = 97; j<102; j++){
            cout <<char(j) <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // column wise incremental, row wise continous solid rectangle
    for(int i=1; i<22; i+=5){
        for(int j=i; j<i+5; j++){
            cout <<j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // row wise incremental column wise reverse number right handed triangle
    for(int i=1; i<6; i++){
        for(int j=i; j>0; j--){
            cout <<j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // column wise incremental number upside down right handed triangle
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout <<j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // row wise incremental column wise reverse alphabets left handed triangle;
    for(int i=0; i<5; i++){
        for(int j=0; j<5-(i+1); j++){
            cout <<" ";
        }
        for(int k=97+i; k>=97+0; k--){
            cout <<char(k);
        }
        cout<<endl;
    }
    cout <<endl;

    // vertical axis symmetrical upside down number pyramid
    for(int i=5; i>=1; i--){
        for(int j=1; j<=5-i; j++){
            cout <<" ";
        }
        for(int k=1; k<=i; k++){
            cout <<k;
        }
        for(int l=i-1; l>0; l--){
            cout <<l;
        }
        cout<<endl;
    }
    cout <<endl;

    // rectangular container with diamond hollow space
    for(int i=4; i>0; i--){
        for(int j=i; j>0; j--){
            cout <<"* ";
        }
        for(int k=0; k<4-i; k++){
            cout<<"    ";
        }
        for(int l=0; l<i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<i+1; j++){
            cout <<"* ";
        }
        for(int k=0; k<2*(4-(i+1)); k++){
            cout<<"  ";
        }
        for(int l=0; l<i+1; l++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    // butterfly
    for(int i=0; i<4; i++){
        for(int j=0; j<i+1; j++){
            cout <<"* ";
        }
        for(int k=0; k<2*(4-(i+1)); k++){
            cout<<"  ";
        }
        for(int l=0; l<i+1; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=4; i>0; i--){
        for(int j=i; j>0; j--){
            cout <<"* ";
        }
        for(int k=0; k<4-i; k++){
            cout<<"    ";
        }
        for(int l=0; l<i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
}
