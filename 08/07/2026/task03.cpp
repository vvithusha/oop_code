#include <iostream>
using namespace std;
int main()
{
    int num = 25;
    num += 5;
    cout<<"num = "<<num<<endl;
    num -= 6;
    cout<<"num = "<<num<<endl;
    num /=4;
    cout<<"num = "<<num<<endl;
    num *=3;
    cout<<"num = "<<num<<endl;
    cout<<"final result : "<<num <<endl;


    int a = 10;
    cout<<"a = "<<++a<<endl;  //output: 11
    cout<<"a = "<<a++<<endl;  //output: 11
    cout<<"a = "<<--a<<endl;  //output: 11
    cout<<"a = "<<a--<<endl;  //output: 11
    return 0;
}