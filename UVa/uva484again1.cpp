#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int> mp;
    vector<int> vec,vec2;
    int n,a,b,i;
    while(cin>>n){
        if(mp[n]==0){
            mp[n]=1;
            vec.push_back(n);
        }
        else
            mp[n]=mp[n]+1;
    }
    for(i=0;i<vec.size();i++){
        cout<<vec[i]<<" "<<mp[vec[i]]<<endl;
    }

}
