#include <iostream>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"
using namespace std;

int main()
{
	List list;
	Point compPos;
	Point* ppos;

	ListInit(&list);

	/*** 4���� ������ ���� ***/
	ppos = new Point;
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = new Point;
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = new Point;
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = new Point;
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	/*** ����� �������� ��� ***/
	cout << "���� �������� �� : " << LCount(&list) << endl;

	if (LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);

		while (LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	cout << endl;

	/*** xpos�� 2�� ��� ������ ���� ***/
	compPos.xpos = 2;
	compPos.ypos = 0;

	if (LFirst(&list, &ppos))
	{
		if (PointComp(ppos, &compPos) == 1)
		{
			ppos = LRemove(&list);
			delete ppos;
		}

		while (LNext(&list, &ppos))
		{
			if (PointComp(ppos, &compPos) == 1)
			{
				ppos = LRemove(&list);
				delete ppos;
			}
		}
	}

	/*** ���� �� ���� ������ ��ü ��� ***/
	cout << "���� �������� �� : " << LCount(&list) << endl;

	if (LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);

		while (LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	cout << endl;

	return 0;
}