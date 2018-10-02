/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;

int d[2][2]={{1,0},{0,1}};
int n,m;
bool turned_left,lower_part_done,flag;
int a[1000][1000],aux[1000][1000];
int count=0;

int dfs(int a[][1000], int i, int j, int aux[][1000], int count){
    
    int g;
    if(lower_part_done){
        flag=1;
        aux[i][j]=1;
        return 0;
    }
        
    if(turned_left)
        g=1;
    else
        g=0;
        
    aux[i][j]=1;
    
    for(int q=g; q<2; q++){
        
        int r=i+d[q][0];
        int s=j+d[q][1];
        
        if(r>=n&&r<0&&s>=m&&s<0&&aux[r][s]&&!a[r][s]){
            if(q==1&&turned_left){
                lower_part_done=1;
            }
            continue;
        }
        
        if(q==1){
            turned_left=1;
        }
        
        dfs(a, r, s, aux, count++);
        
    }
    
}

int main(){
    
    cin>>n>>m;
    //int a[n][m];
    //memset(a, 0, sizeof(a));
    char x;
    //int aux[1000][1000];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>x;
            if(x=='.')
                a[i][j]=1;
            else
                a[i][j]=0;
            aux[i][j]=0;    
        }
    }
    
    //flag=0;
    //moeleft=0;
    priority_queue<int> pq;
    int k;
    //memset(aux, 0, sizeof(aux));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1&&aux[i][j]==0){
                turned_left=0;
                
                lower_part_done=0;
                //count=0;
                flag=0;
                k = dfs(a, i, j, aux, 0);
                if(flag)
                    pq.push(0);
                else
                    pq.push(k);
            }
        }
    }
    if(pq.top()==0){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        cout<<pq.top()<<endl;
    }
    return 0;    
}
