const int N = 100;
const int W = 1e5;

int ar[101][2];
// initialize memo with -1
int memo[N+1][W+1];

int recur(int index,int capacity) {
  if(memo[index][capacity]!=-1) return memo[index][capacity];
  else if(index==0||capacity==0) return 0;
  else if(ar[index][0]>capacity) return memo[index][capacity] = recur(index-1,capacity);
  else return memo[index][capacity] = max(ar[index][1] + recur(index-1,capacity-ar[index][0]), recur(index-1,capacity));
}
