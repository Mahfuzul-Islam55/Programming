#include<bits/stdc++.h>
using namespace std;
unsigned long long ncr[100][100];
int main()
{
    int n,m,a,b;
 //   long long ncr[100][100];
    ncr[0][0]=1;
    for(int i=1;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(j>i)
                ncr[i][j]=0;
            else if(j==i || j==0)
                ncr[i][j]=1;
            else
                ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
        }
    }
    while(cin>>n>>m){
        long long t=1,b=n,c=m;
        for(int i=1;i<=m;i++){
            cin>>a;
            if(b-a>=0 && i<m)
           t*=ncr[b][b-a];
           b=b-a;
      //     cout<<t<<" ";
        }
        cout<<t<<endl;
    }
}

