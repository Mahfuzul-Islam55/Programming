#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,j,i,p,q,r,s,k,l,o;
    while(cin>>p>>q>>r>>s){
        double d=1;
        i=q+1,j=s+1,k=r-s,l=1,m=p-q,o=1;
        for(int t=0;;t++){
            if(i>p) i=1,p=0;
            if(j>r) j=1,r=0;
            if(l>k) l=1,k=0;
            if(o>m) o=1,m=0;
            d*=(double)(i*l)/(double)(j*o);
            i++,j++,l++,o++;
            if(p==0 && k==0 && r==0 && m==0)
                break;
        }
        printf("%.5f\n",d);
    }
}

