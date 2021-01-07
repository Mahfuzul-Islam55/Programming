#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,num=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            printf("Case %d: yes\n",++num);
        else
            printf("Case %d: no\n",++num);
    }
}
