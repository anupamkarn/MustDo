#include<bits/stdc++.h>

using namespace std;

int c=0;
int a[3]={3,5,10};
void recur(int n, int j){
    if(n==0){
        c++;
        return;
    }
    for(int i=j; i<3; i++){
        if(n>=a[i]){
            recur(n-a[i],i);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        c=0;
        int n;
        cin>>n;
        recur(n,0);
        cout<<c<<endl;
    }

    return 0;
}
