/* Implementing forward Euler numerical ODE solver
Solves the initial value problem
dy/dx = f(x, y), where y(a) = alpha
for a <= x <= b
*/ 

#include<iostream>

using namespace std;

// function to solve; dy/dx = y - x^2 + 1
double dydx(double x, double y){
    double a = y - x*x + 1;
    return a;
}

// solve dydx at (0, 1/2)
int main(){
    // end points
    float xinit = 0;
    float xend = 2;

    // initial y value
    float yinit = 1/2;
    float yn;

    float slope; // dydt
    int i; // iterator
    int n = 10; // number of steps forward
    float h; // x width parameter
    h = (xend - xinit) / n;

    // repeat process for n iterations
    for (i=0; i < n; i++){
        // calculate derivative
        slope = dydx(xinit, yinit);

        // solve
        yn = yinit + h * slope;

        // display results
        cout << xinit << "\t" << yinit << endl;

        // change x and y
        yinit = yn;
        xinit = xinit + h;

    }
    return 0;
}
