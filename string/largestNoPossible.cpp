#include<bits/stdc++.h>

using namespace std;

int myCompare(string X, string Y) 
{ 
   
    string XY = X.append(Y); 
  
   
    string YX = Y.append(X); 
  
   
    return XY.compare(YX) > 0 ? 1: 0; 
} 

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        vector<string> v;
        string s;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s = to_string(a[i]);
            v.push_back(s);
        }
        sort(v.begin(),v.end(),myCompare);
        
        for(int i=0; i<n; i++){
            cout<<v[i];
        }
        cout<<endl;
        
    }

    return 0;
}
