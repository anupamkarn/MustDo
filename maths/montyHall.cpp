//Monty hall problem: ans is telling the probability of selecting other door after opening of doors having goats behind

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double nu = (float)1/n;
        double de = nu + (1-nu);
        double ans = nu/de;
        cout<<fixed<<setprecision(6)<<1-ans<<endl;
    }
    return 0;
}
