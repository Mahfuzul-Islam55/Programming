#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);

}
int main()
{
    long long n,m,i,j,a;
    double count=0.0,num=0,p,s,pi;
    vector<long long> vec;
    while(cin>>n && n)
    {
        if(n<=1 || n>=50)
            break;
        m=n,count=0,num=0;
        while(n--){
            cin>>a;
            vec.push_back(a);
        }
        for(i=0;i<m-1;i++){
                int x=vec[i];
            for(j=i+1;j<m;j++){
                count++;
                int y=vec[j];
                int g=gcd(x,y);
                if(g==1)
                   num++;
            }
        }
     //   p=count*6;
       // s=p/num;
        //pi=sqrt(s);
        if(num<1)
            cout<<"No estimate for this data set."<<endl;
        else
            cout<<fixed<<setprecision(6)<<sqrt(6*count*1.0/num)<<endl;
        vec.clear();
    }
}
