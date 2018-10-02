/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;

long long sum[1000001];

int main(){
    long long n,q,k,v;
    cin>>n;
    long long sumupto[n];
    memset(sum, 0, sizeof(sum));
    vector<long long> a;
    for(long i=0; i<n; i++){
        cin>>v;
        a.push_back(v);
    }
    cin>>q;
    sort(a.begin(), a.end());
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<endl;
    // }
    sumupto[0]=a[0];
    sum[a[0]]=a[0]*n;
    for(long i=1; i<n; i++){
        sumupto[i]=sumupto[i-1]+a[i];
        sum[a[i]]=sumupto[i-1]+(a[i]*(n-i));
    }
    long long mini,maxi,mid,temp,low;
    vector<long long>::iterator low1;
    for(long long z=0; z<q; z++){
        cin>>k;
        if(k>sum[n-1]){
            cout<<-1<<endl;
        }
        else{
            if(k<sum[0]){
                mini=1;
                maxi=a[0];
            }
            else{
                mini=a[0];
                maxi=a[n-1];
            }
            while(1){
                if(mini==maxi){
                    cout<<mini<<endl;
                    break;
                }
                mid=mini+(maxi-mini)/2;
                if(sum[mid]){
                    if(sum[mid]>k){
                        maxi=mid;
                    }
                    else{
                        mini=mid;
                    }
                }
                else{
                    low1 = lower_bound(a.begin(), a.end(), mid);
                    low = low1-a.begin()-1;
                    temp=sumupto[low-1]+a[mid]*(n-low+1);
                    if(temp>k){
                        maxi=temp;
                    }
                    else{
                        mini=temp;
                    }
                }
                if(mini>k){
                    cout<<mini<<endl;
                    break;
                }
            }
        }
        
    }    
    // for(int i=0; i<n; i++){
    //         cout<<sumupto[i]<<" "<<sum[i]<<endl;
    //     }
}
//5
//3 8 4 1 7
//5
//13
//19
//3
//25
//22
