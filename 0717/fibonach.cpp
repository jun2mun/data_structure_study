#include<iostream>
using namespace std;
int Fibo(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}
int main() {
	int k; cin >> k;
	cout << Fibo(k);
}