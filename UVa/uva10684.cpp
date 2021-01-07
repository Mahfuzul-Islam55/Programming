#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b=0,c=0,i,m,j,num=0;
        vector<long long> vec,vec2;
        while(cin>>m && m){
            long long sum=0,ans=0,num=0,num2=0;
        while(m--){
            cin>>n;
            sum+=n;
            ans=max(sum,ans);
            if(sum<0)
                sum=0;
        }
        if(ans>0)
        cout<<"The maximum winning streak is "<<ans<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }
}

