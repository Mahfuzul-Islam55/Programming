#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,m,b,c,i,j,num=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<"Case "<<++num<<": ";
        if(a+b<=c || b+c<=a || c+a<=b) cout<<"Invalid"<<endl;
        else if(a==b && b==c && c==a) cout<<"Equilateral"<<endl;
        else if(a!=b && b!=c && c!=a) cout<<"Scalene"<<endl;
        else cout<<"Isosceles"<<endl;
    }
}

