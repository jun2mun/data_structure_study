#pragma once
#pragma once
#include <iostream>

using namespace std;

#define maxsize 8

/**
*	@brief	Exception class thrown by Push when stack is full.
*/
class FullStack
{
public:
	/**
	*	@brief	Display a message for full stack on screen.
	*/
	void print()
	{
		cout << "FullStack exception thrown." << endl;
	}
};

/**
*	@brief	Exception class thrown by Pop and Top when stack is empty.
*/
class EmptyStack
{
public:
	/**
	*	@brief	Display a message for full stack on screen.
	*/
	void print()
	{
		cout << "EmtpyStack exception thrown." << endl;
	}
};

template <typename T>	//generic data�� ���� template ����
class CircularQueueType
{
public:
	/**
	*	@brief	size�� �ش��ϴ� ũ���� �迭�� �����Ҵ�
	*	@post	size�� ���� �ش�Ǵ� ũ���� �迭�� �������,�� ����������� �ʱ�ȭ��
	*/
	CircularQueueType(int size);
	/**
	*	@brief	�ִ�ũ��� ����
	*	@pre	�ִ�ũ�Ⱑ ����������
	*	@post	�ִ�ũ���� �迭�� ���������, �� ����������� �ʱ�ȭ��
	*/
	CircularQueueType();


	~CircularQueueType();



	/**
	*	@brief	queue�� �������ִ��� Ȯ��.
	*	@pre	queue�� �ʱ�ȭ �Ǿ����.
	*	@post	�������� ture �ƴϸ� false
	*/
	bool IsFull() const;

	/**
	*	@brief	queue�� ����ִ��� Ȯ��
	*	@pre	queue�� �ʱ�ȭ �Ǿ����.
	*	@post	��������� ture �ƴϸ� false
	*/
	bool IsEmpty() const;

	/**
	*	@brief	queue�� ȸ���ϸ鼭 ���� ä��.
	*	@pre	queue�� �ʱ�ȭ �Ǿ����
	*	@post	������������ FullStack Exception�� throw��, �ƴϸ� ���ο� ���� �߰���,rear�� ����
	*/
	void EnQueue(T item);

	/**
	*	@brief	queue�� ȸ���ϸ鼭 ���� ����(=front���� �ϳ� ����)
	*	@pre	Stack has been initialized.
	*	@post	��������� empty Exception�� throw;�ƴϸ� ������ ���� ����
	*/
	void DeQueue(T& item);

	/**
	*	@brief	Returns a copy of top item on the stack.
	*	@pre	Stack has been initialized.
	*	@post	If (stack is empty), EmptyStack exception is thrown; otherwise, top element has been removed from stack.
	*/
	T Top();

	/**
	*	@brief	Print all the items in the stack on screen
	*	@pre	Stack has been initialized.
	*	@post	None.
	*/
	void Print();

	void MakeEmpty();


	/**
	*	@brief	front���� rare���� ��ġ��Ų��.
	*	@pre	none
	*	@post	�÷��̸���Ʈ���� �Է¹��� id�� ���� ���ڵ尡 playlist���� �����ȴ�.
	*/
	void  ResetList();

	/**
	*	@brief	curpointer�� ����Ű�� �������� ���� �������� �Ķ���Ϳ� �����Ѵ�.
	*	@pre	���� �������� �����ؾ��Ѵ�.
	*	@post	�Ķ���� �����Ϳ� ���� �������� ����ȴ�.
	*	@param	data	������� ������.
	*	@return ���� ������ true, ���н� false.
	*/
	bool GetNextItem(T &data);
	/**
	*	@brief	�Ķ���ͷ� ���� id�� ���� �����͸� ã�� �Ķ���Ϳ� �����Ѵ�.
	*	@pre	�ش� id�� ���� �����Ͱ� �����ؾ��Ѵ�.
	*	@post	�Ķ���Ϳ� �ش� �����Ͱ� ����ȴ�.
	*	@param	data	������� ������
	*	@return ã�Ƽ� �����ϸ� 1, �����ϸ� 0
	*/
	int Search(T &data);
	/**
	*	@brief	�Ķ���ͷ� ���� id�� ���� �����͸� ã�� �����Ѵ�.
	*	@pre	�ش� id�� ���� �����Ͱ� �����ؾ��Ѵ�.
	*	@post	�ش� �����Ͱ� �����ȴ�.
	*	@param	data	������ ������
	*	@return ���� ������ 1, ���н� 0.
	*/
	int Delete(T data);
	/**
	*	@brief	�Ķ���ͷ� ���� id�� ���� �����͸� ã�� �Ķ���� �����ͷ� �����Ѵ�.
	*	@pre	�ش� id�� ���� �����Ͱ� �����ؾ��Ѵ�.
	*	@post	�ش� �����Ͱ� �Ķ���� �����ͷ� ��ȯ�ȴ�.
	*	@param	data	��ȯ�� ������
	*	@return ��ȯ ������ 1, ���н� 0.
	*/
	int Replace(T data);




private:
	int curPointer; //����Ʈ�� ��ҿ� �����ϴ� curpointer����.
	int m_iFront;
	int m_iRear;
	int m_nMaxQueue;
	int top;	///< Number of elements.
	T *items;	///< Pointer for a stack.

};


template <typename T>
CircularQueueType<T>::CircularQueueType(int size)
{
	items = new T[size];	//T�� �ڷ������� �����Ҵ�
	m_iFront = size - 1;
	m_iRear = size - 1;
	m_nMaxQueue = size;
	top = -1;

}
template <typename T>
CircularQueueType<T>::CircularQueueType()
{
	items = new T[maxsize];
	m_iFront = maxsize - 1;
	m_iRear = maxsize - 1;
	m_nMaxQueue = maxsize;
	top = -1;
}


