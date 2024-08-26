#include <iostream>
using namespace std;

int main(){
	int n=15;
	int arr[] = {2,3,5,9,14,16,18};
	int s=0;
	int e=sizeof(arr)/(sizeof(arr[0])) -1;
	while(s<e){
		int m = s + (e-s)/2;
		if(arr[m]<n){
			s=m;
		} else if(arr[m]>n){
			e=m-1;
		}
	}
	cout<<"Ceil index: "<<s<<endl;
}
