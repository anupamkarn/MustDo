#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int lint;
 
const ll MODULO = 1e9+7;
 
int main() {
 
	int t;
	cin>>t;
 
	while(t--){
	    long int n,k,flag=1;
        cin>>n>>k;
 
        vector<long int> v;
 
        if(n==1){
            v.push_back(k);
            flag=0;
        }
 
        if(flag){
            if(k==1){
            for(int i=0;i<n;i++)
                v.push_back(k);
            } 
			
			else if (k==2){
                for(int i=0;i<n-1;i++)
                    v.push_back(1);
                v.push_back(2);
            } 
			
			else {
                long int power=0, bigNumber=0, num=2;
                while(pow(num, power)<=k){
                    bigNumber+=pow(2,power);
                    power++;
                }
                power--;
 
                long int temp=power;
                if(n<=power){
                    
					long int dummyBigNumber=bigNumber;
                    
					for(long int i=1;i<n;i++){
                        v.push_back(1<<temp);
                        temp--;
 						dummyBigNumber=(dummyBigNumber>>1);
                    }
                    v.push_back(dummyBigNumber);
                } 
				
				else {
                    
					for(long int i=0;i<power;i++){
                        v.push_back(1<<temp);
                        temp--;
                    }
                    
					for(long int i=0;i<(n-power);i++)
                        v.push_back(1);
 
                    if((n-power)%2==0)
                        v[0]++;
                }
            }
        }
 
        for(long int i=0;i<n;i++)
            cout<<v[i]<<" ";
 
        cout<<"\n";
 
	}
}
