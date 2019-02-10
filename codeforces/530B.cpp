#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	cin>>n;
	if(n==1) cout<<2<<endl;
	else if(n==2) cout<<3<<endl;
	else{
		double f = sqrtl(n);
		long num = f;
		long long x = num*num;
		if(num==f){
			cout<<num*2<<endl;
		}
		else{
			if(x+num>=n){
				cout<<num*2+1<<endl;
			}
			else{
				cout<<num*2+2<<endl;
			}
		}
	}
	
 return 0;
}

