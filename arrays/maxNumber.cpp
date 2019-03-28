#include<bits/stdc++.h>

using namespace std;

vector<int> r;

void num(vector<pair<int,int> > &v){
	int s=0,k=1;
	vector<int> temp;
	for(auto u:v){
		while(u.second--){
			temp.push_back(u.first);
			//cout<<u.first<<" ";
		}
	}
	//cout<<endl;
	int i = temp.size();
	if(!r.empty()){
		if(r.size()>i) return;
		else if(r.size()==i){
			for(int h=0; h<i; h++){
				if(r[h]>temp[h]) break;
				else if(r[h]<temp[h]){
					for(int k=h; k<i; k++){
						r[k]=temp[k];
					}
					break;
				}
			}
		}
		else{
			//cout<<"bla"<<endl;
			r.clear();
			for(int k=0; k<i; k++){
				r.push_back(temp[k]);	
			}
		}
	}
	else{
		for(int k=0; k<i; k++){
			r.push_back(temp[k]);
		}
	}
	return;
}

int main(){
	int t;
	cin>>t;
	long a[9];
	long n;
	while(t--){
		cin>>n;
		r.clear();
		for(int i=0; i<9; i++){
			cin>>a[i];
		}
		vector<pair<int,int> > v;
		long g=n;
		for(int i=8; i>=0; i--){
			v.clear();
			g=n;
			for(int j=i; j>=0; j--){
				if(g<=0) break;
				if(g/a[j]!=0){
					//cout<<i<<" "<<j<<" "<<g<<" "<<a[j]<<endl;
					v.push_back(make_pair(j+1,g/a[j]));
					g=g-(g/a[j])*a[j];
				}
			}
			num(v);
		}
		if(!r.empty()){
			for(auto u:r){
				cout<<u;
			}
		}
		else cout<<"-1";
		cout<<endl;	
	}
	return 0;
}

