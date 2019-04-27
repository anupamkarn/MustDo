#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n,m,even=0,odd=0,x;
	cin>>n>>m;
	for(long i=0; i<n; i++){
		cin>>x;
		if(x%2==1) odd++;
		else even++;
	}
	long count=0;
	for(long i=0; i<m; i++){
		cin>>x;
		if(x%2==1){
			if(even>0){
				even--;
				count++;
			}
		}
		else{
			if(odd>0){
				odd--;
				count++;
			}
		}
	}
	cout<<count<<endl;

	return 0;
}

