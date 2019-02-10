#include<bits/stdc++.h>

using namespace std;

int main(){
	int w,h,u1,d1,u2,d2;
	cin>>w>>h>>u1>>d1>>u2>>d2;
	int t_h;
	for(int i=h; i>0; i--){
		w += i;
		if(i==d1){
			w = w-u1;
		}
		else if(i==d2){
			w = w-u2;
		}
	}
	if(w<0) cout<<"0"<<endl;
	else cout<<w<<endl;

 return 0;
}

