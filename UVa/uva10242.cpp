
#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a,b,n,m,c,d,e,f,g,h,x,y,p,q;
    double sum=0.0,num=0.0;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
        if(c==e && d==f){
        p=(a+g),q=(b+h),x=p-c,y=q-d;
        printf("%.3f %.3f\n",x,y);
        }
        if(c==g && d==h){
        p=(a+e),q=(b+f),x=p-c,y=q-d;
        printf("%.3f %.3f\n",x,y);
        }
        if(g==e && h==f){
        p=(a+c),q=(b+d),x=p-e,y=q-f;
        printf("%.3f %.3f\n",x,y);
        }
        if(c==a && d==b){
        p=(e+g),q=(f+h),x=p-c,y=q-d;
        printf("%.3f %.3f\n",x,y);
        }
        if(a==e && b==f){
        p=(c+g),q=(d+h),x=p-a,y=q-b;
        printf("%.3f %.3f\n",x,y);
        }
        if(a==g && b==h){
        p=(c+e),q=(d+f),x=p-a,y=q-b;
        printf("%.3f %.3f\n",x,y);
        }
    }
}
