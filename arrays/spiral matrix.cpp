#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int T,x,m,n;
	cin>>T;
	 m=4;n=4;
	vector< vector<int> >v(n, vector<int> (m));
	while(T--){
	    m=4;n=4;
	    for(int i=0; i<m; i++){
	        for(int j=0; j<n; j++){
	            cin>>v[i][j];
	        }
	    }
	    int l = m+3;
	    int i=1;
	    int up=0,down=m-1,left=0,right=n-1;
	    int a=0,b=n-1,c=1,d=m-1,e=n-2,f=0,g=m-2,h=1;
	    vector<int> result;
	    while(l--){
	        if(i%4==1){
	           
	            for(int z=a; z<=b; z++){
	                result.push_back(v[up][z]);
	            }
	            up++;
	            a++;b--;i++;
	            //cout<<endl;
	        }
	        else if(i%4==2){
	            for(int z=c; z<=d; z++){
	                result.push_back(v[z][right]);
	            }
	            right--;
	            c++;d--;i++;
	           //cout<<endl;
	        }
	        else if(i%4==3){
	            for(int z=e; z>=f; z--){
	                result.push_back(v[down][z]);
	            }
	            down--;
	            f++;e--;i++;
	           //cout<<endl;
	        }
	        else if(i%4==0){
	            for(int z=g; z>=h; z--){
	                result.push_back(v[z][left]);
	            }
	            left++;
	            g++;h--;i++;
	           //cout<<endl;
	        }
//	        i++;
	    }
	    for(int i=0; i<16; i++){
	        cout<<result[i]<<" ";
	       // if(i%4==3){
	       //     cout<<endl;
	       // }
	    }
	    
	}
	return 0;
}
