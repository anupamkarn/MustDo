#include<bits/stdc++.h>

using namespace std;

int main(){

    typedef pair<int, int> pairs; //creating pair as default data type 
    pairs p[5]; //array of pair objects
    for (int i =0; i<5; i++){
        p[i].first= (i+1)*10; //inserting first element of pair
        p[i].second = (i+1); //inserting first element of pair
    }
    set<pairs> s;   //set to sort pair
    set<pairs> :: iterator it; //iterator to manipulate set

    for (int i =0; i<5; i++){
        s.insert(p[i]); //inserting pair object in set
    }

    for (it = s.begin(); it!=s.end(); it++){
        pairs m = *it; // returns pair to m

    cout<<m.first<<" "<<m.second<<endl; //showing pair elements
    }
    return 0;
}

