#include<bits/stdc++.h>
using namespace std;
int dp[1000],dir[1000],k;
int arr[1000];
int longest(int u){
    if(dp[u]!=1) return dp[u];
    int maxi=0;
    for(int v=u+1;v<k;v++){
        if(arr[v]>arr[u]){
            if(longest(v)>=maxi){
                maxi=longest(v);
                dir[u]=v;
            }
        }
    }
    dp[u]=1+maxi;
    return dp[u];
}

int main()
{
    long long n,m,i,j,num=0;
        k=0;
        memset(dp,1,sizeof dp);
        memset(dir,1,sizeof dir);
        int LIS=0,start=0;
        string str,str2="";
    while(1){
        cin>>str;
        if(str.compare(str2)==0) break;
        stringstream s(str);
        s>>m;
        arr[k]=m;
        k++;
    }
        for(int i=0;i<k;i++){
            if(longest(i)>LIS){
                LIS=longest(i);
                start=i;
            }
        }
  //  cout<<"Test #"<<++num<<":"<<endl;
    cout<<"maximum possible interceptions: "<<LIS<<endl;

}
