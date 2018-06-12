#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int, int> >q;
	q.push_back(make_pair(1,2));
	q.push_back(make_pair(2,3));
	q.push_back(make_pair(7,8));
	q.push_back(make_pair(4,3));
	pair<int, int> p;
	 for(int i=0; i<q.size(); i++){
	 	//cout<<q.front()<<endl;
	 	p=q[i];
	 	cout<<p.first<<endl;
	 }
	 
 return 0;
}

