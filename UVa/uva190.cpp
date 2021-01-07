
/// here (x1,y1),(x2,y2) are two coordinates of a line;
///here (p,q),(r,s) are two co-ordinates of a line
/// with the help of this program we can find the center & radius of a circle
/// by giving three points on the circle which are not co-linear
///at first finding two equation of these points & finding the equation of perpendicular bisectior
///then finding the intersection of the bisector which is the centre
/// then finding the distance of centre and any point which is the radius
/// for more details check topcoder geometry section
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb long long
int main()
{
    ll a,b,n,m,num=0,sum=0;
     double x1,y1,x2,y2;
     double p,q,r,s;
  //  cin>>n;
     double a1,b1,a2,b2,c1,c2,a3,a4,b3,b4,c3,c4,x3,y3,e,f,g,h;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        // double a1,b1,a2,b2,c1,c2,a3,a4,b3,b4,c3,c4,x3,y3,e,f,g,h;
       // cin>>x1>>y1>>x2>>y2>>x3>>y3;
        a1=y2-y1;
        b1=x1-x2;
        c1=a1*x1+b1*y1; ///thus the equation is: a1x+b1y=c1
      ///  cout<<a1<<"  "<<b1<<"  "<<c1<<endl<<endl;
        a2=y3-y2;
        b2=x2-x3;
        c2=a2*x2+b2*y2; ///thus the equation is: a2x+b2y=c2
        e=(x1+x2)/2.0;
        f=(y1+y2)/2.0;
        g=(x2+x3)/2.0;
        h=(y2+y3)/2.0;
        a3=b1,b3=-a1,c3=(b1)*(e)-a1*(f);
      //  cout<<a3<<"  "<<b3<<"  "<<c3<<endl<<endl<<endl;
       // cout<<a2<<"  "<<b2<<"  "<<c2<<endl;
        a4=b2,b4=-a2,c4=b2*(g)-a2*(h);
      //  cout<<a4<<"  "<<b4<<"   "<<c4<<endl;
        double det=a3*b4-a4*b3;
        double x=(b4*c3-b3*c4)/det;
        double y=(a3*c4-a4*c3)/det;
        if(x==-0.0) x=0.0;
        if(y==-0.0) y=0.0;
        p=x-x1;
        p=abs(p);
        q=abs(q);
        q=y-y1;
         double r=((p*p)+(q*q));
       // if(ceil(r)==floor(r)) r+=0.000;
       // cout<<setprecision(4)<<sqrt(r)<<endl<<endl;
        p=sqrt(r);
        cout<<"(x ";
        if(x<0.0) cout<<"+ ";
        else cout<<"- ";
        printf("%.3f)^2 + (y ",abs(x));
        if(y<0.0) cout<<"+ ";
        else cout<<"- ";
        printf("%.3f)^2 = %.3f^2\n",abs(y),p);
        cout<<"x^2 + y^2 ";
        if((2)*(-x)<0.0)cout<<"- ";
        else cout<<"+ ";
        printf("%.3f",abs(2*(-x)));
        printf("x ");
        if((2)*(-y)<0.0)cout<<"- ";
        else cout<<"+ ";
        printf("%.3f",abs(2*(-y)));
        printf("y ");
        if(x*x+y*y-r<0.0) cout<<"- ";
        else cout<<"+ ";
        printf("%.3f = 0\n\n",abs(x*x+y*y-r));



    }
}


