#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin>>q;
	while(q--){
		long long n;
		cin>>n;
		int count=0;
		int a[3]={2,3,5};
		for(int i=0; i<3; i++){
			if(n%a[i]==0){
				n=n/a[i];
				n=(int)(pow(2,i)+0.5)*n;
				count++;
				i=-1;
				//cout<<n<<endl;
			}
		}
		if(n==1){
			cout<<count<<endl;
		}
		else cout<<"-1"<<endl;
	}

	return 0;
}

