#include<bits/stdc++.h>

using namespace std;

struct trie{
    trie *a[26];
    bool leaf;
};

trie *creatnode(){
    trie *newnode = new trie;
    for(int i=0; i<26; i++){
        newnode->a[i]=NULL;
    }
    newnode->leaf=false;
    return newnode;
}

void insert(trie *root, string s){
    int n = s.size();
    int temp;
    for(int j=0; j<n; j++){
        temp=s[j]-'a';
        //cout<<temp<<endl;
        if(root->a[temp]){
            root=root->a[temp];
        }
        else{
            root->a[temp]=creatnode();
            root=root->a[temp];
        }
        if(j==n-1){
            root->leaf=true;
        }
    }
}

bool search(trie *root, string word){
    int n = word.size();
    int temp;
    for(int i=0; i<n; i++){
        temp=word[i]-'a';
        if(root->a[temp]){
            if(root->a[temp]&&root->a[temp]->leaf&&i==n-1)
                return 1;
            else if(i==n-1&&!root->a[temp]->leaf||(i!=n-1&&root->a[temp]->leaf))
                return 0;
            else
                root=root->a[temp];
        }
        else{
            return 0;
        }
        
        
    }
    
}

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        string a[n];
        string word;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cin>>word;
        trie *root=creatnode();
        for(int i=0; i<n; i++){
            insert(root,a[i]);
        }
        cout<<search(root,word)<<endl;
        
    }

    return 0;
}
