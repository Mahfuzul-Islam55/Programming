#include<bits/stdc++.h>
using namespace std;
long long ncr[100][100];
int main()
{
    ncr[0][0]=1;
    for(int i=1;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(j>i) ncr[i][j]=0;
            else if(j==i || j==0) ncr[i][j]=1;
            else ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
        }
    }
    char c;
    int n,a;
    cin>>n;
    a=0;
    int num=0;
     while(n--){
        string str;
        cin >>str;
        // Parse in the numbers:
        int pos = 1;
        for (; str[pos] != '+'; ++pos)
            ;

        string str4 = str.substr(1, pos - 1);
        int start = pos + 1;

        for (; str[pos] != ')'; ++pos)
            ;
        string str3= str.substr(start, pos - start);

        int k = atoi(str.substr(pos + 2).c_str());

        cout << "Case " << ++num << ": ";
        char d='^';
        for(int i=0;i<=k;i++){
            if(i==0){
                cout<<str4;
            if(k>1) cout<<d<<k;
            }
            else if(i!=k){
                cout<<"+"<<ncr[k][i]<<"*"<<str4;
                if(k-i>1) cout<<d<<k-i;

                cout<<"*"<<str3;
                if(i>1) cout<<d<<i;
            }
            else if(i==k){
                cout<<"+"<<str3;
                if(k>1) cout<<d<<k;
            }
        }
        cout<<endl;
    }
}

