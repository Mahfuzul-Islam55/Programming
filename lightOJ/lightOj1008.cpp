#include<bits/stdc++.h>
using namespace std;
long long convertBinaryToDecimal(long long n)
{
    long long decimalNumber = 0, i = 0, remainder;
    while (n!=0){
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int main()
{
    long long n,a,b,num=0;
    cin>>n;
    string str,str2;
    getchar();
    while(n--){
        cin>>str;
        cin>>str2;
        string str3="",str4="";
        vector<long long> vec,vec2;
        for(int i=0;i<str.size();i++){
            char c=str[i];
            if(str[i]!='.') str3+=c;
            else{
                stringstream s(str3);
                s>>a;
                vec.push_back(a);
                str3="";
            }
        }
        stringstream s(str3);
        s>>a;
        vec.push_back(a);
        str3="";
        for(int i=0;i<str2.size();i++){
            char c=str2[i];
                if(str2[i]!='.') str3+=c;
                else if(str2[i]=='.'){
                    stringstream s(str3);
                    s>>a;
                    b=convertBinaryToDecimal(a);
                    vec2.push_back(b);
                    str3="";
                }
        }
        stringstream ss(str3);
        ss>>a;
        b=convertBinaryToDecimal(a);
        vec2.push_back(b);
        int c=1;
        for(int i=0;i<4;i++){
            if(vec[i]!=vec2[i]){
                c=0;
                cout<<"Case "<<++num<<": No"<<endl;
                break;
            }
            }
        if(c==1)
            cout<<"Case "<<++num<<": Yes"<<endl;
        }

}
