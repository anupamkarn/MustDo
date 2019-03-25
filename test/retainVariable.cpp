#include<bits/stdc++.h>

using namespace std;
void func(int M[2][2],int count){
	if(count==0){
		M[0][1]=0;
		cout<<M[0][0]<<M[0][1]<<M[1][0]<<M[1][1]<<endl;
		return;
	}
	func(M,count-1);
	cout<<M[0][0]<<M[0][1]<<M[1][0]<<M[1][1]<<endl;
	return;

}
int main(){
	 int M[2][2] = {{1,1},{0,0}};
	 int D[2][2];
	 D=M;
	func(M,1);
	cout<<M[0][0]<<M[0][1]<<M[1][0]<<M[1][1];
		cout<<D[0][0]<<D[0][1]<<D[1][0]<<D[1][1];
 return 0;
}

