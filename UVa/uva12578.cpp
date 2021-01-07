#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,m,c;
    double area1,area2,r,w;
    cin>>n;
    while(n--){
        cin>>a;
        b=a*2;
        r=b/10.0;
        c=a*6;
        w=c/10.0;
        area1=r*r*acos(-1.0);
        area2=(a*w)-area1;
        printf("%.2f %.2f\n",area1,area2);
    }
}

