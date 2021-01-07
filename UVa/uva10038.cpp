#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,a,b,num=0,count=0,num2=0;
    vector<long long> vec,vec2,p;
    set<long long> st;
    while(cin>>n){

        num=0,count=0,num2=0;
        for(i=0;i<n;i++){
            cin>>a;
            vec.push_back(a);
        }
        for(i=0;i<n-1;i++){
            if(abs(vec[i+1]-vec[i]!=n && vec[i+1]-vec[i]!=0))
            st.insert(abs(vec[i+1]-vec[i]));
        }

        if(st.size()==n-1)
        cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
        vec.clear();
        st.clear();
    }
}

