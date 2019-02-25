#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long n,a,b,p_a=0,p_b=0,count=0,x,y;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a==p_a&&b==p_b){
			p_a=a;p_b=b; continue;
		} 
		x=max(p_a,p_b);
		y=min(a,b);
		if(x<y) count+=y-x+1;
		else if(x==y&&p_a!=0&&p_b!=0) count++;
		cout<<count<<endl;
		p_a=a;p_b=b;
		
	}
	cout<<count+1<<endl;

 return 0;
}

