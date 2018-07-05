#include <iostream>

using namespace std;

int main()
{int a,b,c,ua,x,ub,y;
    cout<<"Introduceti numarul a:";
    cin>>a;
    cout<<"Introduceti numarul b:";
    cin>>b;
    cout<<"Introduceti numarul c:";
    cin>>c;
    ua=a%10;
    ub=b%10;
    while(a>0)
    {
        x=a;
        a=a/10;
    }
    while(c>0)
    {
        y=c;
        c=c/10;
    }
    cout<<endl<<endl<<"Primul numar este:"<<x<<ub<<endl<<"Ultimul numar este:"<<y<<ua<<endl<<endl<<endl;
    return 0;
}
