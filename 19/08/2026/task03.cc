#include <iostream>
using namespace std;

void starline();
int main()
{
    starline();
    cout<<"personal profile :"<<endl;
     
    starline();

    cout<<"name : vithu "<<endl;
    starline();
    cout<<"Age  : 24 " <<endl;
    starline();
    cout<<"DOB : 12/09/2002"<<endl;

    return 0;
}
void starline()
{
    for(int i=0 ;i<15 ; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}