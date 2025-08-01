#include <iostream> // Required for input/output operations (cout, endl)
#include <cmath>    // Required for mathematical functions (sin, sqrt, abs)
#include <iomanip>  // Required for output formatting (setprecision, fixed)

using namespace std;

// you define f(x) here
double f(double x) {
    return exp(-x) - x;
}

// you define f'(x) here
double df(double x) {
    return -exp(-x) - 1;
}

int main() {
    // Set output precision for floating-point numbers
    cout << fixed << setprecision(10);
    
    // print header
    cout << "i\tx" << endl;

    int n = 100;          // number of iterations
    double x = 0.0;       // initial guess
    double e = 0.0000001;  // error tolerance = 10^-7
    
    for (int i = 0; i < n; ++i) {
        // print current iteration no. and value of x
        cout << i << "\t" << x << endl;
        
        // calculate next value of x
        double x_next = x - f(x)/df(x);

        // stop when conveged (even if not all iterations are used)
        if (abs(x - x_next) < e)
            break;
        else
            // keep going, update x to be what x_next have
            x = x_next;
    }

    return 0; // Indicate successful execution
}
