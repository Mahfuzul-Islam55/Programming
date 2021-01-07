
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,j,i,n,m,sum=0;
    vector<pair<string,string>> mp;
    string str,str2,str3="";
   // getline(cin,str);
    vector<int> vec,vec4;
    vector<pair<int,int>> p;
    while(getline(cin,str) && str!=""){
          stringstream s(str);
          n=0;
          while(s>>str2){
            n++;
            if(n==1)
                str3=str2;
          }
          mp.push_back({str2,str3});
    }

    while(cin>>str){
            int c=0;
            for(auto i=mp.begin();i!=mp.end();i++){
                str3=i->first;
                if(str.compare(str3)==0){
                    cout<<i->second<<endl;
                    c=1;
                }
            }
                if(c==0)
                    cout<<"eh"<<endl;
    }
}


