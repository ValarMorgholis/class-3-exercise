#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int
main()
{
    int first_number, second_number;

    cout << "Please enter the first number : ";
    cin >> first_number;

    cout << "Please enter the second number : ";
    cin >> second_number;

    cout << "The anwser is : " << abs (first_number) * abs (second_number) << endl;
    return 0;
}
