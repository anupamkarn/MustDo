// finding Minimum spanning tree using krushkal which is implemented using disjoint set(Which is not implemented optimaly), adj index is vertex and the first element of pair is also vertex second element is weight.
//disjoint set can be implemented optimaly using size array which will have the record of element of two joining components, so as to join them such that it should be balanced.
int root(int A[], int i){
    while(A[i]!=i){
        i=A[i];
    }
    return i;
}
void edge(int A[], int x, int y){
    A[y]=root(A,x);
}
int spanningTree(int V, int e, vector<pair<int, int>> adj[])
{
    multiset<pair<int,pair<int,int> > > ms;
    int A[V];
    long count=0;
    for(int i=0; i<V; i++){
        A[i]=i;
        for(auto u:adj[i]){
            ms.insert({u.second,{i,u.first}});
        }
    }
    for(auto u:ms){
        int x = u.second.first;
        int y = u.second.second;
        int w = u.first;
        if(root(A,x)!=root(A,y)){
            edge(A,x,y);
            count+=w;
        }
    }
    return count;
}
