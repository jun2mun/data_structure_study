#pragma once
/* 헤더 파일은 사용할 프로그램의 "선언" 해야하는 요소를
전부 작성해두는 파일입니다.
초기화나 정의 관련된 내용은 "소스파일"에서 , 실행 관련
내용은 "페인 파일" 에서 담당하기 때문에 소스코드를 관리하기 편해집니다.
헤더파일은 먼저 #ifndef 와 #define을 상단에 정의해야
사용할 수 있습니다.
#ifdef __ 파일명 _H__ 작성, #define에도 동일하게 작성합니다.
 */

#ifndef __ARRAY_LIST_H__ // 대문자로
#define __ARRAY_LIST_H__

#define TRUE  1
#define FALSE 0

 /*** ArraList의 정의 ***/
#define LIST_LEN 100
typedef int LData;

typedef struct __ArrayList {
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
}ArrayList;

/*** ArrayList와 관련된 연산들 ***/
typedef ArrayList List;

void ListInit(List* plist);
void Linsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemobe(List* plist);
int Lcount(List* plist);
// 마지막 줄에는 #endif 를 작성하며 #ifndef와 짝을 이루다.
#endif
// ArrayList.h