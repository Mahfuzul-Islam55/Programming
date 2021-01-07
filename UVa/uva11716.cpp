#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    int n,a,b,i,j,num=0;
    cin>>n;
    getchar();
    while(n--){
        gets(str);
        int len=strlen(str);
        int s=sqrt(len);
        if(s*s!=len){
            cout<<"INVALID"<<endl;
            continue;
        }
        for(i=0;i<s;i++){
            for(j=i;j<len;j+=s)
                cout<<str[j];
        }
        cout<<endl;
    }
}
