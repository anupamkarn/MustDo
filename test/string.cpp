#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	while(t--){
		string s;
		cin>>s;
		n = s.size();
		char arr[n+1];
		strcpy(arr , s.c_str());

		int original = 0 , minimum = 0;
		int a[n] , _a[n];

		for(int i = 0 ; i < n ; i++){
			_a[i] = a[i] = (int)(arr[i]) - 97;
		}
		
// 		for(int j=0 ; j<n ; j++){
// 		    cout<<_a[j]<<" ";
// 		}
// 		cout<<endl;

		int matx[n][n] = {}; 
		
		
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<i ; j++){
				if(a[i] > a[j]){
					matx[j][i] = 1;
					original++;
				}
			}
		}
		
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
			
			    cout<<matx[i][j]<<" ";
			}
			cout<<endl;
		}	
		
		minimum = original;
		
		int sum = original;
		
		for(int i=0 ; i<n ; i++){
			
			for(int j=1 ; j<=26 ; j++){
				
				_a[i] = (_a[i]+1)%26;
				
				sum += abs(a[i] - _a[i]);

				
				for(int k=0 ; k<i ; k++){
					
					if(_a[i] > _a[k]){
						if(matx[k][i] == 0){
							sum++;
						}
					} 
					else {
						if(matx[k][i] == 1){
							sum--;
						}
					}
				}
				
				if(sum < minimum)
					minimum = sum;
				
				sum = original;
			}
		}
		
		cout<<minimum<<endl;
		
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
			
			    cout<<matx[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}

