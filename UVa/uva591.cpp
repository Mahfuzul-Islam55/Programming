#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,count=0,num=0,total=0,k=0;
    vector<int> vec;
    string str;
    while(cin>>str){
        n=0,m=-1;
        for(int i=0;i<str.size();i++){
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='H' || str[i]=='W' || str[i]=='Y')
                 m=-1;
            else if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')
                 m=1;
            else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z')
                m=2;
            else if(str[i]=='D' || str[i]=='T')
                m=3;
            else if(str[i]=='L')
                 m=4;
            else if(str[i]=='M' || str[i]=='N')
                 m=5;
             else if(str[i]=='R')
                 m=6;
             if(n!=m && m!=-1) cout<<m;
             n=m;

         }
         cout<<endl;

    }
}
