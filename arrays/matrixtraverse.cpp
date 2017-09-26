#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,temp,n,m;
    cin>>T;
    for(int i=0; i<T; i++){
    	cin>>n>>m;
      vector<vector<int> > matrix(n);
      vector<int> final;
    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            cin>>temp;
            matrix[j].push_back(temp);
        }
    }
    int a=0,b=n,c=0,d=m;        //a is starting of row b is ending  of row
    for(int z=0; z<2; z++){				// c is starting of colomn d is ending of colomn
	
    for(int j=c; j<d-1; j++){
        final.push_back(matrix[c][j]);
    }
    c++;
    for(int j=a; j<b-1; j++){
        final.push_back(matrix[j][d-1]);
    }
    a++;
    
    for(int j=d-1; j>=a; j--){
    	final.push_back(matrix[b-1][j]);
	}
	a--;
	for(int j=b-1; j>=c; j--){
    	final.push_back(matrix[j][a]);
	}
    }
	/*for(int j=c; j>0; j--){
        final[n]=matrix[c][j];
    }
    c--;
    for(int j=d; j>0; j--){
        final[n]=matrix[c][j];
    }
    
    for(int j=d; j>0; j--){
        final[n]=matrix[c][j];
    }*/
    
    //}

    for(int j=0; j<final.size(); j++){

           cout<<final[j]<<" ";
        
    }
}
	return 0;

}
