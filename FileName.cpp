#include<iostream>
using namespace std;
int main()
{
	int score;
	cin >> score;
	if (0 <= score && score <= 100) {
		if (90 <= score) {
			cout << "A" << endl;
		}
		else if (80 <= score && score < 90) {
			cout << "B" << endl;
		}
		else if (70 <= score && score < 80) {
			cout << "C" << endl;
		}
		else if (60 <= score && score < 70) {
			cout << "D" << endl;
		}
		else {
			cout << "E" << endl;
		}
	}
	else {
		cout << "ERROR!" << endl;
	}
	return 0;
}