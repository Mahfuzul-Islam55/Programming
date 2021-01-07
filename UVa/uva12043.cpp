#include<bits/stdc++.h>
using namespace std;
long long status[1000000];
int main()
{
    long long N=1000000;
    int sq=sqrt(N);
    vector<long long> p,p2,p3,vec;
    for(int i=4; i<=N; i+=2)
        status[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<=N; j+=i)
                status[j]=1;
        }
    }
    status[1]=1;
    for(int i=2; i<1000000; i++)
    {
        if(status[i]==0)
            p.push_back(i);
    }
    long long n;
    long long i,a,j,b,num=0,m,k,num2=0,num3=0,ans=0,c=0,power,ans2=0;
    p2.push_back(1);
    cin>>a;
    while(a--)
    {
        cin>>n>>m>>k;
        b=n%k;
        if(b==0)
            i=n;
        else
            i=n+(k-b);
        num=0,num2=0;
        for(; i<=m; i+=k)
            vec.push_back(i);

        for(j=0; j<vec.size(); j++)
        {
            n=vec[j];
            i=0;
            ans=1;
            ans2=1;
            while(p[i]*p[i]<=n)
            {
                power=0;
                while(n%p[i]==0)
                {
                    power++;
                    n/=p[i];
                }
                ans*=(power+1);
                ans2*=((long long)pow((double)p[i],power+1.0)-1)/(p[i]-1);
                if(n==1)
                    break;
                i++;
            }

            if(n!=1)
            {
                ans*=2;
                ans2 *= ((long long)pow((double)n, 2.0) - 1) / (n - 1);
            }
            num+=ans;
            num2+=ans2;
        }
        cout<<num<<" "<<num2<<endl;
        vec.clear();
    }
}

