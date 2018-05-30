#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	cin>>str;
    int len = str.length();
    int value=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
        int f = str[i];
		//cout<<()str[i]<<endl;
		value=value*10+str[i]-'0';
        
		}
		else
        goto lable;
    }
    cout<<value;
    lable:
	cout<<"not";

 return 0;
}

