//implemented using disjoint sets
int root(int i, int arr[]){
    while(arr[i]!=i){
        i = arr[i];
    }
    return i;
}
bool Graph :: isCyclic()
{
    int arr[V];
    bool vis[V]={0};
    int u,v;
    bool flag=0;
    for(int i=0; i<V; i++) arr[i]=i;
    for(int i=0; i<V; i++){
        //vis[i]=1;
        //cout<<i<<"->";
        for(auto it=adj[i].begin(); it!=adj[i].end(); it++){
                //cout<<" "<<*it;
                if(i<=*it){
                    u = root(*it,arr);
                    v = root(i,arr);
                    if(u==v) return 1;
                    arr[u]=v;
                }    
        }
        //cout<<endl;
    }
    return 0;
}
