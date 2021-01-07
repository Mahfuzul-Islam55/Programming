#include<bits/stdc++.h>
using namespace std;

bool isInsideRectangle(double p1,double q1,double p2,double q2,double a,double b)
{
    if (a < max(p1, p2) && a> min(p1, p2) && b < max(q1,q2) && b > min(q1,q2))
        return true;

    return false;
}
int main()
{
    double a,n,m,b;
    string str;
    double arr[11][5];
    char ch[5];
    int i,j=0,num=0;
    double num2=0,c,d,e,f;
    while(scanf("%s", ch) && strcmp(ch, "*")!=0){
        scanf("%lf %lf %lf %lf", &b, &c, &d, &e);
        arr[j][0]=b,arr[j][1]=c,arr[j][2]=d,arr[j][3]=e;
        j++;
    }
        while(cin>>a>>b){
            if(a==9999.9 && b==9999.9) break;
            int g=0;
            ++num;
            for(i=0;i<j;i++){
                c=arr[i][0],d=arr[i][1],e=arr[i][2],f=arr[i][3];
                if(isInsideRectangle(c,d,e,f,a,b)){
                    g=1;
                    printf("Point %d is contained in figure %d\n",num, i+1);
                }
            }
            if(g==0)
                printf("Point %d is not contained in any figure\n",num);
        }
}


