// This approch use euclids 
// algorith given by greek mathematician
// Euclids in 300 BC. 2000 yr ago.
// Time Complexity : O(log10(min(a,b)))

int gcd(int a,int b){
  if(b==0) return a;
  else return gcd(b,a%b);
}