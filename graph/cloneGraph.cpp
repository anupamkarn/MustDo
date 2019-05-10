//cClone given graph(Adj list), BFS and map stl used
 
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    queue<UndirectedGraphNode *> q;
    map<UndirectedGraphNode *,UndirectedGraphNode *>mp;
    q.push(node);
    UndirectedGraphNode *newNode = new UndirectedGraphNode(node->label);
    mp[node] = newNode;
    while(!q.empty()){
        UndirectedGraphNode *u = q.front();
        q.pop();

            for(auto v:u->neighbors){
                auto it = mp.find(v);
                if(it==mp.end()){
                    UndirectedGraphNode *n = new UndirectedGraphNode(v->label);
                    mp[v] = n;
                    mp[u]->neighbors.push_back(n);
                    q.push(v);
                }
                else{
                    mp[u]->neighbors.push_back(it->second);
                }
            }
        
    }
    return mp[node];

}
