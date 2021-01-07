

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
    ll x1,y1,x2,y2;
    ll p,q,r,s;
    cin>>n;
    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    while(n--){
        num++;
        ll a1,b1,a2,b2,c1,c2,e,f,g;
        cin>>x1>>y1>>x2>>y2;
        cin>>p>>q>>r>>s;
        a1=y2-y1;
        b1=x1-x2;
        c1=a1*x1+b1*y1; ///thus the equation is: a1x+b1y+c1=0
        a2=s-q;
        b2=p-r;
        c2=a2*p+b2*q;   ///thus the equation is: a2x+b2y+c2=0
        //e=a1*p+b1*q+c1;
       // f=a1*r+b1*s+c1;
        double det=a1*b2-a2*b1;
        //cout<<e<<"      "<<f<<endl<<endl;
        e=a1*b2-a2*b1;
        f=c1*b2-c2*b1;
        g=a1*c2-a2*c1;
        if(a1*b2==b1*a2 && b1*c2==c1*b2 && a1*c2==a2*c1) cout<<"LINE"<<endl;
        else if(det==0) cout<<"NONE"<<endl;
        else{
            double x=(b2*c1-b1*c2)/det;
            double y=(a1*c2-a2*c1)/det;
            printf("POINT %.2f %.2f\n",x,y);
                  }
    }
    cout<<"END OF OUTPUT"<<endl;
}
