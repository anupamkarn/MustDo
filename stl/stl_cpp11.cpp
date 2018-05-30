#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        bool flag=0,isOdd=0;
        if(str.length()%2==1)
        flag=1;
        map <char,vector<int> > mp;
        vector <int> final;
        for(int i=0; i<str.length(); i++){
            mp[str[i]].push_back(i+1);
        }
        //map <char,vector<int> > :: iterator it;
//        for( const auto &p : mp){
//        	cout<<p.first<<" :";
//        	for(const auto &s : p.second){
//        		cout<<s<<" ";
//			}
//			cout<<endl;
//		}
        vector <char> order;
        for ( const auto &p : mp )
        {
        	if(flag==0){
        		if(isOdd)
        		return -1;
			}
			
        	else if(isOdd==1)
        	return -1;
        	
			if(p.second.size()%2==1)
			isOdd=1;
			
            //vector <int>:: iterator finalit = final.begin();
			for ( const auto &s : p.second )
            {
            	if(p.second.size()%2==1){
				final.assign(p.second.begin(), p.second.end());
            		}
                else if(p.second.size()%2==0){
                	order.push_back(p.first);
                	int c=p.second.size()/2;
                	final.assign(p.second.begin(), p.second.begin()+c);
                	cout<<final[0]<<final[1]<<endl;
                	
                }
            }
        }
        //vector <char>:: iterator it = order.end();
        int i=order.size();
        for( const auto &p : mp){
        	if(p.first==order[i-1]&&i>=0){
        		for( const auto &s : p.second){
        			int c=p.second.size()/2;
        			final.assign(p.second.begin()+c+1, p.second.end());
        			//p.second.erase(p.second.begin(), p.second.end();
				}
				
			}
			i--;
		}
		for(int i=0; i<final.size(); i++){
			cout<<final[i]<<" ";
		}
		cout<<endl;
        
    }
 return 0;
}

