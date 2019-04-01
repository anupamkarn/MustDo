#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	cin>>n;
	long right,left,x;
	for(long i=0; i<n; i++){
		cin>>x;
		if(x==0){
			left = i+1;
		}
		else{
			right = i+1; 
		}
	}
	if(left>right) cout<<right<<endl;
	else cout<<left<<endl;
 return 0;
}

