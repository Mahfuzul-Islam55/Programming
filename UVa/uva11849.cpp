
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,m,a,b,i,j,num=0;
   multiset<long long> st;
   multiset<long long>:: iterator it,it2;
   while(cin>>n>>m && n && m){
        num=0;
   while(n--)
   {
       cin>>a;
       st.insert(a);
   }
   while(m--)
   {
       cin>>a;
       st.insert(a);
   }
   it2=st.begin();
   it2++;
   for(it=st.begin();it!=st.end();it++){
       if(*it==*it2)
           num++;
       it2++;
      }
   cout<<num<<endl;
    st.clear();
   }
}

