#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>


using namespace std;

int
main()
{
    int r;
    const float p = 3.14159265358979323846;

    cout << "Enter the number : ";
    cin >> r;

//  cout << "Radius : " << r *r *M_PI << setw (40) << "Area : " << r * 2 * M_PI << endl;
//  M_PI is 3.14 it was define in cmath library we can use this too.

    cout << "Radius : " << r *r *p << setw (40) << "Area : " << r * 2 * p << endl;

    return 0;
}
