#include<iostream>
#include "ArrayList.h"
using namespace std;

int main(void)
{
	class ArrayList _num;
	int* data, num, find;
	_num.ListInit();

	cout << "input the data(stop keys == under 0) " << endl;
	while (true) {
		cin >> num;
		_num.LInsert(num);
	}

	cout << "present data numbers : %d \n" << _num.LCount() << endl;

	if (_num.LFirst(num, data))
	{
		cout << data << " ";

		while (_num.LNext(num, data))
			cout << data << " ";
	}
	cout << "\n\n";

	cout << "insert the number you want to delete : ";
	cin >> find;
	if (_num.LFirst(num, data)) {
		if (*data == find)
			_num.LRemove(*data);
		while (_num.LNext(num, data))
		{
			if (*data == find)
				_num.LRemove(*data);
		}
	}

	cout << "present data numbers : %d \n" << _num.LCount() << endl;

	if (_num.LFirst(num, data))
	{
		cout << data << " ";

		while (_num.LNext(num, data))
			cout << data << " ";
	}
	cout << "\n\n";
}
