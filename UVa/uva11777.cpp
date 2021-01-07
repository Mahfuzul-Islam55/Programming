#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,m,i,j,num=0,sum=0,sum2=0,count=0;
    vector<long long> vec,vec2,vec3,vec4;
    cin>>n;
    while(n--){
        sum2++;
        int c=7;
        sum=0,num=0;
        while(c--){
            num++;
            cin>>m;
            vec.push_back(m);
            if(num<=4)
                sum+=m;
        }
         sort(vec.begin()+4,vec.end());
         sum+=(vec[5]+vec[6])/2;
         if(sum>=90)
            cout<<"Case "<<sum2<<": "<<"A"<<endl;
         else if(sum>=80 && sum<90)
            cout<<"Case "<<sum2<<": "<<"B"<<endl;
         else if(sum>=70 && sum<80)
            cout<<"Case "<<sum2<<": "<<"C"<<endl;
         else if(sum>=60 && sum<70)
            cout<<"Case "<<sum2<<": "<<"D"<<endl;
         else
            cout<<"Case "<<sum2<<": "<<"F"<<endl;
         vec.clear();
    }
}

