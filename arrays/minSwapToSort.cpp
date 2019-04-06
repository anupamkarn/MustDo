//minimum swaps to sort an array, things to notice: unique way to use for loop, line 20 continously decrementing i so that it can be swap untill its placed correctly
//pass array and N to minSwap function 

int minSwaps(int A[], int N){
    vector<pair<int, int> >v(N);
    for(int i=0; i<N; i++){
        v[i] = {A[i],i};
    }
    sort(v.begin(),v.end());
    int swap=0;
    pair<int,int> p;

        for(int i=0; i<N; i++){
            if(v[i].second==i) continue;
            else{
                p = v[v[i].second];
                v[v[i].second] = v[i];
                v[i] = p;
                swap++;
            }
            if(v[i].second!=i)
                i--;
        }
        
    return swap;
}
