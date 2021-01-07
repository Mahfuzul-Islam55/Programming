
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
    long long n,num=0;
    while(cin>>n && n){
        if(num==0)
            cout<<"PERFECTION OUTPUT"<<endl;
       num++;
       int m=n;
       long long i=0,ans=1;
       while(p[i]*p[i]<=n){
           int power=0;
           while(n%p[i]==0)
           {
                n/=p[i];
                power++;
            }
            ans*=((long long)pow((double)p[i], power + 1.0) - 1) / (p[i] - 1);
            i++;
       }
        if (n!=1)
        ans*=(long long)(pow((double)n, 2.0)+.5 - 1) / (n - 1);
        if(ans-m==m)
            printf("%5d  PERFECT\n",m);
        else if(ans-m<m)
            printf("%5d  DEFICIENT\n",m);
        else if(ans-m>m)
            printf("%5d  ABUNDANT\n",m);
    }
    cout<<"END OF OUTPUT"<<endl;

}

