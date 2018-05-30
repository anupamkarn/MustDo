#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> mp;
	mp.insert(make_pair(1,2));
	mp.insert(make_pair(2,2));
	mp.insert(make_pair(3,2));
	mp[4]=2;
	cout<<mp[4]<<endl;
	double x,y,z;
	y=2;z=3;
	x= y/z;
	cout<<x<<endl;
	float f= (float)4/6;
	cout<<ceil((float)2/3)<<endl;
	priority_queue<int> pq;
	pq.push(3);
	pq.push(5);
	pq.push(7);
	pq.push(1);
	pq.push(2);
	//cout<<pq<<endl;
	int g=20;
	//int ffs(int g);
	cout<<bitset<8>(g)<<endl;
	//int t = bitset<8>(g);
	//cout<<t<<endl;
	long long q = 2147483648;
	cout<<q; 
	//cout<<ffs;
 	
 return 0;
}

