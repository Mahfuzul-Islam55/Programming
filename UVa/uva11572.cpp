#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,i,j,num=0,a,b;
    cin>>t;
    vector<long long> vec;
    map<int,int>mp;
    vector<vector<int>> vec2;
    set<long long> st;
    while(t--){
        num++;
        cin>>n;
        while(n--){
            cin>>a;
            st.insert(a);
        }
        cout<<st.size()<<endl;
        st.clear();
    }
}
