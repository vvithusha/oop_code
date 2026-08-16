#include <iostream>
using namespace std;
int main()
{
    cout<<"Welcome to My School Grading System"<<endl;

    string name;
    cout<<"ENter your name :";
    cin>>name;

    int m1,m2,m3,m4,m5;

    cout<<"Enter your all 5 subject marks:";
    cin>>m1>>m2>>m3>>m4>>m5;

    float average = (m1+m2+m3+m4+m5)/5;

    cout<<"Your average is : "<<(static_cast<double>(average))<<endl;
    char result;
    if(average >= 85)
       result = 'A';
    else if(average>=50)
       result = 'B';
    else if(average>=25)
       result = 'C';
    else 
       result = 'W';


    cout<<"HI , "<<name << " you have obatined grade : "<<result<<endl;
    return 0;
}