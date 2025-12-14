#include "std_lib_facilities.h"

int main() {
		string currency;
		double amount,y2d,k2d,p2d,inr2d;
		y2d=0.0064;
		k2d=0.099;
		p2d=1.34;
		inr2d=0.011;
		cout << "Enter the followed by currency: ";
		cin >> amount >> currency;
		if (currency=="r"||currency=="inr")
				cout << amount << " inr" << "= " << amount*inr2d << " dollars\n";
		else if (currency=="y"||currency=="yen")
				cout << amount << " yen" << "= " << amount*y2d << " dollars\n";
		else if (currency=="k"||currency=="kroner")
				cout << amount << " kroner" << "= " << amount*k2d << " dollars\n";
		else if (currency=="p"||currency=="pounds")
				cout << amount << " pounds" << "= " << amount*p2d << " dollars\n";
		else
				cout << "Not a currency i know of.\n";

}
