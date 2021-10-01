// pass vector of integers, function will return whether we can divide 
// the list into k consecutive integers. Implementation is done using hashing with the help of 
// map stl.

bool isPossibleDivide(vector<int>& nums, int k) {
    map<int,int> mp;
    for(auto n:nums){
        if(mp.find(n)!=mp.end()){
            mp[n]++;
        }
        else{
            mp[n]=1;
        }
    }
    if(k==1){
        if(mp.size()==nums.size()){
            return true;
        }
        else return false;
    }
    int i=k,prev;
    vector<map<int, int>::iterator > v;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        i--;
        if(i<0){
            for(auto u:v){
                mp.erase(u);
            }
            v.clear();
            i=k-1;
            it=mp.begin();
        }          
        if(it==mp.begin()){
            prev=it->first;
        }
        else{
            if(it->first-1==prev){
                prev=it->first;
            }
            else{
                return false;
            }
        }
        if(it->second<mp.begin()->second){
            return false;
        }
        else{
            if(it->second==mp.begin()->second){
                v.push_back(it);
            }
            else{
                it->second=it->second-mp.begin()->second;
            }
        }      
    }
    if(i==0) return true;
    else return false;
}
