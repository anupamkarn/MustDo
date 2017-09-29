#include<bits/stdc++.h>

using namespace std;

int main(){

 int T,N;
 cin>>T;
 for(int i=0; i<T; i++){
 	cin>>N;
    int a[N],b[N];
 	int plateform=0,counta=0,countb=0;
 	for(int j=0; j<2*N; j++){
		 if(j<N){
		 	cin>>a[counta];
		 	counta++;
		 }
		 else{
		 cin>>b[countb];
		 countb++;
		 }
		 		
	 }
//cout<<endl;
	 
//for(int j=0; j<N; j++){
//	cout<<a[j]<<" ";
//}
//cout<<endl;
//for(int j=0; j<N; j++){
//	cout<<b[j]<<" ";
//}
	 for(int j=1; j<N; j++){
	 	for(int k=0; k<j; k++){
	 	if(a[k]<=a[j]&&a[j]<=b[k]){
	 	plateform++;
		 
		 }
		 }
	 }
	 cout<<plateform<<endl;
	 
 }
 return 0;
}


