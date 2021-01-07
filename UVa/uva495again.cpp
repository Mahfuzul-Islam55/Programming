#include<bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
    string s="";
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    while(s1.size()<s2.size())
        s1+="0";
    while(s2.size()<s1.size())
        s2+="0";
    int carry=0;
    for(int i=0;i<s1.size();i++){
        int x=carry+s1[i]-'0'+s2[i]-'0';
        carry=x/10;
        s+=x%10+'0';
    }
    while(carry){
        s+=carry%10+'0';
        carry/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string f[5010];
    f[0]="0";
    f[1]="1";
    for(int i=2;i<5010;i++){
        f[i]=add(f[i-1],f[i-2]);
    }
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("The Fibonacci number for %d is %s\n",n,f[n].c_str());
}
