#include <iostream> // Required for input/output operations (cout, endl)
#include <cmath>    // Required for mathematical functions (pow, abs)

using namespace std;

// you define f(x) here
double f(double x) {
    return pow(x,3) + 2*x - 7;
}

int main() {
    double a = 1, b = 3;   // initial interval
    
    if (f(a)*f(b) < 0){
        int n = 100;          // number of iterations
        double e = 0.001;  // error tolerance = 10^-3
        
        // print header
        cout << "i\ta\tb" << endl;
    
        for (int i = 0; i < n; ++i) {
            // print current iteration no. and values of a and b
            cout << i << "\t" << a << "\t" << b << endl;
            
            double c = (a+b)/2;
            
            // chose the subinterval enclosing the root
            if(f(a)*f(c) < 0)
                b = c;
            else
                a = c;
            
            // stop when conveged (even if not all iterations are used)
            if (abs(a - b) < e)
                break;
        }
    } else
        cout << "No root in the specified interval!" << endl;

    return 0; // Indicate successful execution
}
