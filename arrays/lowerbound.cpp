#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(39);
	v.push_back(42);
	v.push_back(50);
	
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(39);
	v1.push_back(42);
	v1.push_back(5);
	v1.push_back(52);
	
	copy(v1.begin(), v1.end(), back_inserter(v));
//	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}

 return 0;
}

