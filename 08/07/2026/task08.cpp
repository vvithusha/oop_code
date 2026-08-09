#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    for (;;)
    {
        string operation;
        cout << "Enter what operation you want to perform and if you want to exit enter 'exit' : ";
        cin >> operation;

        if (operation == "exit")
        {
            cout<<"Exiting the program."<<endl;
            break;
        }
        else if (operation == "+")
        {
            cout << "result = " << num1 + num2 << endl;
        }
        else if (operation == "-")
        {
            cout << "result = " << num1 - num2 << endl;
        }
        else if (operation == "*")
        {
            cout << "result = " << num1 * num2 << endl;
        }
        else if (operation == "/")
        {
            if (num2 == 0)
            {
                cout << "Division by zero is not allowed" << endl;
            }
            else
            {
                cout << "result = " << num1 / num2 << endl;
            }
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
    }

    return 0;
}