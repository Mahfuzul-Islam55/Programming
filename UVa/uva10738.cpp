#include<bits/stdc++.h>
using namespace std;
long long status[1000000];
int main()
{
    long long N=1000000;
    int sq=sqrt(N);
    vector<long long> p,p2,p3;
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
    long long i,j,num=0,num2=0,num3=0,c=0;
    p2.push_back(1);
    for(j=2;j<=1000000;j++){
            num2=0;
            c=0;
            n=j;
            i=0;
    while(p[i]*p[i]<=n){
        num=0;
       while(n%p[i]==0)
       {
        num++;
        num2++;
        n/=p[i];
        if(num>1){
            c=1;
            p2.push_back(0);
            break;
        }
       }
       if(num>1){
            c=1;
            break;
        }
       if(n==1)
          break;
          i++;
    }
    if(n!=1)
        num2++;
    if(num2%2==0 && c!=1)
        p2.push_back(1);
    else if(num2%2==1 && c!=1)
        p2.push_back(-1);
    }
    p3.push_back(1);
    num3=1;
    for(i=1;i<1000000;i++)
        {
            p3.push_back(num3+p2[i]);
            num3+=p2[i];
        }

    while(cin>>n){
        if(n==0)
        break;
        printf("%8d",n);
        printf("%8d",p2[n-1]);
        printf("%8d\n",p3[n-1]);
    }
}

