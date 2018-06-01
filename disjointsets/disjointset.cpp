/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;

int size[1001],arr[1001];

void initial(int arr[],int N){
    for(int i=0; i<=N; i++){  
        arr[i]=i;
        size[i]=1;
    }
}

int root(int arr[], int a){
    
    while(arr[a]!=a){
        a=arr[a];
    }
    return a;

}

void edge (int arr[], int size[], int a, int b){
    
    int roota = root(arr,a);
    int rootb = root(arr,b);
    //cout<<roota<<" "<<rootb;
    if(size[roota]>size[rootb]){
        arr[rootb]=arr[roota];
        size[roota]+=size[rootb];
        size[rootb]=0;
    }
    else{
        arr[roota]=arr[rootb];
        size[rootb]+=size[roota];
        size[roota]=0;
    }
    
}

int main(){
    
    int N,M;
    cin>>N>>M;
    initial(arr,N);
    int x,y;
    for(int i=0; i<M; i++){
        cin>>x>>y;
        size[1001]={1};
        edge(arr,size,x,y);
        vector<int>v;
        //cout<<"bla";
        for(int j=1; j<=N; j++){
            
            if(size[j]!=0){
                v.push_back(size[j]);
            }
        }
        sort(v.begin(),v.end());
        for(int j=0; j<v.size(); j++)
            cout<<v[j]<<" ";
        cout<<endl;
    }
   return 0;
}
