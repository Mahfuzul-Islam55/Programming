#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str3=" ";
    int n=0,m=0,i=0,a,b,j=0,k=0;
    cin>>n;
    while(n--){
    m++;
    cin>>str;
    string str2="";
    vector<int> vec,vec2;
    int k=0,i=0,j=0,c=0;
    for(i=0;i<str.size();i++){
       if(str[i]>='A' && str[i]<='Z'){
         vec.push_back(0);
       }
       else{
          str2=str[i];
          stringstream s(str2);
          s>>a;
          vec.push_back(a);
       }
    }
    for(i=1;i<vec.size();i++){
        if(vec[i]!=0 && vec[i+1]!=0 && vec[i+2]!=0 && i+2<vec.size()){
            a=vec[i]*100 + vec[i+1]*10 + vec[i+2];
            vec2.push_back(a);
            i+=2;
        }
        else if(vec[i]!=0 && vec[i+1]!=0 && i+1<vec.size()){
            a=vec[i]*10 + vec[i+1];
            vec2.push_back(a);
            i++;
        }
        else if(vec[i]!=0)
            vec2.push_back(vec[i]);
    }
    for(i=0;i<str.size();i++){
        if(c==0){
            cout<<"Case "<<m<<": ";
            c=1;
        }
        if(str[i]>='A' && str[i]<='Z'){
        for(j=1;j<=vec2[k];j++){
            cout<<str[i];
        }
        k++;
        }
    }
    cout<<endl;
    vec2.clear();
    vec.clear();
    str.clear();
    str2.clear();
    }
}
