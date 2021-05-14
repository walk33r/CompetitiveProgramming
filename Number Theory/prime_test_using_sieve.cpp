// This algotithm is called sieve of eratosthenes.
// TC : O(N*log(log(N)))
const int sz = 1e8;
bool isPrime[sz + 1];

void sieve() {
  memset(isPrime,true,sizeof isPrime);
  isPrime[0] = isPrime[1] = false;
  for(int i=2;i*i<=sz;i++) {
    if(isPrime[i]) for(int j=i*i;j<=sz;j+=i) isPrime[j] = false;
  }
}