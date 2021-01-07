#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,sum=0,a,num=0;
    vector<long long> vec;
    while(cin>>n && n){
        sum=0,num=0;
        while(n--){
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        sum+=vec[0]+vec[1];
       // cout<<sum<<" ";
        num+=sum;
        for(i=2;i<vec.size();i++){
            sum+=vec[i];
       //     cout<<sum<<" ";
            num+=sum;
        }
        cout<<num<<endl;
        vec.clear();
    }
}

