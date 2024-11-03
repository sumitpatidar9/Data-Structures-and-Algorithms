class Solution{
	public:
	
	int power(int n, int m, int mid){
	    long long int ans = 1;
	    
	    for(int i = 1; i<=n; i++){
	        ans = ans*mid;
	        if(ans > m) return 2;
	    }
	    
	    if(ans == m){
	        return 1;
	    }
	    return 0;
	}
	
	
	
	int NthRoot(int n, int m){
	    long long int low = 1;
	    long long int high = m;
	    
	    while(low<=high){
	        long long int mid = (low+high)/2;
	        
	        if(power(n,m,mid) == 1){
	            return mid;
	        }
	        
	        else if(power(n,m,mid) == 0){
	            low = mid+1;
	        }
	        
	        else{
	            high = mid-1;
	        }
	    }
	    
	    return -1;
	}  
};