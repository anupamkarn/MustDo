#include<bits/stdc++.h>

using namespace std;

int main(){
	int x=2^4;
	x=__builtin_popcount(x);
	cout<<x<<endl;
	int y=5;
	int num=y/log(y);
	cout<<num<<endl;
	int n=20;
	bool prime[n+1];
    int count=0;
    int last;
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p){
                prime[i] = false;
                
            }
			 
        }
    }
    for(int i=2; i<=n; i++){
    	if(prime[i]){
    		count++;
		}
	}
	cout<<count<<endl;
	 
 return 0;
}

