#include<bits/stdc++.h>

using namespace std;

unsigned int reverseBits(unsigned int num) 
{ 
	cout<<sizeof(num)<<endl;
	unsigned int NO_OF_BITS = sizeof(num) * 8; 
	unsigned int reverse_num = 0, i, temp; 

	for (i = 0; i < NO_OF_BITS; i++) 
	{ 
		temp = (num & (1 << i));
		cout<<temp<<endl; 
		if(temp) 
			reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); 
	} 

	return reverse_num; 
} 

int main() 
{ 
	unsigned int x = 3; 
	cout<<reverseBits(x)<<endl;
    return 0;
} 

