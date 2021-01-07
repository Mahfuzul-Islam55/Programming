
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long double a,b,c,num=0,sum=0,n,m,p,q,r,s,e,f,g,h;
    while(cin>>a>>b>>c){
        s=(a+b+c)/2.0;
        q=s-a;
        r=s-b;
        p=s-c;
        sum=s*q*r*p;
       // cout<<sum<<endl;
        sum=sqrt(sum);
      //  cout<<sum<<endl;
        r=sqrt(r);
        //sum=sqrt(sum);
        double ans=sum/s;
        double e=sum*4;
        f=(a*b*c)/e;
        double ans1=ans*ans*acos(-1.0);
        double ans3=sum-ans1;
        double ans2=f*f*acos(-1.0);
        ans2=ans2-sum;

     //   ans=sqrt(ans);
        //cout<<"The radius of the round table is: "<<setprecision(4)<<ans<<endl;
        printf("%.4f ",ans2);
        printf("%.4f ",ans3);
        printf("%.4f\n",ans1);

    }
}


