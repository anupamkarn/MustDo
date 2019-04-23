#include<bits/stdc++.h>

using namespace std;

void func(int arr[]){
	arr[1]=1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[2];
	arr[0]=0;
	arr[1]=0;
	func(arr);
	cout<<arr[0]<<arr[1];
	return 0;
}

