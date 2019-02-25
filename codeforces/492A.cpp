#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[5]={1,5,10,20,100};
	long n,s=0,k,count=0,z,h;
	cin>>n;
	z=n;
	for(int i=4; i>=0; i--){
		if(s==z){
			break;
		}
		if(a[i]<=n){
			k=n%a[i];
			h=(n-k)/a[i];
			s+=h*a[i];
			count+=h;
			n=k;
			//cout<<count<<" "<<s<<endl;
		}
	}
	cout<<count<<endl;

 return 0;
}

