// Factorisation using Trial Division Method
// Time Complexity : O(sqrt(n))

vector<pair<int,int>> vp;
void primeFactors(int n) {
  for(int i=2;i*i<=n;i++) {
    int cnt = 0;
    while(n%i==0) {
      cnt++;
      n/=i;
    }
    if(cnt>0) vp.push_back({i,cnt});
  }
  if(n>1) vp.push_back({n,1});
}