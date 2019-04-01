#include<bits/stdc++.h>

using namespace std;

long product(int x) 
{ 
    long prod = 1; 
    while (x) { 
        prod *= (x % 10); 
        x /= 10; 
    } 
    return prod; 
} 
  
// This function returns the number having 
// maximum product of the digits 
int findNumber(long l, long r) 
{ 
    // Converting both integers to strings 
    string a = to_string(l); 
    string b = to_string(r); 
  
    // Let the current answer be r 
    long ans = r; 
    for (int i = 0; i < b.size(); i++) { 
        if (b[i] == '0') 
            continue; 
  
        // Stores the current number having 
        // current digit one less than current 
        // digit in b 
        string curr = b; 
        curr[i] = ((curr[i] - '0') - 1) + '0'; 
  
        // Replace all following digits with 9 
        // to maximise the product 
        for (int j = i + 1; j < curr.size(); j++) 
            curr[j] = '9'; 
  
        // Convert string to number 
        int num = 0; 
        for (auto c : curr) 
            num = num * 10 + (c - '0'); 
  
        // Check if it lies in range and its product 
        // is greater than max product 
        if (num >= l && product(ans) < product(num)) 
            ans = num; 
    } 
  
    return ans; 
} 

int main(){
	
	long n;
	cin>>n;
	long x=findNumber(1,n);
	string s = to_string(x);
	long long p=1;
	for(int i=0; i<s.size(); i++){
		p*=s[i]-'0';
	}
	cout<<p<<endl;

 return 0;
}

