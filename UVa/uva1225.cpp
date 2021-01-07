
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,num=0;
    cin>>n;
    while(n--){
        string str="";
        cin>>m;
        map<int,int> mp;
        num=0;
        for(i=1;i<=m;i++){
            b=i;
            for(int j=0;;j++){
                int c=b%10;
                char d=c+'0';
                str+=d;
                b/=10;
                if(b==0)
                    break;
            }
        }
        sort(str.begin(),str.end());
        for(i=0;i<=9;i++)
            mp[i]=0;
        for(i=0;i<str.size();i++){
            b=str[i]-'0';
            mp[b]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            num++;
            if(num==10){
                cout<<i->second<<endl;
                break;
            }
            cout<<i->second<<" ";
        }
    }
}

