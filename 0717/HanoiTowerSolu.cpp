#include<iostream>
using namespace std;
void HanoiTowerMove(int num, char from, char by, char to) {
	if (num == 1)
	{
		cout << "����1�� " << from << "���� " << to << "�� �̵�" << endl;
	}
	else
	{
		HanoiTowerMove(num - 1, from, to, by);
		cout << "����1�� " << from << "���� " << to << "�� �̵�" << endl;
		HanoiTowerMove(num - 1, from, to, by);
	}
}
int main() {
	HanoiTowerMove(3, 'a','b' , 'c');
	return 0;
}