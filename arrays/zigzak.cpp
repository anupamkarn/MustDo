	#include<bits/stdc++.h>
	
	using namespace std;
	
	int main(){
	 int n;
	 priority_queue<int> pq;
	 cout<<"Enter no of elements of array"<<endl;
	 cin>>n;
	 cout<<n;
	 int a[n],b;
	 for(int i=0; i<n; i++){
	 	 cin>>b;
		 pq.push(b);
	 }
	 
	//for(int i=0; i<n; i++){
	//	cout<<pq.top()<<" ";
	//	pq.pop();
	//}
	 
	 for(int i=1; i<n; i+=2){
	 	a[i]=pq.top();
	 	pq.pop();
	 }
	 
	 for(int i=0; i<n; i+=2){
	 	a[i]=pq.top();
	 	pq.pop();
	 }
	 
	
	 for(int i=0; i<n; i++){
	cout<<a[i]<<" ";
	}
	 return 0;
	}

