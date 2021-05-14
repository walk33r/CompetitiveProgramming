bool subsetSum(vector<int>& ar,int target) {
  
  const int n = ar.size();
  int dp[n+1][target+1];
  
  for(int i=0;i<n+1;i++) {
    for(int j=0;j<target+1;j++) {
      dp[i][j] = 0;
    }
  }
  
  
  for(int row=0;row<n+1;row++) dp[row][0] = 1;
  
  for(int i=1;i<n+1;i++) {
    for(int currentSum=0;currentSum<target+1;currentSum++) {
      if(ar[i-1]>currentSum) {
        dp[i][currentSum] = dp[i-1][currentSum];
      } else {
        dp[i][currentSum] = dp[i-1][currentSum-ar[i-1]] || dp[i-1][currentSum];
      }
    }
  }

  return dp[n][target];
}