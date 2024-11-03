#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout << "最大的数是" << max << endl;
	return 0;
}