#include <iostream>
#include "ArrayList.h"
using namespace std;

void ListInit(List* plist)
{
	(plist->numOfData) = 0;
	(plist->curPosition) = -1;
}

void LInsert(List* plist, LData data)
{
	if (plist->numOfData > LIST_LEN)
	{
		cout << "������ �Ұ����մϴ�." << endl;
		return;
	}

	plist->arr[plist->numOfData] = data;
	(plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numOfData == 0)
		return false;

	(plist->curPosition) = 0;
	*pdata = plist->arr[0];
	return true;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->curPosition >= (plist->numOfData) - 1)
		return false;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return true;
}

LData LRemove(List* plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	for (i = rpos; i < num - 1; i++)
		plist->arr[i] = plist->arr[i + 1];

	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List* plist)
{
	return plist->numOfData;
}