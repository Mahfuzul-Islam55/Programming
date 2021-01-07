#include<bits/stdc++.h>
using namespace std;
#define uni(v) sort( v.begin(), v.end() );v.erase( unique( v.begin(), v.end() ), v.end() );
int main()
{
    long long t,n,m,num=0;
    cin>>t;
    while(t--){
        map<int,int>mp;
        vector<vector<int>> vec2;
        vector<int> vec;
        cin>>n;
        int cnt,total=0,a;
        while(n--){
            cin>>m;
            vector<int> temp;
            while(m--){
                cin>>a;
                temp.push_back(a);
            }
            uni(temp)
            for(int i=0;i<temp.size();i++)mp[temp[i]]++;
            vec2.push_back(temp);
        }
        for(int i=0;i<vec2.size();i++){
            cnt=0;
            for(int k=0;k<vec2[i].size();k++){
                if(mp[vec2[i][k]]==1){
                    cnt++;
                    total++;
                }
            }
            // cout<<"# "<<cnt<<' '<<total<<endl;
            vec.push_back(cnt);
        }
        cout<<"Case "<<++num<<": ";
        for(int i=0;i<vec.size();i++){
            double l=vec[i]*100.0;
            double r= l/total;
            printf("%.6lf%%",r);
            if(i<vec.size()-1)
                cout<<" ";
        }
        cout<<endl;
     }
}

