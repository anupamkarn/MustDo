#include <bits/stdc++.h>
using namespace std;

//int binomial(int n, int k){
//    if(k==0||k==1){
//        return 1;
//    }
//    
//    return binomial(n-1,k-1) + binomial(n-1,k);
//}

int binomialCoeff(int n, int k)
{
    int C[k+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1;  // nC0 is 1
 
    for (int i = 1; i <= n; i++)
    {
        // Compute next row of pascal triangle using
        // the previous row
        for (int j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}

int main()
{
//    int T;
//    cin>>T;
//    for(int i=0; i<T; i++){
//        int a,b,c,d;
//        long long pro=1, sum=0;
//        cin>>a>>b>>c>>d;
//        for(int j=a; j<=b; j++){
//            for(int k=c; k<=d; k++){
//                pro*=binomialCoeff(j,k);
//            }
//            sum+=pro;
//        }
//        cout<<sum<<endl;
//
//    }
		cout<<binomialCoeff(10,2);
    return 0;
}

