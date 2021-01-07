#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2="",str3="",str5=" ";
   // vector<string> vec={'q','w','e','r','t','y','u','i','o','p','[',']','a','s','d','f','g','h','j','k','l',';',','};
   // vector<string> vec={"q","w","e","r","t","y",uiop[]asdfghjkl;zxcvbnm,./};
  // vector<string> vec="qwer";
   string str4="qwertyuiop[]asdfghjkl;'zxcvbnm,./1234567890-=";
   //string str6="QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
 //  string str7="1234567890-=";
  // string str8="!@#$%^&*()_+";
   getline(cin,str);
   transform(str.begin(),str.end(),str.begin(), ::tolower);
   for(int i=0;i<str.size();i++){
        str2=str[i];
      //  str2=tolower(str2);
        if(str2.compare(str5)==0){
            cout<<str5;
            continue;
        }
        for(int j=0;j<str4.size();j++){
            str3=str4[j];
            if(str2.compare(str3)==0)
                cout<<str4[j-2];
        }
   }
   cout<<endl;
}
