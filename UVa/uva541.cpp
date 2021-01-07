#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,sum=0,sum2=0,a,b;
    vector<vector<int>> vec;
    while(cin>>n){
        int arr[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>arr[i][j];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
}
