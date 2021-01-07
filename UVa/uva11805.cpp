#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,b,c,num=0;
     cin>>n;
     while(n--){
        cin>>a>>b>>c;
        int d=((c%a)+b)%a;
        if(d==0)
        printf("Case %d: %d\n",++num,a);
        else
            printf("Case %d: %d\n",++num,d);
     }
}


