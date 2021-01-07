#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,num=0,count=0,b;
    double a;
 //   map<int,int> mp;
    map<int,string>mp2;
    map<int,int>:: iterator it2;
    string str,str2,str3;
    vector<int> vec;
    cin>>n;
    getchar();
    while(n--){
        count=0;
       getchar();
        getline(cin,str);
        stringstream ss(str);

        while(ss>>m){
            count++;
            vec.push_back(m);
        }
        getline(cin,str2);
        stringstream ss2(str2);
        i=0;
        while(ss2>>str3){
            b=vec[i];
            mp2.insert({b,str3});
            i++;
        }
        for( auto it=mp2.begin();it!=mp2.end();it++){
            cout<<it->second<<endl;
        }
        mp2.clear();
        vec.clear();
        if(n)
        cout<<endl;
    }
}
