#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string> mp;
    vector<int> vec;
    int a,n,b,m=0,i,j;
    string str,str2="",str3="",str4="",str5="";
    while(getline(cin,str) && str.compare(str5)!=0){
        stringstream s(str);
        m=0;
        while(s>>str4){
            m++;
            if(m==1)
                str3=str4;
            else
                str2=str4;
        }
        mp[str2]=str3;
       // cout<<str2<<" "<<str3<<endl;
    }
    while(cin>>str){
        if(mp.count(str)==0)
           cout<<"eh"<<endl;
        else
            cout<<mp[str]<<endl;
    }
//    for(auto i=mp.begin();i!=mp.end();i++){
//        cout<<i->second<<" "<<i->first<<endl;
//    }
}
