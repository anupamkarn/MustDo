#include<bits/stdc++.h>

using namespace std;

int main(){
	set<char> s;
	vector <int> v;
	s.insert('z');
	s.insert('t');
	s.insert('a');
	s.insert('e');
	for(const auto &b : s){
		cout<<&b<<endl;
	}
	cout<<v.size();
 return 0;
}

