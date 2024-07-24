#include <iostream>
#include <cstdlib>

using namespace std;


int main() {

	int A[2][2], B[2][2], C[2][2];

	cout << "masukan nilai A11: ";
	cin >> A[0][0];
	cout << "masukan nilai a12: ";
	cin >> A[1][0];
	cout << "masukan nilai A21: ";
	cin >> A[1[1];

	cout << "masukan nilai B11: ";
	cin >> B[0][0];
	cout << "masukan nilai b12: ";
	cin >> B[0][1];
	cout << "masukan nilai b21: ";
	cin >> B[1][0];
	cout << "masukan nilai b22: ";
	cin >> B[1][1];

		//bagian arra
		C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]);
		C[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]);
		C[1][0] = (A[0][0] * B[0][0]) + (A[1][1] * B[1][0]);
		C[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);

		cout << "nilai matrix c: " << endl;
		cout << " [ " << C[0][0] << " " << C[0][1] << " ] " << endl;
		cout << " [ " << C[1][0] << " " << C[1][1] << " ] " << endl;


		system("PAUSE");
		return 0;


}
