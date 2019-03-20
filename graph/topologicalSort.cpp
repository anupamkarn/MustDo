//topological sort implementation using queue and incoming edge count

int * topoSort(vector<int> graph[], int N)
{
    int in_e[N]={0};
    for(int i=0; i<N; i++){
        for(auto it=graph[i].begin(); it!=graph[i].end(); it++){
            in_e[*it]++;
        }
    }
    queue<int> q;
    int count=0;
    int* arr = new int[N];
    for(int i=0; i<N; i++){
        if(in_e[i]==0){
            q.push(i);
            arr[count]=i;
            count++;
        }
    }
    int x;
    while(!q.empty()){
        x = q.front();
        q.pop();
        for(auto it=graph[x].begin(); it!=graph[x].end(); it++){
            if(--in_e[*it]==0){
                q.push(*it);
                arr[count] = *it;
                count++;
            }
        }
    }
    return arr;
}
