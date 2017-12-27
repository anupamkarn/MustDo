#include<bits/stdc++.h>
using namespace std;

string PrimeDigitNumber (string N) {
   // Write your code here
   int num = atoi(N.c_str());
   long primes[num];
   long z;
   primes[0]= 0;
   primes[1]=0;
   for(int i=0; i<num; i++)
   primes[i]=1;
   for(int i=0; i<num; i++)
   if(primes[i]){
       z=i;
       for(int j=i+i; j<num; j+=i)
       primes[j]=0;
   }
   string val = to_string(z);
   for(int i=0; i<val.size(); i++){
       if(val[i]>7)
           val[i]=7;
    else if(val[i]>5)
       val[i]=5;
    else if(val[i]>3)
       val[i]=3;
   }
   return val;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string N;
    getline(cin, N);

    string out_;
    out_ = PrimeDigitNumber(N);
    cout << out_;
}
