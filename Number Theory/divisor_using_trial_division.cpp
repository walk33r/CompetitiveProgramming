// This Method use Trial Division and the fact that factors 
// lie in pairs
// Time Complexity : O(sqrt(n))

vector<int> divisors(int n) {
  vector<int> div;
  for(int i=1;i*i<=n;i++) {
    if(n%i==0) {
      div.push_back(i);
      if(i!=n/i) div.push_back(n/i);
    }
  }
  return div;
}