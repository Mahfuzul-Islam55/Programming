#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2=" ",str3=" ",str4="";
    int i,j,n,m,a,b;
    while(getline(cin,str)){
        stringstream s(str);
        int num=0,num2=0;
        for(int i=0;i<str.size();i++){
            str3=str[i];
            if(str3.compare(str2)==0)
                num++;
        }
        while(s>>str4){
            num2++;
            reverse(str4.begin(),str4.end());
            if(num2<=num)
            cout<<str4<<" ";
            else
                cout<<str4;
        }
        cout<<endl;
    }
}
