#include <iostream>
using namespace std;

class Distance
{
    private:
      int feet;
      float inches;

    public:
      Distance(int f = 0, float i = 0.0) : feet(f), inches(i) {}

      Distance operator +(Distance d2) const
      {
         int f = feet + d2.feet;
         float i = inches + d2.inches;

         if(i >= 12.0)
         {
            i -= 12.0;
            f++;
         }
         return Distance(f, i);
      }

      void display()
      {
          cout << feet << " feet " << inches << " inches" << endl;
      }
};

int main()
{
    Distance d1(5, 8.5);
    Distance d2(3, 7.0);

    Distance d3 = d1 + d2;
    d3.display();

    return 0;
} 