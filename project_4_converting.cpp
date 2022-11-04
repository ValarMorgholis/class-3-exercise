#include <iostream>

using namespace std;

int
main()
{
    char character;
    int number;

    cout << "Enter a character : ";
    cin >> character;

    cout << "Enter a number : ";
    cin >> number;

    cout << " convert char to int : " << (int)character << endl
         << " convert int to char : " << (char)number << endl;

    return 0;
}
