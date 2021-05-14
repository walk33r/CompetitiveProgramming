int solve(int n,int w,int ar[][2]) {
  int dp[n+1][w+1];
  memset(dp,-1,sizeof(dp));

  for(int i=0;i<=w;i++) dp[0][i] = 0;
  for(int i=0;i<=n;i++) dp[i][0] = 0;

  for(int i=1;i<=n;i++) {
    for(int j=1;j<=w;j++) {
      dp[i][j] = dp[i-1][j];
      if(j>=ar[i][0]) dp[i][j] = max(dp[i-1][j],ar[i][1] + dp[i-1][j-ar[i][0]]);
    }
  }
  return dp[n][w];
}
