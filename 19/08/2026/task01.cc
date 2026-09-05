#include <iostream>
using namespace std;
int main()
{
    enum days{monday,tuesday,wednesday,thursday,friday,saturday,sunday};  //

    days day1,day2;
    day1 = monday;  //0  
    day2 = tuesday;  //1

    int diff = day1-day2;  //0-1

    cout<<"day bitween : "<< diff<<endl;  //-1

    return 0;
}