#include <iostream>
using namespace std;
int main()
{
    
    int a,b;
    float num = 99.45;
    cin>>a>>b;
    cout<<"sum = "<<(a+b)/3<<endl;

    //casting test

    cout<<(static_cast<double>(a))<<endl;
    cout<<(static_cast<int>(num))<<endl;
    return 0;
}