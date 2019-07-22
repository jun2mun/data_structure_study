#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include "Point.h"

#define LIST_LEN 100

typedef Point * LData;
typedef class __ArrayList {
public:
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
}ArrayList;

typedef ArrayList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* data);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

#endif