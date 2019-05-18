#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin>>n;
	string s,str;
	char c;
	cin>>s;
	if(n==0){
		cout<<"0"<<endl;
		return 0;
	}
	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}
	c=s[0];
	str+=c;
	for(int i=1; i<n; i++){
		if(i%2==1){
			if(s[i]==c){
				continue;
			}
			else{
				str+=s[i];
			}
		}
		else{
			str+=s[i];
			c=s[i];
		}
	}
	long x = str.size();
	if(x%2==1){
		cout<<n-x+1<<endl;
		str.pop_back();
		cout<<str<<endl;
	}
	else{
		cout<<n-x<<endl;
		cout<<str<<endl;
	}

	return 0;
}

