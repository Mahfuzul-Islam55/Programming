#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,v,num=0;
    vector<long long> vec;
    while(cin>>n){
        vec.push_back(n);
        int len=vec.size();
        v=ceil(len/2.0);
        sort(vec.begin(),vec.end());
        if(len%2==1){
            cout<<vec[v-1]<<endl;
        }
        else{
            cout<<(vec[v-1]+vec[v])/2<<endl;
        }
    }
}

