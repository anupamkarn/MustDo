#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	long long maxi=INT_MIN,count=0,cur=0,j;
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<a[0]<<endl;
		return 0;
	}
	for(long long i=n-1; i>n-2; i--){
		count+=a[i];
		cur = a[i];
		cur--;
		j=i-1;
		//cout<<count<<endl;
		while(j>=0&&cur!=0){
			//cout<<"a"<<endl;
			if(a[j]>=cur){
				count+=cur;
				cur--;
			}
			else{
				count+=a[j];
				cur=a[j];
				cur--;
			}
			j--;
		}
		if(count>maxi) 
			maxi=count;
		count=0;
	}
	
	cout<<maxi<<endl;
		
 return 0;
}

