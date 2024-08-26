#include <iostream>
using namespace std;

// LEETCODE - https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

int main(){
	char target = 'x';
	char letters[] = {'x', 'x', 'x', 'x', 'x', 'x', 'y', 'y', 'y', 'y'};
	int s = 0;
	int size = sizeof(letters)/sizeof(letters[0]) -1;
        int e = size;
        while(s<=e){ 
            int m = s + (e-s)/2;
            if((int)letters[m]>(int)target){e=m-1;}
            else if((int)letters[m]<=(int)target){s=m+1;}
        }
	cout<<"Floor letter index: "<<s%size<<endl;
}
