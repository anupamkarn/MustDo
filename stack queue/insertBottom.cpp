//inserting elelment at bottom without using any extra space,  recursion approach 

#include<bits/stdc++.h>

using namespace std;

void insertBottom(stack<int> &s, int a){
	if(s.empty()){
		s.push(a);
		return;
	}
	int b = s.top();
	s.pop();
	insertBottom(s,a);
	s.push(b);
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	insertBottom(s,7);
	for(int i=0; i<6; i++){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}

