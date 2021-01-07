#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,m,i,j,num=0;
    cin>>n;
    map<string,string> mp;
    string str,str2;
    getchar();
    while(n--){
        getline(cin,str);
        getline(cin,str2);
        mp[str]=str2;
    }
    cin>>m;
    getchar();
    while(m--){
        getline(cin,str);
        cout<<mp[str]<<endl;
    }

}
