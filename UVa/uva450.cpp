#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,d=0,i,j=0,e=0,num=0,m,num2=0;
    string str,str2="",str3="",str4="",str5="",str6="",str7="",str8="";
    map<string,string> mp1,mp2,mp3,mp4,mp5,mp6;
    map<string,string>:: iterator it1,it2,it3,it4,it5,it6;
//   char st[30]="0";
    cin>>n;
    getchar();
    while(n--)
    {
        num=0;
        while(getline(cin,str))
        {
            num++,num2=0;
            if(str.size()==0)
                break;
            if(num==1)
            {
                str3=str;
                continue;
            }
            for(i=0; i<str.size(); i++)
            {
                char c=str[i];
                if(str[i]==',')
                    num2++;
                if(num2<2)
                {
                    if(str[i]==',')
                        c=(char)32;
                    str2+=c;
                }
                else
                {
                    d=1;
                }
                if(num2<3 && d==1)
                {
                    if(c==',')
                        continue;
                    str4+=c;
                }
                else
                {
                    d=0;
                    e=1;
                }
                if(num2==3 && e==1)
                {
                    if(c==',')
                        continue;
                    str5+=c;
                }
                else
                    e=0;
                if(num2==4 && c!=',')
                    str6+=c;
                if(num2==5 && c!=',')
                    str7+=c;
                if(num2==6 && c!=',')
                    str8+=c;
            }
            mp1[str4]=str2;
            mp2[str4]=str3;
            mp3[str4]=str5;
            mp4[str4]=str6;
            mp5[str4]=str7;
            mp6[str4]=str8;
            str2="",str4="",str5="",str6="",str7="",str8="";
        }
        str3="";
    }
    it1=mp1.begin(),it2=mp2.begin(),it3=mp3.begin(),it4=mp4.begin(),it5=mp5.begin(),it6=mp6.begin();
    for(it1=mp1.begin(); it1!=mp1.end(); it1++)
    {
        cout<<"----------------------------------------"<<endl;
        cout<<it1->second<<" ";
        cout<<it1->first<<endl;
        cout<<it3->second<<endl;
        cout<<"Department: "<<it2->second<<endl;
        cout<<"Home Phone: "<<it4->second<<endl;
        cout<<"Work Phone: "<<it5->second<<endl;
        cout<<"Campus Box: "<<it6->second<<endl;
        it2++;
        it3++;
        it4++;
        it5++;
        it6++;
    }
}
