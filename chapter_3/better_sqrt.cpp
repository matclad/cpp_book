#include "std_lib_facilities.h"


double mod_func(double n1,double n2) {
    if (n1>n2)
        return n1-n2;
    else
        return n2-n1;
}


double better_sqrt(double n) {
    double x0,x1;
    x1=n/2;
    do {
        x0=x1;
        x1=x0-(x0*x0-n)/(2*x0);
    } while (mod_func(x1,x0)>.01) ;
    return x1;
}

int main() {
    for (int i=1;i<=100;i++) {
        cout << "sqrt(" << i <<") =" << better_sqrt(i) << "\n";
    }
}