#include <iostream>
using namespace std;

const int p = 2;
double power(double n , int p=2)
{
    double result=1;
    for(int i=0 ; i< p ; i++)
    {
        result *=n;
    }
    return result;
}
int main()
{
   cout<< power(5)<<endl;
    return 0;
}