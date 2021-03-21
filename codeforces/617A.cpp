#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin>>t;
	long long s;
	while(t--){		
		cin>>s;
		long long sm=0;
		long temp1, temp2;
		while(s>=10){
			temp1 = s/10;
			temp2 = s%10;
			sm = sm + temp1*10;
			s = temp1 + temp2;
		}
		sm = sm + s;
		cout<<sm<<endl;
	}

	return 0;
}

