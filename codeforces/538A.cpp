#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long x,y,z,a,b,c;
	cin>>x>>y>>z>>a>>b>>c;
	if(x>a){
		cout<<"NO";
	}
	else if(x==a){
		if(y>b){
			cout<<"NO";
		}
		else if(y==b){
			if(z<=c){
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		else if(y<b){
			if(z<=c){
				cout<<"YES";
			}
			else if((b-y)>=(z-c)){
				cout<<"YES";
			} 
			else{
				cout<<"NO";
			}			
		}
	}
	else if(x<a){
		if(y>b){
			if((a-x)>=(y-b)){
				if(z<=c||(a-x)-(y-b)>=(z-c))
					cout<<"YES";
				else cout<<"NO";	
			}
			else{
				cout<<"NO";
			}
		}
		else if(y==b){
			if(z<=c){
				cout<<"YES";
			}
			else if((a-x)>=(z-c)){
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		else if(y<b){
			if(z<=c){
				cout<<"YES";
			}
			else if((b-y)+(a-x)>=(z-c)){
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		
	}	

 return 0;
}

