#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,p_n=0,z=0,n_n=0;
	long x;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x>0) p_n++;
		else if(x<0) n_n++;
		else z++;
	}
	int f = ceil(n/2.0);
	//cout<<f<<" "<<p_n<<endl;
	if(z>f) cout<<"0"<<endl;
	else if(p_n>=f) cout<<f<<endl;
	else if(n_n>=f) cout<<f-2*f<<endl;
	else cout<<"0"<<endl;

 return 0;
}

