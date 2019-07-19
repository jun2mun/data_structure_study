#pragma once
#pragma once
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define LIST_LEN 100

class ArrayList {
public:
	int arr[LIST_LEN];
	int numOfData;
	int curPosition;

	void ListInit();
	void LInsert(int num);

	int LFirst(int num, int* data);
	int LNext(int num, int* data);

	int LRemove(int num);
	int LCount();
};
#endif


