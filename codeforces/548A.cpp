#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int even=0;
	for(int i=0; i<n; i++){
		if((str[i]-'0')%2==0){
			even+=i+1;
		}
	}
	cout<<even<<endl;

 return 0;
}

