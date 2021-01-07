#include<bits/stdc++.h>
using namespace std;
long long status[1000000];
int main()
{
    long long N=1000000,i,j;
    int sq=sqrt(N);
    vector<long long> p;
    for( i=4;i<=N;i+=2) status[i]=1;
    for( i=3;i<=sq;i+=2){
        if(status[i]==0)
        {
            for(j=i*i;j<=N;j+=i) status[j]=1;
        }
    }
    status[1]=1;
    for(i=2;i<1000000;i++){
        if(status[i]==0)
          p.push_back(i);
    }
    long long n,m,ans;
    while(cin>>n){
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(n==0)
            break;
        ans=n;
        i=0;
        while(p[i]*p[i]<=n){
            if(n%p[i]==0)
                ans-=ans/p[i];
       while(n%p[i]==0)
            n/=p[i];
            i++;
        }
       if(n!=1)
          ans-=ans/n;
          cout<<ans<<endl;
    }
}
