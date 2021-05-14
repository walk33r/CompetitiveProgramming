int memo[10000][10000];

int recur(int pos,int target,vector<int>& ar) {
  if(pos<0) return target == 0;
  else if(memo[pos][target]!=-1) return memo[pos][target];
  else if(target==0) return memo[pos][target] = 1;
  else if(ar[pos]>target) return memo[pos][target] = recur(pos - 1,target,ar);
  return memo[pos][target] = recur(pos - 1,target - ar[pos],ar) || recur(pos - 1,target,ar);
}