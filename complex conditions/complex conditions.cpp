#include <iostream>

using namespace std;

/*
* == equality test
* != not equals
* < less than
* > greater than
* <= less than or equal to
* >= greater than or equal to
*/


int main() {

	int value1 = 7;
	int value2 = 4;

	if (value1 >= 5) {
		cout << "condition 1: true" << endl;
	}
	else {
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 < 3) {
		cout << "condition 2: true" << endl;
	}
	else {
		cout << "Condition 2: false" << endl;
	}



	return 0;
}