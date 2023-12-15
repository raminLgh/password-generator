#include <iostream>
#include <time.h>

using namespace std;

//we want to write program that
//generate safe and good pasword to protect your account and keep you safe 
//from attackers 

//our program include four defrante type:
//1- numbers : 48-57 
//2- uppercase later : 65-90
//3- lowercase later : 97-122
//4- symbol : and other asci value in range 33-124

int main(void) {

	cout << "\033[0;32m";
	cout << "please enter your name:";
	cout << "\033[0m";
	string name;
	cin >> name;
	cout << "\n\n";

	cout << "\033[0;33m";
	cout << "     ((((  Hi " << name << "  ))))\n\n  Welcome to this program \n\n\n";
	cout << "\033[0m";
	cout << "_enter length of password you want to generate(max len = 20):";
	int size;
	cin >> size;

	while (size > 20 || size <= 0) {
		cout << "\033[0;31m";
		cout << "\nyou enter not valid length :|\n";
		cout << "you must enter a number betwin '0' and '20'\n\n";
		cout << "\033[0m";
		cout << "enter length of password again(max len = 20):";
		cin >> size;
	}

	//count = 30
	int symbol[] = { 33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124 };

	char pasword[21];

	cout << "\n\n_chose items you want to be in your pasword:\n\n";

	cout << "\033[0;34m";
	cout << " 1 - numbers : 0,1,2,3...\n\n"; //48-57 
	cout << "\033[0;35m";
	cout << " 2- uppercase later : A,B,C...\n\n"; // 65-90
	cout << "\033[0;34m";
	cout << " 3- lowercase later : a,b,c,...\n\n"; // 97-122
	cout << "\033[0;35m";
	cout << " 4- symbol : !,@,#,$,%...\n\n"; //symbol
	cout << "\033[0m";
	cout << "_enter item you want(like 1,2,3):";

	string include_item;
	cin >> include_item;

	if (include_item.length() == 1) {
		if (include_item[0] == '1') {
			srand(time(NULL));

			for (int i = 0; i < size; ++i) {
				pasword[i] = (rand() % 10) + 48;
			}
		}

		if (include_item[0] == '2') {
			srand(time(NULL));

			for (int i = 0; i < size; ++i) {
				pasword[i] = (rand() % 26) + 65;
			}
		}

		if (include_item[0] == '3') {
			srand(time(NULL));

			for (int i = 0; i < size; ++i) {
				pasword[i] = (rand() % 26) + 97;
			}
		}

		if (include_item[0] == '4') {
			srand(time(NULL));

			for (int i = 0; i < size; ++i) {
				pasword[i] = symbol[(rand() % 30)];
			}
		}
	}

	if (include_item.length() == 3) {
		if ((include_item[0] == '1' && include_item[2] == '2') || (include_item[0] == '2' && include_item[2] == '1')) {

			srand(time(NULL));
			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 2;

				if (itm == 0) {
					pasword[i] = (rand() % 10) + 48;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 65;
				}
			}

		}

		if ((include_item[0] == '1' && include_item[2] == '3') || (include_item[0] == '3' && include_item[2] == '1')) {
			srand(time(NULL));

			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 2;

				if (itm == 0) {
					pasword[i] = (rand() % 10) + 48;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 97;
				}
			}
		}

		if ((include_item[0] == '1' && include_item[2] == '4') || (include_item[0] == '4' && include_item[2] == '1')) {
			srand(time(NULL));

			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 2;

				if (itm == 0) {
					pasword[i] = (rand() % 10) + 48;
				}
				if (itm == 1) {
					pasword[i] = symbol[(rand() % 30)];
				}
			}
		}

		if ((include_item[0] == '2' && include_item[2] == '3') || (include_item[0] == '3' && include_item[2] == '2')) {
			srand(time(NULL));

			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 2;

				if (itm == 0) {
					pasword[i] = (rand() % 26) + 65;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 97;
				}
			}
		}

		if ((include_item[0] == '2' && include_item[2] == '4') || (include_item[0] == '4' && include_item[2] == '2')) {
			srand(time(NULL));

			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 2;

				if (itm == 0) {
					pasword[i] = (rand() % 26) + 65;
				}
				if (itm == 1) {
					pasword[i] = symbol[(rand() % 30)];
				}
			}
		}

		if ((include_item[0] == '3' && include_item[2] == '4') || (include_item[0] == '4' && include_item[2] == '3')) {
			srand(time(NULL));

			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 2;

				if (itm == 0) {
					pasword[i] = symbol[(rand() % 30)];
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 97;
				}
			}
		}
	}

	if (include_item.length() == 5) {
		if ((include_item[0] == '1' || include_item[0] == '2' || include_item[0] == '3') &&
			(include_item[2] == '1' || include_item[2] == '2' || include_item[2] == '3') &&
			(include_item[4] == '1' || include_item[4] == '2' || include_item[4] == '3')) {

			srand(time(NULL));
			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 3;

				if (itm == 0) {
					pasword[i] = (rand() % 10) + 48;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 65;
				}
				if (itm == 2) {
					pasword[i] = (rand() % 26) + 97;
				}
			}
		}

		if ((include_item[0] == '1' || include_item[0] == '2' || include_item[0] == '4') &&
			(include_item[2] == '1' || include_item[2] == '2' || include_item[2] == '4') &&
			(include_item[4] == '1' || include_item[4] == '2' || include_item[4] == '4')) {

			srand(time(NULL));
			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 3;

				if (itm == 0) {
					pasword[i] = (rand() % 10) + 48;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 65;
				}
				if (itm == 2) {
					pasword[i] = symbol[(rand() % 30)];
				}
			}
		}

		if ((include_item[0] == '1' || include_item[0] == '4' || include_item[0] == '3') &&
			(include_item[2] == '1' || include_item[2] == '4' || include_item[2] == '3') &&
			(include_item[4] == '1' || include_item[4] == '4' || include_item[4] == '3')) {

			srand(time(NULL));
			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 3;

				if (itm == 0) {
					pasword[i] = (rand() % 10) + 48;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 97;
				}
				if (itm == 2) {
					pasword[i] = symbol[(rand() % 30)];
				}
			}
		}

		if ((include_item[0] == '2' || include_item[0] == '3' || include_item[0] == '4') &&
			(include_item[2] == '2' || include_item[2] == '3' || include_item[2] == '4') &&
			(include_item[4] == '2' || include_item[4] == '3' || include_item[4] == '4')) {

			srand(time(NULL));
			int itm;
			for (int i = 0; i < size; ++i) {
				itm = rand() % 3;

				if (itm == 0) {
					pasword[i] = (rand() % 26) + 97;
				}
				if (itm == 1) {
					pasword[i] = (rand() % 26) + 65;
				}
				if (itm == 2) {
					pasword[i] = symbol[(rand() % 30)];
				}
			}
		}
	}

	if (include_item.length() == 7) {
		srand(time(NULL));

		for (int i = 0; i < size; ++i) {
			pasword[i] = (rand() % 92) + 33;
		}
	}

	cout << "\n\n";
	cout << "\033[0;31m";
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n\n";
	cout << "* your new password is : ";
	cout << "\033[0m";

	for (int i = 0; i < size; ++i) {
		cout << pasword[i];
	}

	cout << "\033[0;31m";
	cout << "\n\n* * * * * * * * * * * * * * * * * * * * * * * *\n";

	cout << "\n\n";

	cout << "\033[0m";

	return 0;
}