#include<bits/stdc++.h>

using namespace std;

int josephus(int n, int k);
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}
int recur(int a[], int n, int k);
int josephus(int n, int k)
{
   //Your code here
   int a[n];
   memset(a,0,sizeof(a));
   //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
   return recur(a, n, k);
}
int recur(int a[], int n, int k){
    if(n==1)
    {
        int i=0;
        while(a[i]!=0){
           i++; 
        }
        return i+1;
    }
    int num=0;
    int i=0;
    while(i<n){
        if(num==k and a[i]!=1){
            a[i]=1;
            num=0;
            break;
        }
        else if(a[i]==1){
            if(i==n-1) i=0;
            else
            i++;
        }
        else if(a[i]==0){
            if(i==n-1) i=0;
            else
            i++;
            num++;
            //cout<<i<<endl;
        }
    }
    return recur(a,n-1,k);
}

