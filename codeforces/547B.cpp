#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	cin>>n;
	bool arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	long count_r=0,i=n-1,count_l=0,count=0;
	if(arr[n-1]){
		while(arr[i]&&i>=0){
			i--;
			count_r++;
		}
	}
	if(arr[0]){
		i=0;
		while(arr[i]&&i<n){
			i++;
			count_l++;
		}
	}
	long max_count=INT_MIN;
	for(i=0; i<n; i++){
		if(arr[i]){
			count++;
		}
		else if(count>max_count){
			max_count=count;
			count=0;
		}
		else count=0;
	}
	if(max_count>count_r+count_l) cout<<max_count<<endl;
	else cout<<count_r+count_l<<endl;

 return 0;
}

