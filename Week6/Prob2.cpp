#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> arr[], int node, int* visited){
    visited[node] = 1;
    for (auto i:arr[node])
    {
        if(visited[i] == 0)
            dfs(arr, i, visited);
    }
}
int main(){
    
    int n, m, u, v;
    cin >> n >> m;
    vector<int> arr[n+1];
    int visited[n+1] = {0};
    for(int i=0; i<m; i++)
    {
        cin >> v >> u;
        arr[v].push_back(u);
        arr[u].push_back(v);
    }
    cin>>v>>u;
    dfs(arr, v, visited);
    if(visited[u])
        cout<<"Path exists\n";
    else
        cout<<"Path dosent exist\n";
    return 0;
}