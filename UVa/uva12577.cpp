#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Hajj",str2="Umrah",str3;
    int num=0;
    while(cin>>str3){
        if(str3.size()==1)
            break;
        if(str3.compare(str))
            printf("Case %d: Hajj-e-Asghar\n",++num);
        else if(str3.compare(str2))
            printf("Case %d: Hajj-e-Akbar\n",++num);
    }
}
