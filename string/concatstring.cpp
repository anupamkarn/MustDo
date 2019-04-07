#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	long n;
	cin>>n;
	string str;
	str+=s[0];
	string final;
	for(int i=1; i<s.size(); i++){
		if(s[i-1]!=s[i]){
			if(str.size()!=n)
				final.append(str);
			str.clear();
			str+=s[i];	
		}
		else{
			str+=s[i];
		}
	}
	if(str.size()!=n)
		final=final+str;
	cout<<final<<endl;
	return 0;
}

