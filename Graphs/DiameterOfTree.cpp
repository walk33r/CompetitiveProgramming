// https://cses.fi/problemset/task/1131/

const int sz = 1e5;
vector<int> tree[sz + 10];
int height[sz + 10];
int dia;
 
void dfs(int curr,int parent) {
  int max1 = -1, max2 = -1;
  for(int child : tree[curr]) {
    if(child!=parent) {
      dfs(child,curr);
      max2 = max(max2,height[child]);
      if(max1<max2) swap(max1,max2);
    }
  }
  height[curr] = 1 + max1;
  dia = max(dia,2 + max1 + max2);
}
