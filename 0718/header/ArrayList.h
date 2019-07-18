#pragma once
/* ��� ������ ����� ���α׷��� "����" �ؾ��ϴ� ��Ҹ�
���� �ۼ��صδ� �����Դϴ�.
�ʱ�ȭ�� ���� ���õ� ������ "�ҽ�����"���� , ���� ����
������ "���� ����" ���� ����ϱ� ������ �ҽ��ڵ带 �����ϱ� �������ϴ�.
��������� ���� #ifndef �� #define�� ��ܿ� �����ؾ�
����� �� �ֽ��ϴ�.
#ifdef __ ���ϸ� _H__ �ۼ�, #define���� �����ϰ� �ۼ��մϴ�.
 */

#ifndef __ARRAY_LIST_H__ // �빮�ڷ�
#define __ARRAY_LIST_H__

#define TRUE  1
#define FALSE 0

 /*** ArraList�� ���� ***/
#define LIST_LEN 100
typedef int LData;

typedef struct __ArrayList {
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
}ArrayList;

/*** ArrayList�� ���õ� ����� ***/
typedef ArrayList List;

void ListInit(List* plist);
void Linsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemobe(List* plist);
int Lcount(List* plist);
// ������ �ٿ��� #endif �� �ۼ��ϸ� #ifndef�� ¦�� �̷��.
#endif
// ArrayList.h