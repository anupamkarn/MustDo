#include<bits/stdc++.h>

using namespace std;

void build(int node, int start, int end){
	if(start==end){
		tree[node]=a[start];
	}
	
	else{
		int mid = (start+end)/2;
		
		build(node*2, start, mid);
		
		build(node*2+1, mid+1, end);
		
		tree[node]=tree[node*2]+tree[node*2+1];
	}
}

int main(){
	
 return 0;
}

