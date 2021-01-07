#include<bits/stdc++.h>
using namespace std;

double direction(double a,double b,double c,double d,double e,double f) {
    return (c - a)*(f - b) - (d - b)*(e - a);
}
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
    double arr[11][7];
    char ch[5];
    int i,j=0,num=0;
    double num2=0,c,d,e,f,g,h;
    vector<int> vec;
    while(scanf("%s", ch) && strcmp(ch, "*")!=0){
        if(ch[0]=='t'){
        vec.push_back(1);
        scanf("%lf %lf %lf %lf %lf %lf", &b, &c, &d, &e,&f,&g);
        arr[j][0]=b,arr[j][1]=c,arr[j][2]=d,arr[j][3]=e,arr[j][4]=f,arr[j][5]=g;
        j++;
        }
        if(ch[0]=='r'){
        vec.push_back(0);
        scanf("%lf %lf %lf %lf", &b, &c, &d, &e);
        arr[j][0]=b,arr[j][1]=c,arr[j][2]=d,arr[j][3]=e,arr[j][4]=-9999.9,arr[j][5]=-9999.9;
        j++;
        }
        if(ch[0]=='c'){
            vec.push_back(0);
            scanf("%lf %lf %lf", &b, &c, &d);
            arr[j][0]=b,arr[j][1]=c,arr[j][2]=d,arr[j][3]=-9999.9,arr[j][4]=-9999.9,arr[j][5]=-9999.9;
            j++;
        }
    }
        while(cin>>a>>b){
            if(a==9999.9 && b==9999.9) break;
            int k=0;
            ++num;
            for(i=0;i<j;i++){
                c=arr[i][0],d=arr[i][1],e=arr[i][2],f=arr[i][3],g=arr[i][4],h=arr[i][5];
                if(vec[i]==1){
                      double dir1=direction(a,b,c,d,e,f);
                      double dir2=direction(a,b,e,f,g,h);
                      double dir3=direction(a,b,g,h,c,d);
                    //  double dir4=direction(a,b,e,f,c,d);
                    //  double dir5=direction(a,b,g,h,e,f);
                    //  double dir6=direction(a,b,c,d,g,h);
                      if((dir1>0 && dir2>0 && dir3>0) || (dir1<0 && dir2<0 && dir3<0)){
                           k=1;
                          printf("Point %d is contained in figure %d\n",num, i+1);
                      }
                }
                else if(f!=-9999.9){
                if(isInsideRectangle(c,d,e,f,a,b)){
                    k=1;
                    printf("Point %d is contained in figure %d\n",num, i+1);
                }
                }
                else if(f==-9999.9){
                   if(abs(a-c)*abs(a-c)+abs(b-d)*abs(b-d)<e*e){
                       printf("Point %d is contained in figure %d\n",num, i+1);
                       k=1;
                   }
                }
            }
            if(k==0)
                printf("Point %d is not contained in any figure\n",num);
        }
}

