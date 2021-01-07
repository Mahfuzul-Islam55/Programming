#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2="",str3="",str4;
    int a,b,n,m;
    vector<int> vec,vec2;
    cin>>n;
    while(n--){
        int a,b,i=0,j=0,len=0,num=0,num2=0;
        getchar();
        getline(cin,str);
        for(i=0;i<str.size();i++)
            len++;
        int s=(int)sqrt(len);
        cout<<"S is "<<s<<endl;
        if(s*s!=len){
            cout<<"INVALID"<<endl;
            continue;
        }
        getchar();
    }
}
