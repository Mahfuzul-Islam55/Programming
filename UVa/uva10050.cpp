#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,m,i,j,num=0,sum1=0,sum2=0,count=0;
    cin>>n;
    set<int> st;
    vector<int> vec,vec2,vec3,vec4;
    while(cin>>a && a!=-1){
        num++;
        b=a,c=a;
        sum1=0,sum2=0;
        vec.push_back(a);
        n=12,m=12;
        while(n--){
            cin>>m;
            vec.push_back(m);
            //sum1+=m;
          //  vec3.push_back(m);
        }

        while(m--){
            cin>>b;
            vec2.push_back(b);
        }
        cout<<"Case "<<num<<":"<<endl;
        i=0,j=12;
        int k=0;
        while(j--){
            b=vec2[k];
            if(b<=vec[i]){

                cout<<"No problem! :D"<<endl;
                vec[i+1]=vec[i+1]+vec[i]-b;
                i++;
            }
            else{
                cout<<"No problem. :("<<endl;
                vec[i+1]=vec[i+1]+vec[i];
                i++;
            }
            k++;
        }
        vec.clear();
        vec2.clear();
    }
}
