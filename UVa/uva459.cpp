#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define pb push_back
vector<ll>visited;
vector <vector<ll>>graph ;
ll num=1;
void setting(ll n ) {
    graph.clear() ;
    graph.resize(n+3);
    visited.clear();
    visited.resize(n+3,0);
}
void dfs(ll node) {
    visited[node] = 1 ;
    for(ll i = 0;i < graph[node].size();++i)    {
        if(visited[graph[node][i]] ==0)
            dfs(graph[node][i]);
        }
}
void findingConnectedComponent(ll n ){
    for(ll i=1;i<=n;i++) {
        if ( !visited[i]) {
             dfs(i) ;
             num++;
        }
    }
}
int main() {
    ll vertex,edges ,t;
    cin>>t;

    while(t--){
        char ch1,ch2,ch3;
    cin >>ch1;
    vertex=ch1-64;
    setting(vertex);
    string str,str2,str3="\0";
    cin.ignore();
        while(getline(cin,str) && str!=""){
            ll node1=str[0]-64,node2=str[1]-64;

            graph[node1].pb(node2) ;
            graph[node2].pb(node1) ;
        }
        num=0;
        findingConnectedComponent(vertex) ;
        cout<<num<<endl;
        if(t)cout<<endl;
    }
}
