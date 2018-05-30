#include<bits/stdc++.h>

using namespace std;

void convert(int num){
	int rem;
	rem = num%2;
	//cout<<rem;
	if(num<=1){
		cout<<num;
		return;
	}
	convert(num/2);
	cout<<rem;
}
int main(){

	int n;
	cin>>n;
	//char buf[33];
	//itoa(n,buf,2);
	//cout<<buf;
	convert(n);
 return 0;
}
//void binary(int num)
//{
//    int rem;
// 
//    if (num <= 1)
//    {
//        cout << num;
//        return;
//    }
//    rem = num % 2;
//    binary(num / 2);
//    cout << rem;
//}
// 
//int main()
//{
//    int dec, bin;
//    cout << "Enter the number : ";
//    cin >> dec;
// 
//    if (dec < 0)
//        cout << dec << " is not a positive integer." << endl;
//    else
//    {
//        cout << "The binary form of " << dec << " is ";
//        binary(dec);
//        cout << endl;
//    }
//    return 0;
//}
