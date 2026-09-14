#include <iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    int R_num;
    char gender;

    public:
    void get()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age :";
        cin>>age;
        cout<<"Enter the registrations number:";
        cin>>R_num;
        cout<<"Enter the Gender:";
        cin>>gender;
    }
    void diaplay()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
        cout<<"R_Num :"<<R_num<<endl;
        cout<<"gender :"<<gender<<endl;       
    }
};
int main()
{
    student s1;
    s1.get();
    s1.diaplay();
    return 0;
}