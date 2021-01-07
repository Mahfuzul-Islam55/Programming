#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int> edges[MAX];
vector<int> cost[MAX];
///vector<int> visited;
map<int,int>visited;
map<int,vector<int>> graph;
map<int,vector<int>>::iterator it;
set<int>st;
int x=0;
void bfs(int s,int n){

    int num=0,num2=0;
//    for(int i=0;i<10000;i++)
//        visited.push_back(0);
    queue<int> Q;
    Q.push(s);
    visited[s]=0;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++){
            if(!visited.count(graph[u][i])){
                int v=graph[u][i];
                visited[v]=visited[u]+1;
                Q.push(v);
            }
        }
    }
    for(auto it2=visited.begin();it2!=visited.end();it2++){
        if(it2->second >n) num++;
    }
    int num3=st.size()-visited.size();
    num+=num3;
    cout<<"Case "<<++x<<": "<<num<<" nodes not reachable from node "<<s<<" with TTL = "<<n<<"."<<endl;

}
int main()
{
    int numNodes,numEdges,a,b;
    while(cin>>numEdges && numEdges){
    for(int i=1;i<=numEdges;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        st.insert(x);
        st.insert(y);
       // edges[x].push_back(y);
        //edges[y].push_back(x);
    }
    while(cin>>a>>b && (a!=0 || b!=0)){
        visited.clear();
        bfs(a,b);
    }
    graph.clear();
    st.clear();
    }
}


