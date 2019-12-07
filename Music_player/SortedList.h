#pragma once
#include "ItemType.h"
#include<iostream>
#include <fstream>
#include<string>

#define MAXSIZE 100
template<typename T>
class SortedList {
public:
	/**
	*	default constructor.
	*/
	SortedList() {
		m_Length = 0;
		m_CurPointer = -1;
		m_Array = new T[MAXSIZE];
	};

	/**
	*	��ü ������ �� ������ ���ڰ� ������ ���� ���� ũ�� ��ŭ �迭 ���� �Ҵ�.
	*/
	SortedList(int size) {
		m_Length = 0;
		m_CurPointer = -1;
		m_Array = new T[size];
	}
	/**
	*	destructor.
	*/
	~SortedList() {};
	/**
	*	@brief	Make list empty.
	*	@pre	none.
	*	@post	clear list.
	*/
	void MakeEmpty(); // Make list empty(Initialize list)
		/**
	*	@brief	Get a number of records in current list.
	*	@pre	none.
	*	@post	none.
	*	@return	number of records in current list.
	*/
	int GetLength(); // Return the number of records in the list 
		/**
	*	@brief	Check capacity of list is full.
	*	@pre	none.
	*	@post	none.
	*	@return	return true if list capacity reached to the upper bound, otherwise return false.
	*/
	bool IsFull(); // Check the list upper limit bool IsEmpty(); // Check the list is empty 
	/**
	*	@brief	Initialize list iterator.
	*	@pre	list should be initialized.
	*	@post	iterator is reset.
	*/
	void ResetList(); // Initialize the iterator pointer 
		/**
	*	@brief	move list iterator to the next item in list and get that item.
	*	@pre	list and list iterator should not be initialized.
	*	@post	iterator is moved to next item.
	*	@param	data	get current iterator's item. it does not need to be initialized.
	*	@return	index of current iterator's item if is not end of list, oterwise return -1.
	*/
	int GetNextItem(T& data); // Update pointer to point to next record and return this new record. 
	/**
	*	@brief	add a new data into list.
	*	@pre	list should be initialized.
	*	@post	added the new record into the list.
	*	@param	data	new data.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int Add(T data); // Add a new data to list  
	/**
	*	@brief	id�� ��ġ�ϴ� item�� ã�Ƽ� �ش� item�� �����Ѵ�.
	*	@pre	�μ� data�� �ִ� id�� list ���� �����ϴ� ���̾�� �Ѵ�.
	*	@post	list ���� �ش� item�� �Էµ� ������ �����ȴ�.
	*	@param	data	���� �ϰ��� �ϴ� id�� �Էµ� data��.
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int Replace(T data); // Find to same record using primary key and replace it 

	/**
	*	@brief	item�� ã�Ƽ� �ش� item�� ��ȯ�Ѵ�.
	*	@pre	�μ� data�� �ִ� id�� list ���� �����ϴ� ���̾�� �Ѵ�.
	*	@post	list ������ ã�� item�� data�� �Էµȴ�.
	*	@param	data	ã���� �ϴ� id�� �Էµ� data��. �߰��� item�� ���ϵȴ�.
	*	@return	����(�߰�)�� 1, ���н� 0�� �����Ѵ�.
	*/
	int Retrieve(T& target); // Find the item whose primary key matches with the primary key of target 
										// and return the copy of the item in target. 

