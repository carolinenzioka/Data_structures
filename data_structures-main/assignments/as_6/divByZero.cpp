#include <iostream>
using namespace std;


  class DivByZero
    {
      private:
        string message;// data member
      public:
        DivByZero(string x);//parameter constructor
        ~DivByZero();//destructor
        string what();//member function

    };


  DivByZero::~DivByZero()// destructor
    {

    }

DivByZero :: DivByZero(string x)// parameter constructor
 :message(x)//intialize the variable
   {

   }


string DivByZero :: what()// member function
  {
    return message;
  }


int main()
{
    int num1, num2, result;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;

        // The try-catch block
        try
        {
            if (num2 == 0)
              {
                DivByZero div1("Divide by zero occurred.");
                throw div1; // An object of type integer is thrown
              }

            result = num1 /num2;
            cout << "The result is: " << result << endl;
        }

      catch (DivByZero x)
        {
          cout << x.what() << endl;
        }
    }

    return 0;
}
