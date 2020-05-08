
    int findComplement(int num) {
        
        string s;
        int bit;
        while(num>=1){
            bit = num%2;
            num = num/2;
            if(bit==1){
                s+="1";
            }
            else{
                s+="0";
            }
        }
        //cout<<s<<endl;
        long long count=0;
        int len = s.size()-1;
        for(int i=0; i<=len; i++){
            if(s[i]=='0'){
                count += (int)(pow(2, i) + 0.5);  
            }            
        }
        return count;
        
    }
