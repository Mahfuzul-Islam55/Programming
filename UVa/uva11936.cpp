#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,m,b,c,i,j,num=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;

        if(a+b<=c || b+c<=a || c+a<=b) cout<<"Wrong!!"<<endl;
        else cout<<"OK"<<endl;
    }
}



