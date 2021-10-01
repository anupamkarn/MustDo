#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0; i<100; i++){
		int x = n+i;
		string s = to_string(x);
		int sm=0;
		for(int j=0; j<s.size(); j++){
			sm+=s[j]-'0';
		}
		if(sm%4==0){
			cout<<x<<endl;
			return 0;
		}
	}

	return 0;
}

