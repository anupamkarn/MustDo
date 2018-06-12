/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;

long long size[10001],arr[10001]; 
pair<long long, pair<long long,long long> > a[100000];
long long cost=0;
long long N,M;

void initial(long long arr[],long long N){
    for(long long i=0; i<=N; i++){  
        arr[i]=i;
        size[i]=1;
    }
}

int root(long long arr[], long long a){
    
    while(arr[a]!=a){
        a=arr[a];
    }
    return a;

}

void edge (long long arr[], long long size[], long long a, long long b){
    
    long long roota = root(arr,a);
    long long rootb = root(arr,b);
    //cout<<roota<<" "<<rootb;
    if(size[roota]>size[rootb]){
        arr[rootb]=arr[roota];
        size[roota]+=size[rootb];
        //size[rootb]=0;
    }
    else{
        arr[roota]=arr[rootb];
        size[rootb]+=size[roota];
        //size[roota]=0;
    }
    
}

int krushkal(pair<long long , pair<long long , long long> > a[]){
    for(long long i=0; i<M; i++){
        long long weight = a[i].first;
        long long x = a[i].second.first;
        long long y = a[i].second.second;
        if(root(arr,x)!=root(arr,y)){
            edge(arr, size, x, y);
            cost+=weight;
        }
    }
    return cost;
}

int main(){
    
    cin>>N>>M;
    initial(arr,N);
    long long x,y,weight;
    for(long long i=0; i<M; i++){
        cin>>x>>y>>weight;
        a[i]= make_pair(weight, make_pair(x,y));
    }
    
    sort(a, a+M);
    cost = krushkal(a);
    cout<<cost<<endl;
    
    
   return 0;
}
