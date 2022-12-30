// fibonacci number
#include <iostream>
using namespace std;
int main() 
{
    int a,b,next,n;
    a=0;
    b=1;
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++)
    {
        next=a+b;
        cout<<next<<endl;
        a=b;
        b=next;
    }


    return 0;
}
