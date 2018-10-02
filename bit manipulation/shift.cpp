#include<bits/stdc++.h>

using namespace std;

int main(){
	int POWER[55];
	POWER[0]=1;
	//cout<<POWER[0]<<endl;
	for(int i = 1; i < 35; i++){
		POWER[i] = POWER[i - 1] << 1;
		cout<<POWER[i]<<endl;	
	} 
 return 0;
}

