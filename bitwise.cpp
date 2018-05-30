#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long N;
	cin>>N;
	long x,m,n,max1=0,max2=0,final1=0,final2=0;
	vector <long> a;
	vector <long> b;
	for(long i=0; i<N; i++){
		cin>>x;
		max1+=x;
		a.push_back(x);
	}
	for(long i=0; i<N; i++){
		cin>>x;
		max2+=x;
		b.push_back(x);
	}
	m=a[0]|a[1];
	for(long i=2; i<N; i++){
		 m=m|a[i];
	}
	n=b[0]|b[1];
	for(long i=2; i<N; i++){
		 n=n|a[i];
	}
	
	if(final1==final2)
		cout<<-1;
	if(final1>final2)
		cout<<1<<" "<<final1-final2;
	else
			cout<<2<<" "<<final2-final1;
 return 0;
}

