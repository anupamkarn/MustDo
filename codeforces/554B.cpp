#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin>>n;
	long count=0,k,z;
	vector<long> v;
	while(((n+1)&(n))&&count<5){
		k = (int)(log2(n)); 
  		v.push_back(k);
    	z = (int)(pow(2, k)+0.5);
    	cout<<z<<endl;
    	n = n^(z-1);
    	cout<<n<<endl;
    	if(!((n+1)&(n))){
    		count++;
    		break;
		}
    	n++;
    	cout<<n<<endl;
    	count+=2;
	}
	if(v.empty()) cout<<"0"<<endl;
	else{
		cout<<count<<endl;
		for(long i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
		}
	}
	cout<<endl;

	return 0;
}

