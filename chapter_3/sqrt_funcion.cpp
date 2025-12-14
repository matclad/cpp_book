#include "std_lib_facilities.h"



double mod_func(double a,double b) {
	if (a-b>=0)
		return a-b;
	else
		return b-a;
}

double sqrt_func(double n) {
		double lower=1;
		double upper=n;
		double mid=(lower+upper)/2;
		while (mod_func(mid*mid,n)>.00001) {
			if (mid*mid>n)
				upper=mid;
			else
				lower=mid;
			mid=(lower+upper)/2;
		}
		return mid;
}


int main() {
		for (int i=2;i<=10000;i++) {
				cout << i << "\t" << sqrt_func((double)i) << "\n";
		};
}

