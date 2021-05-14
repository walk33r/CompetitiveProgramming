// This approach use kind of similar
// approach to sieve of eratosthenes
// Time Complexity : O(N*log(N))

const int sz = 1e6;
vector<int> factors[sz + 1];

void divisors() {
  for(int i=1;i<=sz;i++) {
    for(int j=i;j<=sz;j++) {
      factors[j].push_back(i);
    }
  }
}