#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,item;
    cin>>n;
    while(n--){
        vector<long long> vec,S;
        cin>>a;
        while(a--){
        cin>>m;
        vector<long long>:: iterator it=lower_bound(vec.begin(),vec.end(),m);
        if(vec.end()==it) vec.push_back(m);
        else vec[it-vec.begin()]=m;
       }
    cout<<vec.size()<<endl;
    }
}

