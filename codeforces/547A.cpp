#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,m,x,k,count=0;
	cin>>n>>m;
	if(m%n==0){
		x = m/n;
		if(x==1) cout<<"0"<<endl;
		else if(x%2==0){
			while(x%2==0){
				count++;
				x=x/2;
			}
			if(x==1) cout<<count<<endl;
			else if(x%3==0){
				while(x%3==0){
					count++;
					x=x/3;
				}
				if(x==1) cout<<count<<endl;
				else cout<<"-1"<<endl;
			}
			else cout<<"-1"<<endl;
		}
		else if(x%3==0){
			while(x%3==0){
				count++;
				x=x/3;
			}
			if(x==1) cout<<count<<endl;
			else if(x%2==0){
				while(x%2==0){
					count++;
					x=x/2;
				}
				if(x==1) cout<<count<<endl;
				else cout<<"-1"<<endl;
			}
			else cout<<"-1"<<endl;
		}
		else cout<<"-1"<<endl;
	}
	else cout<<"-1"<<endl;;
return 0;	
}

