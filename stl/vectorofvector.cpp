#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int M,N,z,num,sum1=0,sum2=0,x;
        cin>>N>>M;
        vector<vector <char> > v(N, vector<char> (M));
        vector<int> c;
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cin>>v[j][k];
            }
        }
        
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cout<<v[j][k]<<" ";
            }
            cout<<endl;
        }
    }
  
//string str = "anupam karn";
    //for(int i=0; i< 2; i++){
    	//cin>>str;
    	
	//}
//    string s;
//    getline(cin, s);
//    //cin>>str;
//    cout<<s[4]<<endl;
//    vector<int> v;
//    cout<<str+s;
//    if(s[0]=='a'){
//    	cout<<"blabla"<<endl;
//	}
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.insert(v.begin()+1,8);
//    cout<<v[0]<<v[1]<<v[2]<<v[3]<<v[4];
return 0;
}
