//oct 5
//project ng trio///

//#include <iostream>
//using namespace std;
//
//
//
//int main() {
//	cout << "Hello, and Welcome to Permutation and Combination Calculator!" << endl;
//	cout << "Group members: Yolan Ramos, Christian Lloyd Llanes, and Jalandoni Revo " << endl;
//
//
//	char again;
//	do {
//		//declare variables 
//		cout << " Enter 1 for Permutation " << endl;
//		cout << " Enter 2 for Combination " << endl;
//		int choice;
//		cin >> choice;
//
//
//		switch (choice) {
//	
//		case 1: {
//			int n, r;
//			cout << "Welcome to Permutation Calculator!" << endl;
//			cout << "Enter the value of n: ";
//			cin >> n;
//			cout << "Enter the value of r: ";
//			cin >> r;
//			//Formula for permutation 
//			int perm = 1;
//			for (int i = 0; i < r; i++) {
//				perm *= (n - i);
//			}
//			cout << "The permutation of " << n << " and " << r << " is: " << perm << endl;
//			break;
//		}
//
//		case 2: {
//			int n, r;
//			cout << "Welcome to Combination Calculator!" << endl;
//			cout << "Enter the value of n: ";
//			cin >> n;
//			cout << "Enter the value of r: ";
//			cin >> r;
//			//Formula for combination 
//			int comb = 1;
//			for (int i = 0; i < r; i++) {
//				comb *= (n - i);
//				comb /= (i + 1);
//			}
//			cout << "The combination of " << n << " and " << r << " is: " << comb << endl;
//			break;
//		}
//		
//	default:
//	cout << "Invalid input. Please enter 1 or 2 only." << endl;
//	break;
//	
//		}
//
//		cout << "Type C / c to use again or any key to close: ";
//		cin >> again;
//	
//	if (again == 'C' || again == 'c') {
//	    system("CLS");
//	}
//	} while  (again == 'C' || again == 'c'); 
//	  
//
//	if (again != 'C' && again != 'c') {
//		cout << "Thank you for using our calculator!" << endl;
//	}
//

//}


// october 9 
//implemented cls and default break
//oct 14 
//factorial added// 
//added limits//
//project ng trio///

#include <iostream>
using namespace std;



int main() {
	char again;
	cout << "Hello, and Welcome to Permutation and Combination Calculator!" << endl;
	cout << "Group members: Yolan Ramos, Christian Lloyd Llanes, and Jalandoni Revo " << endl;



	do {
		//declare variables 
		cout << " Enter 1 for Factorial " << endl;
		cout << " Enter 2 for Permutation " << endl;
		cout << " Enter 3 for Combination " << endl;
		int choice;
		cin >> choice;


		switch (choice) {

		case 1: {
			int n;
			unsigned long long comp;

			cout << "Welcome to Factorial!" << endl;
			cout << "Enter the value of n: ";
			cin >> n;

			comp = 1;
			for (int i = 1; i <= n; i++) {
				comp = comp * i;
			}

			//limits//
			if (n < 0) {
				cout << "Error: Factorial is not defined for negative numbers." << endl;
				break;
			}
			if (n > 69) {
				cout << "Error: Value too large! Factorial of " << n << " is beyond limit ." << endl;
				break;
			}

			cout << "The Factorial of " << n << " is: " << comp << endl;
			break;
		}

		case 2: {
			int n, r;
			cout << "Welcome to Permutation!" << endl;
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "Enter the value of r: ";
			cin >> r;
			//Formula for permutation 
			int perm = 1;
			for (int i = 0; i < r; i++) {
				perm *= (n - i);
			}
			//limits//
			if (n < 0 || r < 0) {
				cout << "Error: Negative numbers are not allowed." << endl;
				break;
			}
			if (r > n) {
				cout << "Error: r cannot be greater than n in permutation." << endl;
				break;
			}
			if (n > 100) { 
				cout << "Error: Value too large! Please try smaller numbers ." << endl;
				break;
			}

			cout << "The permutation of " << n << " and " << r << " is: " << perm << endl;
			break;
		}

		case 3: {
			int n, r;
			cout << "Welcome to Combination!" << endl;
			cout << "Enter the value of n: ";
			cin >> n;
			cout << "Enter the value of r: ";
			cin >> r;
			//Formula for combination 
			int comb = 1;
			for (int i = 0; i < r; i++) {
				comb *= (n - i);
				comb /= (i + 1);
			}

			//limits//
			if (n < 0 || r < 0) {
				cout << "Error: Negative numbers are not allowed." << endl;
				break;
			}
			if (r > n) {
				cout << "Error: r cannot be greater than n in combination." << endl;
				break;
			}
			if (n > 100) {
				cout << "Error: Value too large! Please try smaller numbers (n <= 100)." << endl;
				break;
			}

			cout << "The combination of " << n << " and " << r << " is: " << comb << endl;
			break;
		}

		default:
			cout << "Invalid input. Please enter 1, 2, and 3 only." << endl;
			break;

		}

		cout << "Type C / c to use again or any key to close: ";
		cin >> again;

		if (again == 'C' || again == 'c') {
			system("CLS");
		}
	} while (again == 'C' || again == 'c');


	if (again != 'C' && again != 'c') {
		cout << "Thank you for using our calculator!" << endl;
	}


}