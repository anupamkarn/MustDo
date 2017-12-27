#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
	int n,m,temp;
	cin>>n>>m;
	vector<vector<int> > matrix(n);
      vector<int> final;
    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            cin>>temp;
            matrix[j].push_back(temp);
        }
    }
    int k=0,l=0;
    while(k<n && l<m){
    	for(int i=l;i<m;i++){
        final.push_back(matrix[k][i]);
		}k++;
		for(int i=k;i<n;i++){
        final.push_back(matrix[i][m-1]);
		}m--;
		if(k<n){
			for(int i=m-1;i>=l;i--){
        final.push_back(matrix[n-1][i]);
			
		}n--;}
		if(l<m){
			for(int i=n-1;i>=k;i--){
        final.push_back(matrix[i][l]);
			
		}l++;}
	}
	for(int i=0;i<final.size();i++)
	cout<<final[i]<<" ";
	cout<<endl;
}
 return 0;
}

