#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m;
       // the lowest possible value for this problem
    cin>>m;
    cout<<endl;
    while(m--){
    string str;
    long long n,a,b,i,h,num=0,maxSubRect = -127*100*100,subRect=0;
    long long A[26][26];
    i=0;
    getchar();
    while(cin>>str){
        if(str.size()==0) break;
        for(int j=0;j<str.size();j++){
           // A[i].push_back(str[j]);
            A[i][j]=str[j];
            if (i > 0) A[i][j] += A[i - 1][j];           // if possible, add from top
            if (j > 0) A[i][j] += A[i][j - 1];          // if possible, add from left
            if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
        }
        i++;
    }
     n=i;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ // start coordinate
            for (int k = i; k < n; k++){
                for (int l = j; l < n; l++)
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
    if(m>1) cout<<endl;
    }
}

