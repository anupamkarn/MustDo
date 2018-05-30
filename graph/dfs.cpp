#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long N,M,x;
    cin>>N>>M;
    long a,b;
    bool aux[N+1]={0};
    vector <int> v[N+1];
    for(int i=0; i<M; i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    stack <int> s;
    cin>>x;
    aux[x]=1;
    int q;
    s.push(x);
    
    while(!s.empty()){
        q = s.top();
        s.pop();
        for(int i=0; i<v[q].size(); i++){
            if(aux[v[q][i]]==0){
                aux[v[q][i]]=1;
                s.push(v[q][i]);
            }
        }
    }
    long count=0;
    for(int i=1; i<N+1; i++){
        if(aux[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
 return 0;
}

