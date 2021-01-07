#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j;
    while(cin>>n>>m){
        double d=0;
        for(int i=m+1;i<=n;i++){
            d+=log10(i)-log10(n-i+1);
        }
        d=floor(d)+1;
        printf("%.0f\n",d);
    }

}
