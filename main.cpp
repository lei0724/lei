#include <iostream>
using namespace std;
int factorial (int tiwala)
{
    if(tiwala>1)
{
return tiwala*factorial(tiwala-1);
}
else
{
    return 1;
}
}

int main(){
    int trust, resulta;
    cin>>trust;
    
    resulta= factorial(trust);
    cout<<resulta;
    return 0;
}
//julierose
