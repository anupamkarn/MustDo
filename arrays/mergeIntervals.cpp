/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {

    //sort(intervals.begin(), intervals.end());
    bool flag1=0,flag2=0;
    int start,end,spos=-1,epos=-1,count=0;
    if(newInterval.start>newInterval.end){
        int temp = newInterval.start;
        newInterval.start = newInterval.end;
        newInterval.end = temp;
    }
    for(auto u:intervals){
        count++;
        if(flag1==0){
            if(newInterval.start<u.start){
                start=newInterval.start;
                spos=count;
                flag1=1;
                if(newInterval.end<u.start){
                    intervals.insert(intervals.begin()+count-1,newInterval);
                    return intervals;
                }
            }
            else if(newInterval.start>=u.start){
                if(newInterval.start<=u.end){
                    start=u.start;
                    spos=count;
                    flag1=1;
                }
            }
        }
        if(flag1){
           if(newInterval.end<u.start){
               end=newInterval.end;
               epos=count-1;
               break;
           }
           else if(newInterval.end==u.start){
               end=u.end;
               epos=count;
               break;
           }
           else if(newInterval.end<=u.end){
               end=u.end;
               epos=count;
               break;
           }
        }
    }
    //cout<<spos<<" "<<epos<<endl;
    if(spos==-1&&epos==-1){
        intervals.push_back(newInterval);
        return intervals;
    }
    if(epos==-1&&spos){
        end=newInterval.end;
        epos=count;
    }
    //cout<<spos<<" "<<epos<<endl;
    intervals.erase(intervals.begin()+spos-1,intervals.begin()+epos);
    Interval i(start,end);
    intervals.insert(intervals.begin()+spos-1,i);
    return intervals;
}

