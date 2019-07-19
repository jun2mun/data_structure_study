#include<iostream>
#include "ArrayList.h"
using namespace std;

void ArrayList::ListInit()
{
	numOfData = 0;
	curPosition = -1;
}
void ArrayList::LInsert(int num) {
	if (numOfData > LIST_LEN)
	{
		cout << "저장이 불가능합니다." << endl;
		return;
	}
	arr[numOfData] = num;
	numOfData++;
}

int ArrayList::LFirst(int num, int* data) {
	if (numOfData == 0)
		return false;
	curPosition = 0;
	*data = arr[0];
	return true;
}

int ArrayList::LNext(int num, int* data) {
	if (curPosition >= (numOfData - 1))
		return false;
	curPosition++;
	*data = arr[curPosition];
	return true;
}

int ArrayList::LRemove(int num) {
	int rpos = curPosition;
	int num = numOfData;
	int i;
	int rdata = arr[rpos];

	for (i = rpos; i < num - 1; i++)
		arr[i] = arr[i + 1];

	numOfData--;
	curPosition--;
	return rdata;
}

int ArrayList::LCount() {
	return numOfData;
}