
#include<bits/stdc++.h>

using namespace std;

vector<pair<long long, long long> > v[100001];
long long M,N;
long long vis[10001];
long long dis[100001];
long long c=1000000000;

void initial(long long N){
    for(long long i=1; i<=N; i++){
        dis[i]=c;
        vis[i]=0;
    }
}

void dijkstra(){
    
    multiset<pair<long long, long long> >s;
    dis[1]=0;
    s.insert({0,1});
    
    while(!s.empty()){
        
        pair<long long, long long> p = *s.begin();
        s.erase(s.begin());
        
        long long weight=p.first, edge=p.second;
        
        if(vis[edge])
        continue;
        
        vis[edge]=1;
        
        for(long long i=0; i<v[edge].size(); i++){
            if(v[edge][i].second+dis[edge]<dis[v[edge][i].first]){
                dis[v[edge][i].first]=v[edge][i].second+dis[edge];
                s.insert({dis[v[edge][i].first],v[edge][i].first});
            }
        }    
    }
    
}

int main(){
    cin>>N>>M;
    initial(N);
    long long x,y,weight;
    for(long long i=0; i<M; i++){
        cin>>x>>y>>weight;
        v[x].push_back(make_pair(y,weight));
    }
    
    dijkstra();
    
    for(long long i=2; i<=N; i++){
        if(dis[i]==c){
            cout<<1000000000<<" ";
            continue;
        }
        cout<<dis[i]<<" ";
    }
    
    return 0;
}

