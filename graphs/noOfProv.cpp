#include<bits/stdc++.h>
using namespace std;

void bfs(int cur,queue<int> &q,vector<vector<int>> &adj,vector<bool> &visited){
    q.push(cur);
    visited[cur] = 1;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int k:adj[curr]){
            if(!visited[k]){
                visited[k] = 1;
                q.push(k);
            }
        }
        
    }

}

int numOfProv(vector<vector<int>> &adj,int n){
    int count = 0;
    vector<bool> visited(n);
    queue<int> q;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            count++;
            bfs(i,q,adj,visited);
        }
    }
    return count;

    
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
  int ans = numOfProv(adj,n);
   cout<<ans<<" ";
  return 0;
}
