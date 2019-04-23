#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0,mini=1000;
	string str="ACTG";
	for(int i=0; i<=n-4; i++){
		count=0;
		count+=min(abs(str[0]-s[i]),min(('Z'-str[0])+abs('A'-s[i])+1,('Z'-s[i])+abs('A'-str[0])+1));
		count+=min(abs(str[1]-s[i+1]),min(('Z'-str[1])+abs('A'-s[i+1])+1,('Z'-s[i+1])+abs('A'-str[1])+1));
		count+=min(abs(str[2]-s[i+2]),min(('Z'-str[2])+abs('A'-s[i+2])+1,('Z'-s[i+2])+abs('A'-str[2])+1));
		count+=min(abs(str[3]-s[i+3]),min(('Z'-str[3])+abs('A'-s[i+3])+1,('Z'-s[i+3])+abs('A'-str[3])+1));
		if(count<mini) mini=count;
	}
	cout<<mini<<endl;

	return 0;
}