	/**
	*	@brief	�Է¹��� id�� ��ġ�ϴ� id�� ���� item�� Binary�� ã�� �Էµ� data�� �����Ѵ�.
	*	@pre	id�� ��ġ�ϴ� item�� �����ؾ��Ѵ�.
	*	@post	�Էµ� data�� ��ġ�ϴ� id�� ���� item�� ����ȴ�.
	*	@param	data	������� data��.
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int Retrieve_Binary(T& data);  // Retrieve by using binary search
	/**
	*	@brief	id�� ��ġ�ϴ� item�� ã�Ƽ� �ش� item�� �����Ѵ�.
	*	@pre	�μ� data�� �ִ� id�� list ���� �����ϴ� ���̾�� �Ѵ�.
	*	@post	list ���� �ش� item�� ���ŵȴ�.
	*	@param	data	�����ϰ��� �ϴ� id�� �Էµ� data��.
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int Delete(T data);
private:
	T *m_Array; // array for record 
	int m_Length; // number of record 
	int m_CurPointer; // current pointer
};


template<typename T>
void SortedList<T>::MakeEmpty() {
	m_Length = 0;
} // length�� 0���� �ٲ㼭 list�� ����.

template<typename T>
int SortedList<T>::GetLength() {
	return m_Length;
} // m_Length�� ��ȯ�Ѵ�.

template<typename T>
bool SortedList<T>::IsFull() {
	if (m_Length > MAXSIZE - 1) {
		return true;
	}
	else {
		return false;
	}
}

template<typename T>
void SortedList<T>::ResetList() {
	m_CurPointer = -1;
}

template<typename T>
int SortedList<T>::GetNextItem(T& data) {
	m_CurPointer++;	// list pointer ����
	if (m_CurPointer == m_Length)	// end of list�̸� -1�� ����
		return -1;
	data = m_Array[m_CurPointer];	// ���� list pointer�� ���ڵ带 ����

	return m_CurPointer;
}

template<typename T>
int SortedList<T>::Add(T data) {
	// List�� �� ���ִ� ��� 0�� ����
	if (IsFull()) return 0;
	// List�� ��� ������ 
	if (m_Length == 0) {
		//�� �տ� ����, length ����, 1�� ����
		m_Array[m_Length++] = data;
		return 1;
	}
	// �� �׸��� ���� ��ġ iPos�� �˻�
	bool found = false;
	int iPos = 0;
	while (!found && iPos < m_Length) {
		switch (m_Array[iPos].Compare(data))
		{
		case EQUAL:
			cout << endl << "\t* ������ id�� ���� ������ �̹� �����մϴ�. \n";
			return 0;
		case GREATER:
			found = true;
			break;
		case LESS:
			iPos++;
			break;
		}
	}
	//iPos==length�̸�
	if (iPos == m_Length) {
		// �ε��� length�� �߰�, length++, 1����
		m_Array[iPos] = data;
		m_Length++;
		return 1;
	}
	// iPos<length�̸� iPos���� length-1 ������ ��� �׸��� �ڷ� �� ĭ�� �̵�
	for (int i = m_Length; i > iPos; i--)
		m_Array[i] = m_Array[i - 1];
	// iPos�� �߰�,
	m_Array[iPos] = data;
	// Length++, 1����
	m_Length++;
	return 1;
}

template<typename T>
int SortedList<T>::Replace(T data) {
	ResetList();
	for (m_CurPointer; m_CurPointer < m_Length - 1; m_CurPointer++) {
		if (m_Array[m_CurPointer].Compare(data) == EQUAL) {
			m_Array[m_CurPointer] = data;
			cout << "\t* Replace Success!" << endl;
			return 1;
		}
	}
	cout << "\t* �ش��ϴ� ID�� ���� �����Ͱ� �������� �ʽ��ϴ�." << endl;
	return 0;
}

template<typename T>
int SortedList<T>::Retrieve(T& target) {
	// curPos�� ù��° �׸��� ����Ű���� ����
	ResetList();
	// List�� ���ʴ�� �湮�ϸ鼭 data�� Key�� ��ġ�ϴ� �׸��� ã�´�.
	for (; m_CurPointer < m_Length && m_Array[m_CurPointer].Compare(target) == LESS; m_CurPointer++);
	// curPos�� �׸��� key�� data�� Key�� ��ġ �ϴ� ���
	if (m_Array[m_CurPointer].Compare(target) == EQUAL)
	{
		target = m_Array[m_CurPointer];
		return 1;
	}
	else // key�� data�� Key���� ũ�ų� curPos�� �� ���� �����ϴ� ���
		return 0;
}

template<typename T>
int SortedList<T>::Retrieve_Binary(T& data) {
	int low = 0;
	int high = m_Length;
	int mid;
	while (low <= high) {
		mid = (high + low) / 2;
		if (m_Array[mid].Compare(data) == EQUAL) {
			data = m_Array[mid];
			return 1;
		}
		else if (m_Array[mid].Compare(data) == LESS) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return 0;
}

template<typename T>
int SortedList<T>::Delete(T data)
{
	if (Retrieve(data))	//Primary key�� ��ġ�ϴ� item�� �߰��Ѵٸ�(1)
	{
		for (int i = m_CurPointer; i < m_Length; i++)	//���� �����ͺ��� �Էµ� �迭 ������ �ݺ�
		{
			m_Array[i] = m_Array[i + 1];
		}	//�迭 �ڿ��� ������ �ϳ��� ����
		m_Length--;	//������ ������ �ϳ� ����
		cout << "\t* ���� ����!" << endl;
		return 1;	//����(1)�� ����
	}
	cout << "\t* �ش��ϴ� id�� ���� �����Ͱ� �������� �ʽ��ϴ�." << endl;
	return 0;	//Primary key��ġ�ϴ� item�� ã�� ���Ѵٸ� ����(0)�� ����
}
