#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int M,N,z,num,sum1=0,sum2=0,x;
        cin>>N>>M;
        vector<vector <char> > v(N, vector<char> (M));
        vector<int> c;
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cin>>v[j][k];
            }
        }
        
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cout<<v[j][k]<<" ";
            }
            cout<<endl;
        }
    }
    
    //another method of doing 
    vector<vector <int> >d;
  	vector <int> p;
  	p.push_back(4);
  	d.push_back(p);
  	cout<<d[0][0];
	
	    

}
