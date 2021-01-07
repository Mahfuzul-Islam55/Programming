#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool onLine(ll a1,ll b1,ll a2,ll b2,ll c1,ll c2){
    if((c1<=max(a1,a2) && c1>=min(a1,a2)) && (c2<=max(b1,b2) && c2>=min(b1,b2)))
        return true;
    return false;
}
int direction(ll a1,ll b1,ll a2,ll b2,ll c1,ll c2){

    int val=a1*(b2-c2)-b1*(a2-c1)+a2*c2-b2*c1;
    if(val==0) return 0;
    else if(val<0) return 2;
    else return 1;
}

bool isIntersect(ll x1,ll y1,ll x2,ll y2,ll p1,ll q1,ll p2,ll q2){

    int dir1=direction(x1,y1,x2,y2,p1,q1);
    int dir2=direction(x1,y1,x2,y2,p2,q2);
    int dir3=direction(p1,q1,p2,q2,x1,y1);
    int dir4=direction(p1,q1,p2,q2,x2,y2);

    if(dir1!=dir2 && dir3!=dir4) return true;
    if(dir1==0 && onLine(x1,y1,x2,y2,p1,q1)) return true;
    if(dir2==0 && onLine(x1,y1,x2,y2,p2,q2)) return true;
    if(dir3==0 && onLine(p1,q1,p2,q2,x1,y1)) return true;
    if(dir4==0 && onLine(p1,q1,p2,q2,x2,y2)) return true;

    return false;

}
bool isInsideRectangle(ll p1,ll q1,ll p2,ll q2,ll a,ll b)
{
    if (a <= max(p1, p2)
        && a>= min(p1, p2)
        && b <= max(q1,q2)
        && b >= min(q1,q2))
        return true;

    return false;
}
int main()
{
    ll n,a,b,c,d,num=0,sum=0,x1,y1,x2,y2,p1,q1,p2,q2;
    cin>>n;
    while(n--){
        cin>>x1>>y1>>x2>>y2>>p1>>q1>>p2>>q2;
        ll p3=p2,q3=q1,p4=p1,q4=q2;
        if(isInsideRectangle(p1,q1,p2,q2,x1,y1) || isInsideRectangle(p1,q1,p2,q2,x2,y2)){
            cout<<"T"<<endl;
            continue;
        }

        if(isIntersect(p1,q1,p3,q3,x1,y1,x2,y2)) cout<<"T"<<endl;
        else if(isIntersect(p1,q1,p4,q4,x1,y1,x2,y2)) cout<<"T"<<endl;
        else if(isIntersect(p4,q4,p2,q2,x1,y1,x2,y2)) cout<<"T"<<endl;
        else if(isIntersect(p2,q2,p3,q3,x1,y1,x2,y2)) cout<<"T"<<endl;
       // else if(x1>=p1 && x1<=p2 && x2>=p1 && x2<=p2 && y1>=q2 && y1<=q1 && y2>=q2 && y2<=q1)
       //      cout<<"T"<<endl;
        else cout<<"F"<<endl;
    }
}


