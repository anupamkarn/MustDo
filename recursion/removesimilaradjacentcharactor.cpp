#include<bits/stdc++.h>

using namespace std;

string newstr;
char s;
set<int> se;
void removedup(string str, int i){
    if(i>str.size()-1)
        return;
    if(str[i]!=s){
        newstr = newstr+str[i];
        //cout<<" hello "<<endl;
        i++;
        s = str[i+1];
        removedup(str, i);
    }
    else{
        int k = newstr.size();
        se.insert(k);
        i++;
        s = str[i+1];
        removedup(str, i);
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        string finalstr=str;
        string last;
        bool flag=1;
       do{
        last=finalstr; 
        newstr.clear();
        se.clear();
        s = finalstr[1];
        removedup(finalstr, 0);
        // cout<<newstr<<endl;
        // for(auto it = se.begin(); it!=se.end(); it++)
        //  cout<<*it<<" ";
        string fstr;
        set<int>::iterator it=se.begin();
        for(int i=0; i<newstr.size(); i++){
            if(i==*it&&it!=se.end()){
                it++;
            }
            else{
                fstr = fstr+ newstr[i];
            }
        }
        if(fstr.empty()){
            flag=0;
            goto lable;
        }
        finalstr=fstr;
       }while(last!=finalstr);
        cout<<finalstr<<endl;
        lable:
        if(flag==0){
            string name;
            cout<<name<<endl;
        }
    }

    return 0;
}
