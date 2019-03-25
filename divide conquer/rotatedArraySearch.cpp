// A is a vector of given sorted rotated array, B is the number to be found
//pass parameters to the function for result 


int search(vector<int> &A, int B){
	
		int l=0,r=A.size()-1,mid,pivot;
	    if(A[l]==B) return l;
	    if(A[r]==B) return r;
	    if(A[l]<A[r]) pivot = r;
	    else{
	        while(l<=r){
	            mid=l+(r-l)/2;
	            if(A[l]==B) return l;
	            if(A[r]==B) return r;
	            if(A[mid]==B) return mid;
	            if(mid==0){
	                pivot = mid;
	                break;
	            }
	            if(A[mid]>A[mid-1]&&A[mid]>A[mid+1]){
	                pivot=mid;
	                break;
	            }
	            if(A[l]>A[mid]){
	                r = mid-1;
	            }
	            else{
	                l = mid+1;
	            }
	        }
	    }
	    if(A[pivot]>B&&A[0]<B){
	        r = pivot;
	        l=0;
	    }
	    else{
	        l = pivot;
	        r = A.size()-1;
	    }
	    while(l<=r){
	        mid=l+(r-l)/2;
	        if(A[l]==B) return l;
	        if(A[r]==B) return r;
	        if(A[mid]==B) return mid;
	        if(A[mid]>B){
	            r = mid-1;
	        }
	        else{
	            l = mid+1;
	        }
	    }    
	    
	    return -1;
}
