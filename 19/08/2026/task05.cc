#include <iostream>
using namespace std;

void repchar()
{
    for(int j=0 ; j<45 ; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
void repchar(char n )
{
    for(int j=0 ; j<45 ; j++)
    {
        cout<<n;
    }
    cout<<endl;    
}
void repchar(char n , int m)
{
    for(int j=0 ; j<m ; j++)
    {
        cout<<n;
    }
    cout<<endl;
}
int main()
{
    repchar();
    repchar('=');
    repchar('+',45);
   
   return 0;
}