// isCycliclic is a member function of graph class which is having V as total number of nodes and adj as adjacency list.
// isCyclic call dfs fnction for dfs traversal of this graph. 

bool dfs(list<int> adj[], bool vis[], int i, bool flag){
    if(vis[i]){
        flag = 1;
        return 1;
    }
    vis[i]=1;
    for(auto j=adj[i].begin(); j!=adj[i].end(); j++){
        flag = dfs(adj,vis,*j,flag);
        //cout<<i<<" "<<*j<<endl;
        if(flag) return 1;
        vis[*j]=0;
    }
    //cout<<i<<endl;
    vis[i]=0;
    return 0;
}
bool Graph :: isCyclic(){
    bool vis[V]={0};
    bool flag=0;
    //cout<<V<<endl;
    for(int i=0; i<V; i++){
        if(dfs(adj,vis,i,0)) return 1;
    }
    return 0;
}
