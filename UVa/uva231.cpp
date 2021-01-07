#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,m,i,j,num=0,num2=0,sum=0,sum2=0;

    while(cin>>n && n!=-1){
         vector<long long> vec,vec2;
        if(n!=-1 && num>=1) cout<<endl;
        vector<long long>:: iterator it;
        vec.push_back(n);
        while(cin>>m && m!=-1){
            vec.push_back(m);
        }
        for(long long i=vec.size()-1;i>=0;i--){
            it=lower_bound(vec2.begin(),vec2.end(),vec[i]);
            if(it==vec2.end()) vec2.push_back(vec[i]);
            else vec2[it-vec2.begin()]=vec[i];
        }
        printf("Test #%d:\n  maximum possible interceptions: ",++num);
        cout<<vec2.size()<<endl;
    }
}

