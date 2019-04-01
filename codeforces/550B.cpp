#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long a[n];
	long long e_sum=0,o_sum=0,ne=0,no=0,s=0;
	priority_queue<long> pq1;
	priority_queue<long> pq2;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0){
			pq1.push(a[i]);
			ne++;
		}
		else{
			pq2.push(a[i]);
			no++;
		} 
	}
	
	if(abs(no-ne)<=1){
		cout<<"0"<<endl;
	}
	else{
		while(!pq1.empty()&&!pq2.empty()){
			pq1.pop();
			pq2.pop();
		}
		if(pq1.empty()){
			pq2.pop();
			while(!pq2.empty()){
				s+=pq2.top();
				pq2.pop();
			}
		}
		else{
			pq1.pop();
			while(!pq1.empty()){
				s+=pq1.top();
				pq1.pop();
			}
		}
		cout<<s<<endl;
	}
	

 return 0;
}

