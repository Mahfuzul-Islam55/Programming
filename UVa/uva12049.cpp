#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<long long> st,st2;
    long long n,t,m,a,b,i,j=0,num=0,sum=0;
  //  cin>>t;
    vector<long long> vec,vec2,vec3;
   // while(t--){
        cin>>n>>m;
        while(n--){
            cin>>a;
            vec.push_back(a);
        }
        while(m--){
            cin>>a;
            vec2.push_back(a);
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end());
        int k=vec.size(),l=vec2.size();
        if(k>l){
            for(i=1;i<=k-l;i++)
                vec2.push_back(0);
        }
        else if(l>k){
            for(i=1;i<=l-k;i++)
                vec.push_back(0);
        }
         k=vec.size();
        for(i=0;i<k;i++){
            if(vec[i]==vec2[j])
               continue;
            else if(vec[i]!=vec2[j]){
                    cout<<"ok"<<endl;
                if(vec[i]<vec2[j]){
                   // vec.push_back(0);
                  //  k++;
                    j--;
                    num++;
                }
                else{
                 //   vec2.push_back(0);
                    i--;
                    num++;
                }
            }
            j++;
          //  cout<<vec[i]<<endl;
        }
        cout<<num<<endl;
   }
 //   }
