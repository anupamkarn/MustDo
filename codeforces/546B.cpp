#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,count=0;
	cin>>n>>k;
	if(k==n||k==1){
		count=3*n;
		cout<<count<<endl;
	}
	else{
		if(k>=n-k+1){
			count+=2*(n-k+1)+1;
			count+=2*(n-k);
			count+=k-1+(k-1)*2;
		}
		else{
			count+=2*k +1;
			count+=2*(k-1);
			count+=n-k+(n-k)*2;
		}
		cout<<count<<endl;
	}
	

 return 0;
}

