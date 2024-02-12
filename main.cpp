#include <iostream>
using namespace std;
int umn(int a, int b) {
	return a * b;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << umn(a, b) << " " << raz(a, b) << " " << sum(a, b);
}
