#include<bits/stdc++.h>
using namespace std;
long long status[10000000];
int main()
{
    long long N=10000000;
    int sq=sqrt(N);
    vector<long long> p;
    for(int i=4;i<=N;i+=2) status[i]=1;
    for(int i=3;i<=sq;i+=2){
        if(status[i]==0)
        {
            for(int j=i*i;j<=N;j+=i) status[j]=1;
        }
    }
    status[1]=1;
    for(int i=2;i<10000000;i++){
        if(status[i]==0)
          p.push_back(i);
    }
    long long n,m,num=0;
    cin>>m;
    while(m--){
        cin>>n;
        int i=0,l=n;
        vector<long long> vec,vec2;
        vec.push_back(-1);
        vec2.push_back(-1);
        while(p[i]*p[i]<=n)
        {
            while(n%p[i]==0)
            {
                n/=p[i];
                if(p[i]%2==0) vec.push_back(p[i]);
                else vec2.push_back(p[i]);            }
            i++;
        }
        if(n!=1){
            if(n%2==0) vec.push_back(p[i]);
            else vec2.push_back(p[i]);
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end());
        if(vec[vec.size()-1]==-1 || vec2[vec2.size()-1]==-1)
            printf("Case %d: Impossible\n",++num);
        else
            printf("Case %d: %ll %d\n",++num,vec2[vec2.size()-1],l/vec2[vec2.size()-1]);
    }
}
