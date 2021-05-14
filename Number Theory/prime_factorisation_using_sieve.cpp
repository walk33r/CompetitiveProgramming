// This algotithm is called sieve of eratosthenes.
// TC : O(N*log(log(N)))

const int sz = 1e8;
int SPF[sz + 1];
map<int,int> pfs;

void spf() {
  for(int i=1;i<=sz;i++) SPF[i] = i;
  for(int i=2;i*i<=sz;i++) {
    if(SPF[i]==i) for(int j=i*i;j<=sz;j+=i) SPF[j] = min(SPF[j],i);
  }
}

void primeFactors(int n) {
  while(n>1) {
    pfs[SPF[n]]++;
    n/=SPF[n];
  }
}