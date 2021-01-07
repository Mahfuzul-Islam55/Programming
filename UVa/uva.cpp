#include<bits/stdc++.h>
using namespace std;
long long status[1000000];
int main()
{
    long long N=1000000;
    int sq=sqrt(N);
    vector<long long> p,p2,p3,vec;
    for(int i=4;i<=N;i+=2) status[i]=1;
    for(int i=3;i<=sq;i+=2){
        if(status[i]==0)
        {
            for(int j=i*i;j<=N;j+=i) status[j]=1;
        }
    }
    status[1]=1;
    for(int i=2;i<1000000;i++){
        if(status[i]==0)
          p.push_back(i);
    }
    long long n;
    long long i,a,j,b,num=0,m,k,num2=0,num3=0,ans=0,c=0,power,ans2=0,t;

    for(j=1;j<=2000000;j++){
        n=j;
        i=0;
        ans=n;
        while(p[i]*p[i]<=n){
            if(n%p[i]==0) ans-=ans/p[i];
            while(n%p[i]==0) n/=p[i];
            i++;
            if(n==1)
                break;
        }
        if(n!=1)
            ans-=ans/n;
        vec.push_back(ans);
    }
    for(i=11;i<=13;i++){
        k=vec[i];
        num=1;
        while(1){
            num++;
            t=vec[k];
            k=t;
            if(k<2)
                break;
        }
        cout<<num<<endl;
    }
}
