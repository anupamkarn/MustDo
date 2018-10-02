#include<bits/stdc++.h>

using namespace std;

int main(){
	int A;
	cin>>A;
	int n = 2*A-1;
    vector<vector<int> >v(n, vector<int> (n));
    int temp = A;
    int k=A,z,h,t=A-2;
    for(int i=0; i<n; i++){
        z=A;h=A-2;
        //vector<int> m;
        for(int j=0; j<n; j++){
            if(i<=A-1){
                if(j<=A-1){
                    if(z>k){
                        v[i][j]=z;//.push_back(z);
                    }
                    else
                        v[i][j]=z;//.push_back(z);
                }
                else{
                    v[i][j]=v[i][h];//.push_back(v[i][h]);
                    if(h>0)
                    	h--;
                }                    
            }
            else{
                v[i][j]=v[t][j];//.push_back(v[t][j]);
                //cout<<t<<endl;
            }
            if(z>k)
                z--;
                
        }
        if(t>0&&i>A-1)
        	t--;
        if(temp>1)
            temp--;
		if(k>temp)
            k--;        
    }
    for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout<<v[j][k]<<" ";
            }
            cout<<endl;
    }
 	return 0;
}

