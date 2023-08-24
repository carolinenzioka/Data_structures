// This program prints a two dimensional arrays

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Function Prototype (Declaration)
    void printTwoDArray(const int myarray[][6], int rowSize, int colSize);

    int my_array[6][6] = {{rand()%199,rand()%199 , rand()%199, rand()%199,rand()%199,rand()%199},
                          {rand()%199, rand()%199, rand()%199, rand()%199,rand()%199,rand()%199},
                          {rand()%100+99, rand()%199, rand()%100+99, rand()%199,rand()%199,rand()%199},
                          {rand()%100+99, rand()%199, rand()%199, rand()%100+99,rand()%100+99,rand()%100+99}};
    int rowSize = 6;
    int colSize = 6;

    printTwoDArray(my_array, rowSize, colSize);

    return 0;
}

void printTwoDArray(const int myarray[][6], int rowSize, int colSize)
{
    for (int i=0; i<rowSize; i++)
    {
        for (int j=0; j<colSize; j++)
        {
            cout << setw(6) << myarray[i][j];
        }
        cout << endl;
    }
}
