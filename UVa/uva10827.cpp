#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,p;       // the lowest possible value for this problem
    while(cin>>n>>p && n!=0 && p!=0){
    long long a,b,i,h,num=0,maxSubRect = -127*100*100,subRect=0;
    long long A[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cin>>A[i][j];
            if(A[i][j]==0) A[i][j]=1;
            else A[i][j]=-2;
            if (i > 0) A[i][j] += A[i - 1][j];           // if possible, add from top
            if (j > 0) A[i][j] += A[i][j - 1];          // if possible, add from left
            if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){ // start coordinate
            for (int k = i; k < n; k++){
                for (int l = j; l < p; l++)
                {
                    // end coord
                    subRect = A[k][l];      // sum of all items from (0, 0) to (k, l): O(1)
                    if (i > 0)
                        subRect -= A[i - 1][l];                              // O(1)
                    if (j > 0)
                        subRect -= A[k][j - 1];                              // O(1)
                    if (i > 0 && j > 0)
                        subRect += A[i - 1][j - 1];                 // O(1)
                    maxSubRect = max(maxSubRect, subRect);
                }
            }
        }

    }
    cout<<maxSubRect<<endl;
    }
}


