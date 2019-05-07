//overlapping ranges standard question, things to notice: minheap(multiset) used to store values, Interval is a struct having start and end as data menbers, intialised using predifined parameterised constructor in line 26
//pass vestor containing intervals to the given function
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

vector<Interval> Solution::merge(vector<Interval> &A) {
    multiset<pair<int,int> > ms1;
    int count=1;
    for(auto u:A){
        ms1.insert({u.start,count});
        ms1.insert({u.end,count});
        count++;
    }
    multiset<int> ms2;
    pair<int,int> p;
    vector<Interval> v;
    for(auto u:ms1){
        if(ms2.empty()){
            p.first=u.first;
            ms2.insert(u.second);
        }
        else{
            if(ms2.end()==ms2.find(u.second)){
                ms2.insert(u.second);
            }
            else{
                if(ms2.size()==1){
                    p.second=u.first;
                    Interval in(p.first,p.second);
                    v.push_back(in);
                }
                ms2.erase(ms2.find(u.second));
            }
        }
    }
    return v;
}
