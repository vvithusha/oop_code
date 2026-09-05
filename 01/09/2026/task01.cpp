#include <iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
    int secounds;
};
int main()
{
    struct time time1;
    cout<<"Enter the hours : "<<endl;
    cin>>time1.hours;
    cout<<"Enter the minutes : "<<endl;
    cin>>time1.minutes;
    cout<<"Enter the secounds : "<<endl;
    cin>>time1.secounds;

    cout<<time1.hours<<":"<<time1.minutes<<":"<<time1.secounds<<endl;
    return 0;
}