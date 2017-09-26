#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<vector <int> > a(3);
	for(int j=0; j<3; j++){
		for(int k=0; k<3; k++){
			int ele;
			cin>>ele;
			a[j].push_back(ele);
		}
	}
	
	for(int j=0; j<3; j++){
		for(int k=0; k<3; k++){
			
			cout<<a[j][k]<<" ";
		}
		cout<<endl;
	}
	
	
 return 0;
}

