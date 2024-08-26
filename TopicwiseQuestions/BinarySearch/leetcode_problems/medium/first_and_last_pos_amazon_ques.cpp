#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

int main(){
	int arr[] = {3,7,7,7,7,8,8,10};
	int target = 7;
	int s = 0;
	int e = sizeof(arr)/sizeof(arr[0]);
	int pos[2] = {-1,-1};
	while(s<=e){
		int m = s + (e-s)/2;
		if(arr[m]>target){e = m-1;}
		else if(arr[m]<target){s=m+1;}
		else{
			pos[0] = m;
			e = m-1;
		}
	}
	s=0;
	e=sizeof(arr)/sizeof(arr[0]);
        while(s<=e){ 
                int m = s + (e-s)/2;
                if(arr[m]>target){e = m-1;}
                else if(arr[m]<target){s=m+1;}
                else{ 
                        pos[1] = m;
                        s = m+1;
                }
        }
	cout<<"Start Index: "<<pos[0]<<" ,Last Index: "<<pos[1]<<endl;
	return 0;
}
