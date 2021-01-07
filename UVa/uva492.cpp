#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2="";
    map<string,int> mp;
    int n,a,b,i,j,num=0,sum=0;
    cin>>n;
    while(n--){
        cout<<endl;
        getchar();
        while(getline(cin,str) && str.compare(str2)!=0 ){
            mp[str]++;
            num++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
        cout<<i->first<<"  "<<i->second<<endl;
    }
        mp.clear();
    }
//    for(auto i=mp.begin();i!=mp.end();i++){
//        cout<<i->first<<"  "<<i->second<<endl;
//    }
}
