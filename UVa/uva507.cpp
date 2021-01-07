#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b=0,c=0,i,m,j,num=0;
    cin>>n;
    while(n--){
        cin>>m;
        m--;
        long long sum=0,ans=0,num=0,num2=0;
        while(m--){
            num++;
            num2++;
            cin>>a;
            sum+=a;
            if(ans>=sum) c=num2;
            else b=
            ans=max(sum,ans);

            if(sum<0) sum=0;

            else num=
        }
        cout<<num<<"   "<<num+num2<<endl;

    }
}
