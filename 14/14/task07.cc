#include <iostream>
using namespace std;

class count
{
    private:
    int data;

    public:
      count():data(0){}
      int increment()
      {
        data++;
        return data ;
      }

};
int main()
{
    count d;
    d.increment();
    d.increment();
    d.increment();
    cout<<d.increment()<<endl;
    return 0;
}