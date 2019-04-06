#include<bits/stdc++.h>

using namespace std;

class smartPointer{
	int *ptr;
	
	public:
		explicit smartPointer(int *p) {
			ptr = p;
		}
		
		~smartPointer(){
			delete(ptr);
		}
		int &operator* (){
			return *ptr;
		}
	
};

int main(){
	int x = 5;
	smartPointer s(new int());
	*s = 5;
	cout<<*s<<endl;

 return 0;
}

