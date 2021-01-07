#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,m,n,c,d,num=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
      //  c=(b-a)*4;
      //  d=b*d
      if(b>=a)
        printf("Case %d: %d\n",++num,((b-a)*4)+(a*4)+(9+10));
      else if(b<a)
        printf("Case %d: %d\n",++num,((a-b)*4)+(a*4)+(9+10));

    }
}


