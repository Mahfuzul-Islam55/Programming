#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i=0,j=0;
    string str,str2="",str3="";
    set<string> st;
    while(getline(cin,str)){
        for(i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
            if(str[i]>='a' && str[i]<='z')
                continue;
            else
                str[i]=(char)32;
        }
        stringstream s(str);
        while(s>>str2){
            st.insert(str2);
        }
    }
    for(auto i=st.begin();i!=st.end();i++)
        cout<<*i<<endl;
}
