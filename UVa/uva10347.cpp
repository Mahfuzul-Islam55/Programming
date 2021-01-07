#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a,b,c,d,sum=0.0,s,e,f,g,h,l1;
    while(cin>>a>>b>>c){
        s=(a+b+c)/2.0;
       // cout<<s<<endl;
        d=s-a;
        e=s-b;
        f=s-c;
        sum=s*d*e*f;
        if(sum<=0) {
            cout<<"-1.000"<<endl;
            continue;
        }
       // cout<<sum<<endl;
        double ans=sqrt(sum);
      //  printf("%.4f\n",ans);
        ans*=4;
        ans=ans/3.0;
        printf("%.3f\n",ans);
        //cout<<setprecision(4)<<ans<<endl;


    }
}

