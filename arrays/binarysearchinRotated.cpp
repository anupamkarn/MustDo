#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> A = {4,5,6,7,8,2,3};
	int B = 4;
	int l=0,r=A.size()-1,mid;
    while(l<=r){
    	cout<<"in"<<endl;
        mid = l+(r-l)/2;
        if(A[mid]>A[mid+1]) break;
        if(A[mid]<A[mid-1]) mid=mid-1; break;
        if(A[r]<A[mid])
            l=mid+1;
        else if(A[l]>A[mid])
            r=mid-1;
    }
    cout<<mid<<endl;
    if(A[mid]==B){
        return mid;
    }
    if(A[0]<=B&&B<A[mid]){
        l=0;r=mid;
    }
    else{
        l=mid+1;r=A.size()-1;
    }
    while(l<=r){
        mid = l+(r-l)/2;
        if(A[mid]==B) return mid;
        if(A[mid]>B) r=mid-1;
        else l=mid+1;
    }
    return -1;	

}

