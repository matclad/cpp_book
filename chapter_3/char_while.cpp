#include "std_lib_facilities.h"

int main() {
		char lower='a';
		while (lower<='z'){
				cout << lower << "\t" << (int)lower << "\n"; 
				++lower;
		}
}
