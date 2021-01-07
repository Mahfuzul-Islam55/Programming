#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    vector<int> vec;
    int a,n,b,m=0,i,j;
    string str2="",str3="",str4="",str5="";
    cin>>n>>m;
    char str[100000];
    while(n--){
        cin>>str>>a;
        mp[str]=a;
    }
//    for(auto i=mp.begin();i!=mp.end();i++)
//        cout<<i->first<<"  "<<i->second<<endl;
    while(m--){
        int sum=0;
        while(gets(str)){
        stringstream s(str);
        while(s>>str2){
            if(mp.count(str2)!=0)
                sum+=mp[str2];
        }
        if(strlen(str)==1)
               break;
        }
        cout<<sum<<endl;
    }
}
