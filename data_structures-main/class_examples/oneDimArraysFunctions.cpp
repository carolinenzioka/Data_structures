/*****************************************************************
 * Passing array name and size to a function to let it print the *
 * element of the array 					   				   *
 *****************************************************************/

    #include <iostream>
    using namespace std;

/***************************************************************
 * Function print accepts the name and the size of an array.   *
 * The function then prints the elements of the array created  *
 * and initialized in main. It does not modify the array.      *
 ***************************************************************/

void print(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers [i] << " ";
    }
    cout << endl;

}

int main( )
{
    // Declaration and initialization of the array
        int numbers[15] = {5, 7, 9, 11, 13};

    // Calling the print function
        print (numbers, 5);

    return 0;
}
