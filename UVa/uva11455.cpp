#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,m,b,i,j,num=0,c,d;
    cin>>n;
    while(n--){
        num=0;
        vector<int> vec;
        cin>>a>>b>>c>>d;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        vec.push_back(d);
        sort(vec.begin(),vec.end());
        num+=(vec[0]+vec[1]+vec[2]);
        if(a==b && b==c && c==d && d==a) cout<<"square"<<endl;
        else if(vec[0]==vec[1] && vec[2]==vec[3]) cout<<"rectangle"<<endl;
        else if(num>vec[3]) cout<<"quadrangle"<<endl;
        else cout<<"banana"<<endl;
    }
}

