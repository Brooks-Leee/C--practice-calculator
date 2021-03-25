#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
	int a = 0, b = 0, is_sum = 0;
	while (1) {
		cout << "what kind of opration you want to excute?\n" << "press 1 : excute sum operation\npress 2 : excute substract operation\npress 3 to exist" << endl;
		cin >> is_sum;
		if (is_sum == 1) {
			cout << "please enter 2 number that you want to sum: " << endl;
			cin >> a >> b;
			Sum(a, b);
			is_continue();
			system("pause");
		}
		else if (is_sum == 2) {
			cout << "please enter 2 number that you want to substract" << endl;
			cin >> a >> b;
			Sub(a, b);
			is_continue();
			system("pause");
		}

		else if (is_sum == 3) {
			break;
		}

	}
}