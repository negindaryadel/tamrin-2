#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i,n;
    a=1;
    b=1;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"1 1 ";
    for(i=2;i<n;i++)
    {

        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";

    }
    return 0;
}
