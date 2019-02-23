#include<bits/stdc++.h>

using namespace std;

int main(){
	long w1,h1,w2,h2;
	cin>>w1>>h1>>w2>>h2;
	long count=0;
	count+=h1+h2+w1+w2+h2+h1+(w1-w2)+4;
	cout<<count<<endl;

 return 0;
}

