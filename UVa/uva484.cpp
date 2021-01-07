#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,j,i,n,m,sum=0;
    map<int,int> mp;
    string str;
    getline(cin,str);
    vector<int> vec,vec4;
    vector<pair<int,int>> p;
    stringstream s(str);
    while(s>>m){
        vec.push_back(m);
        vec4.push_back(0);
    }
    for(i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++)
        p.push_back({i->first,i->second});
    for(i=0;i<vec.size();i++){
        if(vec4[vec[i]]!=-1){
        for(j=0;j<p.size();j++){
            if(p[j].first==vec[i]){
                cout<<p[j].first<<" "<<p[j].second<<endl;
                vec4[vec[i]]=-1;
                break;
            }
        }
        }
    }
}

