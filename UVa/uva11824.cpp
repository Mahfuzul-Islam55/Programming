#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,d,m,i,j,count=0,sum=0,num=0;
    cin>>n;
    vector<long long> vec;
    while(n--){
        num=0,sum=0,c=0;
        while(cin>>a && a)
            vec.push_back(a);
        sort(vec.rbegin(),vec.rend());
        for(i=0;i<vec.size();i++){
            num++;
            sum+=(2*(long long)(pow(vec[i],num)+.5));
            if(sum>5000000){
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<sum<<endl;
        else
            cout<<"Too expensive"<<endl;
        vec.clear();
    }
}

