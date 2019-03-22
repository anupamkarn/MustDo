#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	cin>>n;
	long a[n];
	long x=INT_MIN;
	for(long i=0; i<n; i++){
		cin>>a[i];
		if(a[i]>x) x=a[i];
	}
	if(n==1){
		cout<<a[0]<<endl;
	}
	long maxi=INT_MIN,count=0,last_i=0,last_e=0,start_i=0,start_e=0;
	for(long i=1; i<n; i++){
		if(a[i]>a[i-1]){
			if(count==0){
				count+=a[i]+a[i-1];
				last_i=i-1;
				last_e=a[i-1];
			}
			else
				count+=a[i];	
		}
		else{
			if(count>maxi){
				start_i=last_i;
				start_e=last_e;
				maxi=count;
				count=0;
			}
		}
		//cout<<count<<endl;
	}
	
	if(count>maxi){
		start_i=last_i;
		start_e=last_e;
	}
	//cout<<start_i<<" "<<start_e<<endl;
	long aux=0;
	if(start_i>0)
	for(long i=start_i-1; i>=0; i--){
		start_e--;
		if(start_e==0) break;
		if(a[i]<start_e){
			start_e=a[i];
			aux+=a[i];
		}
		else if(a[i]>=start_e){
			aux+=start_e;
		}
	}
	if(count>maxi){
				maxi=count+aux;
	}
	if(maxi==INT_MIN||maxi==0) cout<<x<<endl;
	else cout<<maxi<<endl;
	
 return 0;
}

