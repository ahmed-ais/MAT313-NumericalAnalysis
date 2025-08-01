#include <iostream> // Required for input/output operations (cout, endl)
#include <cmath>    // Required for mathematical functions (sin, sqrt, abs)
#include <iomanip>  // Required for output formatting (setprecision, fixed)

using namespace std;

int main() {
    // define the system
    double a[3][3] = {
        {10,  2, -1},
        {-3, -6,  2},
        { 1,  1,  5}
    };
    double b[3] = {22, -14, 14};
    
    // Set output precision for floating-point numbers
    cout << fixed << setprecision(3);
    
    // print header
    cout << "i\tx1\tx2\tx3" << endl;

    int n = 10;          // number of iterations
    double x1 = 0.0, x2 = 0.0, x3 = 0.0;       // initial guess
    
    for (int i = 0; i < n; ++i) {
        // print current iteration no. and value of x
        cout << i << "\t" << x1 << "\t" << x2 << "\t" << x3 << endl;
        
        // calculate next values of x = (x1,x2,x3). Remember: C++ arrays are zero-based
        x1 = (b[0] - a[0][1]*x2 - a[0][2]*x3) / a[0][0];
        x2 = (b[1] - a[1][0]*x1 - a[1][2]*x3) / a[1][1];
        x3 = (b[2] - a[2][0]*x1 - a[2][1]*x2) / a[2][2];
    }

    return 0; // Indicate successful execution
}
