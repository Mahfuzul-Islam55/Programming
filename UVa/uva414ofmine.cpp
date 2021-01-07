#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,num=0,M,count=0,num2=0;
    string str;
    while(cin>>n && n){
        getchar();
        count=0,num2=0,m=n,M=0;
        while(m--){
        getline(cin,str);
        num=0;
        for(i=0;i<25;i++){
            if(str[i]=='X')
                num++;
        }
        num2+=num;
        M=max(M,num);
        }

        cout<<(M*n)-num2<<endl;

    }
}

