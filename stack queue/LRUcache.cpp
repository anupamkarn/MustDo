#include<bits/stdc++.h>

using namespace std;

int main(){
	

 return 0;
}

LRUCache::LRUCache(int N)
{   
    vector<pair<int, int> >v;
    n=N;
     //Your code here
}
/*Sets the key x with value y in the LRU cache */
int vis[1000]={0};
vector<pair<int, int> >v;
pair<int, int> p;
vector<pair<int, int> >::iterator final;
void LRUCache::set(int x, int y) 
{   
    if(vis[x]==0){
        if(v.size()==n){
            vis[x]++;
            p = v.front();
            int min=vis[p.first],z=p.first;
            for(vector<pair<int, int> >::iterator it=v.begin(); it!=v.end(); it++){
                p=*it;
                if(min>vis[p.first]){
                    min=vis[p.first];
                    z=p.first;
                    final=it;
                }
            }
            
            vis[z]=0;
            v.erase(final);
            v.push_back(make_pair(x,y));
        }
        else{
            vis[x]++;
            v.push_back(make_pair(x,y));
        }
    }
    else{
        for(int i=0; i<v.size(); i++){
            p = v[i];
            if(p.first==x){
                vis[x]++;
                p.second=y;
                v[i]=p;
            }
        }
    }
     //Your code here
}
/*Returns the value of the key x if 
present else returns -1 */
int LRUCache::get(int x)
{
    //Your code here
     if(vis[x]>=1){
    //     for(int i=0; i<v.size(); i++){
    //     p = v[i];
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
        for(int i=0; i<v.size(); i++){
            p = v[i];
            if(p.first==x){
                vis[x]++;
                return p.second;
            }
        }
    }
    else{
        return -1;
    }
}

