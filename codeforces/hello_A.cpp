#include<bits/stdc++.h>

using namespace std;

int main(){
	string s1,s;
	cin>>s1;
	string a[5];
	bool flag=0;
	for(int i=0; i<5; i++){
		cin>>a[i];
		if(s1[0]==a[i][0] or s1[1]==a[i][1]) flag=1;
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	

 return 0;
}

