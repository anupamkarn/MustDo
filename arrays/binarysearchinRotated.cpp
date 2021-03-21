// Below function accepts sorted rotated array and left right index value, along with key(value to be searched)
// Function return index of value otherwise -1.

int search(int A[], int l, int h, int key){
    //complete the function here
    // 7 8 1 2 3 4 5 6
    // 5 6 7 8 1 2 3 4
    // 
    int left=l, right=h, mid=left+(right-left)/2;
    while(left<=right){
        mid=left+(right-left)/2;
        //cout<<mid<<endl;
        if(A[mid]==key){
            return mid;
        }
        if(A[mid]>key){
            if(A[left]>A[mid]){
                right=mid-1;  
            }   
            else{
                if(key>=A[left]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }

            }
        }
        if(A[mid]<key){
            if(A[right]<A[mid]){
                left=mid+1;
            }
            else{
                if(key<=A[right]){
                    left=mid+1; 
                }
                else{
                    right=mid-1;
                }
            }
        }
    }

