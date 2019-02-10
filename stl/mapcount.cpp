#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	int N;
	cin>>T;
	while(T--){
	    cin>>N;
	    double c=0;
	    map<string, double>m;
	    string str;
	    for(int i=0; i<N; i++){
	        cin>>str;
	        if(m.count(str)){
	            c+=m[str]/2.0;
	        }
	        else{
	            bool flag_a=0,flag_b=0;
	            double ct=0;
	            for(int j=0; j<str.size(); j++){
	                if(j==0){
	                    if(str[j]=='d'||str[j]=='f'){
	                        flag_a=1;
	                        ct+=0.2;
	                    }
	                    else{
	                    	flag_b=1;
	                    	ct+=0.2;
						}
	                }
	                else if(str[j]=='d'||str[j]=='f'){
	                    if(flag_a){
	                        ct+=0.4;
	                    }
	                    else{
	                        ct+=0.2;
	                        flag_a=1;
	                        flag_b=0;
	                    }
	                }
	                else if(str[j]=='j'||str[j]=='k'){
	                    if(flag_a){
	                        ct+=0.2;
	                        flag_b=1;
	                        flag_a=0;
	                    }
	                    else{
	                        ct+=0.4;
	                        flag_a=0;
	                        flag_b=1;
	                    }
	                }

	            }
	            m[str]=ct;
	            c+=ct;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}

