#include <iostream>
using namespace std;

class counter
{
    private:
       unsigned int count;

    public:
      counter():count(0){}

      unsigned int get_counter()
      {
         return count;
      }
      void operator ++()
      {
        ++count;
      }
};

int main()
{
    counter c1,c2;
    cout<<"\n C1 = "<<c1.get_counter();
    cout<<"\n c2 = "<<c2.get_counter();


    ++c1;
    ++c1;
    ++c2;
    ++c2;

    cout<<"\n C1 = "<<c1.get_counter();
    cout<<"\n c2 = "<<c2.get_counter();
        
    return 0;
}