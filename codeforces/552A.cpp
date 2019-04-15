#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long w,x,y,z;
	cin>>w>>x>>y>>z;
	long long h = max(w,max(x,max(y,z)));
	if(h==w){
		cout<<w-x<<" "<<w-y<<" "<<w-z;
	}
	else if(h==x){
		cout<<h-w<<" "<<h-y<<" "<<h-z;
	}
	else if(h==y){
		cout<<h-x<<" "<<h-w<<" "<<h-z;
	}
	else{
		cout<<h-w<<" "<<h-y<<" "<<h-x;
	}

	return 0;
}

