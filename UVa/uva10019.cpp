#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,b,i=0,j=0,m;
    cin>>n;
    vector<int> vec,vec2;
    while(n--){
        cin>>m;
        int num=0,num2=0,a=m;
        while(m>0){
            vec.push_back(m%2);
            m/=2;
        }
        for(i=vec.size()-1;i>=0;i--){
            if(vec[i]==1)
                num++;
        }
        while(a>0){
            vec2.push_back(a%10);
            a/=10;
        }
        sort(vec2.rbegin(),vec2.rend());
        for(i=0;i<vec2.size();i++)
            {
                while(vec2[i]>0){
                    b=vec2[i]%2;
                    if(b==1)
                        num2++;
                    vec2[i]/=2;
                }
            }
        cout<<num<<" "<<num2<<endl;
        vec.clear();
        vec2.clear();
    }
}
