class Solution {
public:
    int func(int N,int n,vector<int> &v,vector<vector<int>> &dp){
        
        if (N == 0)
	    {
		
		    return 1;
        }
	    if(n == 0){
		    return 0;
	    }

        
       
        
        if(dp[N][n] != -1){
            return dp[N][n];
        }
        else{
            
            if(v[n-1] <= N){
                return dp[N][n] = func(N-v[n-1],n-1,v,dp) + func(N,n-1,v,dp);
            }
            else{
                return dp[N][n] = func(N,n-1,v,dp);
            }
        } 
        
        
    }
    
    int consecutiveNumbersSum(int N) {
        vector<int> v(N);
        vector<vector<int>> dp(N+1,vector<int> (N+1,-1));
        
        for(int i=0;i<N;i++){
            v[i] = i+1;
        }
        
        return func(N,N-1,v,dp);
        
    }
};
