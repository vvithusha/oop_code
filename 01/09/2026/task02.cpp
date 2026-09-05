#include <iostream>
using namespace std;
enum days{sun,mon,tus,wed,thurs,fri};
int main()
{
    days day1,day2;
    day1 = mon;  //1
    day2 = tus;  //2

    int diff = day1-day2;
    cout<<diff<<endl;
    return 0;
}