#include <iostream>

using namespace std;

int main() {

	int num = rand() % 10 + 1;
	int fuck;
	int won = 0;

	while (won == 0 ) {
		cout << "Please enter a number" << endl;
		cin >> fuck;
        
		if (num == fuck) {
			cout << "You guessed it right!" << endl;
			won = 1;
		}

		if (num != fuck) {
			if (fuck > num) {
				cout << "You guessed too high!" << endl;
			}

			if (fuck < num) {
				cout << "You guessed too low!" << endl;
			}
		}


	}

}
