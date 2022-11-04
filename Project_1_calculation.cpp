#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int
main()
{
    float a;

    cout << "Enter the number : ";
    cin >> a;

    cout << "result : " << setprecision (4)
         << pow (a, 3) / (pow (a, 2) + a + 1) << endl;

    return 0;
}
