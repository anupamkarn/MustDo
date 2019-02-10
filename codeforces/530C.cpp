#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	bool flag=1;
	int num=0,j;
	int n =s.size();
	for(int i=0; i<n; i++){
		if(flag&&s[i]=='*'){
			flag=0;
			j=i;
		}
		else if(s[i]=='?'||s[i]=='*'){
			num++;
			continue;
		}
	}
	char st[k];
	if(n-2*num>k){
		cout<<"Impossible"<<endl;
		goto lable;
	}
	else{
		int count=0;
		for(int i=0; i<n; i++){
			if(flag==1){
				for(int i=0; i<n; i++){
					if(count!=k){
						if(s[i]!='?'){
							st[count]=s[i];
							count++;
						}
					}
				}
				break;
			}
			else if(i==j){
				while(k-(n-num)!=0){
					st[count]=s[j];
					count++;
				}
			}
			else if(s[i+1]=='?'||s[i+1]=='*'||s[i]=='?'||s[i]=='*'){
				st[count]=s[i];
				count++;
			}
		}
	}
	cout<<st<<endl;
	lable:;
 return 0;
}

