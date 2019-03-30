#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		if(n==1){
			cout<<"1"<<endl; continue;
		} 
		int cnt=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				for (int i = 1; i <= sqrt(i*j); i++) { 
        			if (i*j % i == 0) { 
           
            			if ((i*j) / i == i) 
                			cnt++; 
  
            			else  
                			cnt = cnt + 2; 
        			} 
    			} 
			}
		}
		cout<<cnt-1<<endl;
	}
	

 return 0;
}

