bool isBipartite(int G[][MAX],int V)
{
     int vis[V];
     memset(vis, -1, sizeof(vis));
     vis[0]=0;
     queue<int> q;
     q.push(0);
     int j;
     for(int i=0; i<V; i++){
         if(vis[i]==-1){
             vis[i]=0;
             q.push(i);
         }
         while(!q.empty()){
                     j = q.front();
                     q.pop();
                     for(int k=0; k<V; k++){
                         if(vis[k]==-1&&G[j][k]){
                            if(vis[j]==1){
                                vis[k]=0;
                            }
                            else{
                                vis[k]=1;
                            }
                            q.push(k);
                         }
                         else if(G[j][k]){
                             if(vis[j]==1){
                                 if(vis[k]==0) continue;
                                 else return 0;
                             }
                             else{
                                 if(vis[k]==1) continue;
                                 else return 0;
                             }
                         }
                     }
                 }
     }
     return 1;
}
