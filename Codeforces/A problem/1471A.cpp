#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ll t,c,d,n,m,num=0,sum=0;
    cin>>t;
    while(t--){
        ll sum=0,num=0;
        ll a,b;
        cin>>n>>b;
        vector<ll>vec,vec2;
        for(ll i=0;i<n;i++){
            cin>>a,sum+=a;
            num+=(ll)ceil(a/(b+.0));
        }
        cout<<(ll)ceil(sum/(b+.0))<<" "<<num<<endl;
    }
}

