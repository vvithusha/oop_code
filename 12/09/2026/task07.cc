#include <iostream>
using namespace std;

class Counter
{
    private:
      unsigned int  count;

    public:
      Counter() :count(0){
        cout<<"I'm the constructor\n";
      }
    void in_count()
    {
        count++;
    }
    unsigned int get_cout()
    {
        return count;
    }
};
int main()
{
    Counter c1,c2;
    cout<<"\n C1="<<c1.get_cout();
    cout<<"\n C2="<<c2.get_cout();

    c1.in_count();
    c2.in_count();
    c2.in_count();
    c2.in_count();
    cout<<"\n C1="<<c1.get_cout();
    cout<<"\n C2="<<c2.get_cout(); 

    cout<<endl;
    return 0;
}