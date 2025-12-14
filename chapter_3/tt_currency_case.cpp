#include "std_lib_facilities.h"

int main() {
		char currency;
		double amount,y2d,k2d,p2d,inr2d;
		y2d=0.0064;
		k2d=0.099;
		p2d=1.34;
		inr2d=0.011;
		cout << "Enter the followed by currency: ";
		cin >> amount >> currency;
		switch (currency) {
				case 'r':
						cout << amount << " inr" << "= " << amount*inr2d << " dollars\n";
						break;
				case 'y':
						cout << amount << " inr" << "= " << amount*inr2d << " dollars\n";
						break;
				case 'k':
						cout << amount << " kroner" << "= " << amount*k2d << " dollars\n";
						break;
				case 'p':
						cout << amount << " pounds" << "= " << amount*p2d << " dollars\n";
						break;
				default:
						cout << "Not a currency i know of.\n";
						break;
		}
}
