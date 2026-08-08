#include <iostream>
using namespace std;

class curiousadder
    {
        public:
        curiousadder()
        {
            for(int i=0 ; i<=5 ; i++)
            {
                cout<<++i;
            }
        }
    };

int main()
{

    curiousadder obj;
   return 0;
}