#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj,int n){
    vector<bool> visited(n);
    queue<int> q;
    q.push(0);
    visited[0] = 1;
    vector<int> ans;
    
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        ans.push_back(curr);
        
        for(int k:adj[curr]){
            if(!visited[k]){
                visited[k] = 1;
                q.push(k);
            }
        }
        
    }
    return ans;
}

int main() {
  // write your code here...
  int n,e;
  cin>>n>>e;
  vector<vector<int>> adj(n+1);
  for(int i=0;i<n;i++){
      int f,t;
      cin>>f>>t;
      adj[f].push_back(t);
      adj[t].push_back(f);
  }
  vector<int> ans = bfs(adj,n);
  for(int i:ans) cout<<i<<" ";
  return 0;
}
