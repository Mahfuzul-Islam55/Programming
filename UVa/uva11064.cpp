#include<bits/stdc++.h>
using namespace std;
long long status[10000000];
int main()
{
    long long N=10000000,i,j;
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
    for(i=2;i<10000000;i++){
        if(status[i]==0)
          p.push_back(i);
    }
    long long n,m,ans,ans2=1,power;
    while(cin>>n){
        ans=n;
        i=0;
        power=0;
        m=n;
        ans2=1;
        while(p[i]*p[i]<=n){
            if(n%p[i]==0)
                ans-=ans/p[i];
            power=0;
       while(n%p[i]==0){
            power++;
            n/=p[i];
       }
            i++;
            ans2*=(power+1);
        }
       if(n!=1){
          ans-=ans/n;
          ans2*=2;
       }
          cout<<m-ans-ans2+1<<endl;
    }
}

