#pragma once
#include "Base.h"
#include "DoublySortedLinkedList.h"
#include "PlayItem.h"
#include "SortedList.h"
#include <iostream>

using namespace std;



class PlayList : public Base
{
public:
	PlayList() {
		listInTime = 0;
	}
	~PlayList() {}

	/**
	*	@brief	playlist�� �߰��ϰ��� �ϴ� ������ parameter�κ��� �޾� �߰��Ѵ�. �迭�� ��á�ٸ� ������ ���� �����ϰ� �߰��Ѵ�.
	*	@pre	none
	*	@post	playlist�� ���ο� ������ �߰��ȴ�.
	*	@param	data	playlist�� �߰��ϰ��� �ϴ� ����.
	*	@return none
	*/
	void AddPlayList(PlayItem data);


	/**
	*	@brief	�Ķ���ͷ� ���� id�� ���� �����͸� ã�� �����Ѵ�.
	*	@pre	�ش� id�� ���� �����Ͱ� �����ؾ��Ѵ�.
	*	@post	�ش� �����Ͱ� �����ȴ�.
	*	@param	data	������ ������
	*	@return ���� ������ 1, ���н� 0.
	*/
	int DeleteItem(PlayItem item);

	DoublyNodeType<PlayItem>* GetFirst() {
		return m_PlayArray.GetFirst();
	}
	void PrintAll();

	void PrintByFreq();

	void SetMaxPlayNum();
private:
	DoublySortedLinkedList<PlayItem> m_PlayArray;
	DoublyNodeType<PlayItem> curPointer;
	int maxPlayNum;
	int listInTime;
};






