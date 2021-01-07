#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str2="";
    map<string,int> mp;
    int n,a,i,j,num=0;
    double b,sum=0;
  //  cin>>n;
    char str[35];
    scanf("%d\n",&n);
    while(n--){
        getchar();
        sum=0.0;
        while( gets(str)){
            if(strlen(str)==0)
               break;
            mp[str]++;
            num++;
            sum++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            b=(double)i->second;
        cout<<i->first<<" ";
        printf("%.4f\n",(b*100.0)/sum);
    }
        if(n>0)
            cout<<endl;
        mp.clear();
    }
//    for(auto i=mp.begin();i!=mp.end();i++){
//        cout<<i->first<<"  "<<i->second<<endl;
//    }
}