// Destruct the object. Free the array dynamically allocated.
template <typename T>
CircularQueueType<T>::~CircularQueueType()
{
	delete[] items;
}


// Determines whether the CircularQueueType is full.
template <typename T>
bool CircularQueueType<T>::IsEmpty() const
{
	if (m_iRear == m_iFront)
		return true;
	else
		return false;
}


// Determines whether the CircularQueueType is empty.
template <typename T>
bool CircularQueueType<T>::IsFull() const
{

	if ((m_iRear + 1) % m_nMaxQueue == m_iFront)	//rear�� ����ĭ�� front���� �ƴ��� �˻�
		return true;
	else
		return false;

}


// Adds newItem to the top of the CircularQueueType.
template <typename T>
void CircularQueueType<T>::EnQueue(T newItem)
{
	if (IsFull())
		throw FullStack();
	else
	{
		m_iRear = (m_iRear + 1) % m_nMaxQueue;
		items[m_iRear%m_nMaxQueue] = newItem;
		top++;
	}
}


// Removes top item from the CircularQueueType.
template <typename T>
void CircularQueueType<T>::DeQueue(T& item)
{
	top--;
	if (IsEmpty())			//����ִ��� �˻�
		throw EmptyStack();
	else
	{
		m_iFront = (m_iFront + 1) % m_nMaxQueue; //front�� ������ ��ĭ �̵�
		item = items[m_iFront];	//��������, ���ٵ��� ���� ���� �˱����ؼ� item�� �ش� ���� ����

	}
}


// Removes top item from the CircularQueueType.
template <typename T>
T CircularQueueType<T>::Top()
{
	if (IsEmpty())
		throw EmptyStack();
	else
		return items[top];
}


// Print all the items in the CircularQueueType on screen
template <typename T>
void CircularQueueType<T>::Print()
{
	if (IsEmpty())				//������� it is empty���. Empty Stack�� throw�ϸ� ���α׷��� ����Ǿ �ٽ� Enqueue�Ҽ������Ƿ�
		cout << "\t* It is empty!" << endl;				//�ε����ϰ� ���ο� ����ó��
	else
	{
		cout << "\t* CircularQueueType: ";
		// CircularQueueType ���Ǹ��element ���.
		int first = m_iFront;
		int last = m_iRear;
		while (first != last)				//Rear���� front�� ���� �������ȸ�. front�� �����ؼ� ���� �ϳ��� ���.Enqueue�ϸ� rear�� front�� ���� �ռ������Ƿ�
		{
			cout << items[(first + 1) % m_nMaxQueue] << " - ";
			first = (first + 1) % m_nMaxQueue;
		}
		cout << endl;
	}
}
template <typename T>
void CircularQueueType<T>::MakeEmpty()
{
	m_iFront = m_iRear; //Front�� rear�� ���� ������ isEmpty���� �ֺ������ �����
}


//	void  ResetList();
//tuple<T, bool> GetNextItem();
//T Search(T data);
//int Delete(T data);
//int Repalce(T data);

//queue ��� �߰�

template<typename T>
void CircularQueueType<T>::ResetList() {
	curPointer = m_iFront;
}

template<typename T>
bool CircularQueueType<T>::GetNextItem(T &data) {
	if (IsEmpty() == false) {
		curPointer = (curPointer + 1) % m_nMaxQueue;
		data = items[curPointer];
		if (curPointer == (m_iRear + 1) % m_nMaxQueue) {
			return false;
		}
		return true;
	}
	return false;
}

template<typename T>
int CircularQueueType<T>::Search(T &data) {
	for (int i = m_iFront + 1; i != m_iRear; i++) {
		if (i == m_nMaxQueue) {
			i = 0;
		}
		if (data == items[i]) {
			data = items[i];
			return 1;
		}
	}
	return 0;
}
/*
template<typename T>
int CircularQueueType<T>::Delete(T data) {
	for (int i = (m_iFront + 1)%m_nMaxQueue; i != m_iRear; i++) {
		if (i == m_nMaxQueue) {
			i = 0;
		}
		if (data == items[i]) {
			//m_iFront = (m_iFront + 1) % m_nMaxQueue;
			int iter = i - 1;
			if (iter == -1) {
				iter = m_nMaxQueue - 1;
			}
			while (iter != m_iFront) {
				items[iter + 1] = items[iter];
				iter--;
				if (iter == -1) {
					iter = m_nMaxQueue - 1;
				}
			}
			return 1;
		}
	}
	return 0;
}
*/
template<typename T>
int CircularQueueType<T>::Delete(T item)//item�� ID�� ��ġ�ϴ� ���ڵ带 Queue�������� 
{
	int i = m_iFront;
	while (1)
	{
		i = (i + 1) % m_nMaxQueue;

		if (item == items[i])
		{
			while (i != m_iRear)
			{
				items[i] = items[(i + 1) % m_nMaxQueue];
				i = (i + 1) % m_nMaxQueue;
			}

			m_iRear = (m_iRear + m_nMaxQueue - 1) % m_nMaxQueue;

			return 1;
		}

		if (i == m_iRear)
			return 0;
	}
}

template<typename T>
int CircularQueueType<T>::Replace(T data) {
	for (int i = m_iFront + 1; i != m_iRear; i++) {
		if (i == m_nMaxQueue) {
			i = 0;
		}
		if (data == items[i]) {
			items[i] == data;
			return 1;
		}
	}
	return 0;
}