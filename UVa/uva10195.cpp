#include<bits/stdc++.h>
using namespace std;
int main()
{
     long double a,b,c,num=0,sum=0,n,m,p,q,r,s;
    while(cin>>a>>b>>c){
        if(a==0 || b==0 || c==0){
             printf("The radius of the round table is: 0.000\n");
             continue;
        }
        s=(a+b+c)/2.0;
        q=s-a;
        r=s-b;
        p=s-c;
        sum=q*r*p;
        r=sum/s;
        r=sqrt(r);
        //sum=sqrt(sum);
        double ans=sum/s;
        ans=sqrt(ans);
        //cout<<"The radius of the round table is: "<<setprecision(4)<<ans<<endl;
        printf("The radius of the round table is: %.3f\n",ans);

    }
}

