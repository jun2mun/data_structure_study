//typedef char AlbumType;

#ifndef _AlbumType_H
#define _AlbumType_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


/**
*	������ ���� Ŭ����
*/
class AlbumType
{
public:
	/**
	*	�⺻ ������
	*/
	AlbumType()
	{
		m_Id = -1;
		m_sName = "";
		m_sAddress = "";
	}

	/**
	*	�Ҹ���.
	*/
	~AlbumType() {}

	/**
	*	@brief	�л� ID�� ��´�
	*	@pre	�л� ID�� �Է¹޴´�
	*	@post	none
	*	@return	�л� ID�� ����
	*/
	int GetId()const
	{
		return m_Id;
	}

	/**
	*	@brief	�л� �̸��� ��´�
	*	@pre	�л� �̸��� �Է¹޴´�
	*	@post	none
	*	@return	�л� �̸��� ����
	*/
	string GetName()const
	{
		return m_sName;
	}

	/**
	*	@brief	�л� �ּҸ� ��´�
	*	@pre	�л� �ּҸ� �Է¹޴´�
	*	@post	none
	*	@return	�л� �ּҸ� ����
	*/
	string GetAddress()const
	{
		return m_sAddress;
	}

	/**
	*	@brief	�л� ID�� �Է¹޴´�
	*	@pre	none
	*	@post	�л� ID�� �Էµ�
	*	@param	inId	student id.
	*/
	void SetId(int inId)
	{
		m_Id = inId;
	}

	/**
	*	@brief	�л� �̸��� �Է¹޴´�
	*	@pre	none
	*	@post	�л� �̸��� �Էµ�
	*	@param	inName	student name.
	*/
	void SetName(string inName)
	{
		m_sName = inName;
	}

	/**
	*	@brief	�л� �ּҸ� �Է¹޴´�
	*	@pre	none
	*	@post	�л� �ּҰ� �Էµ�
	*	@param	inAddress	student address
	*/
	void SetAddress(string inAddress)
	{
		m_sAddress = inAddress;
	}

	/**
	*	@brief	�л� ����(���ڵ�)�� �Է�
	*	@pre	none
	*	@post	�л� ������ �Էµ�
	*	@param	inId	student id
	*	@param	inName	student name
	*	@param	inAddress	student address
	*/
	void SetRecord(int inId, string inName, string inAddress)
	{
		SetId(inId);
		SetName(inName);
		SetAddress(inAddress);
	}

	/**
	*	@brief	�л� ID�� ��ũ���� ���
	*	@pre	�л� ID�� �Էµ�
	*	@post	�л� ID�� ��ũ���� ��µ�
	*/
	void DisplayIdOnScreen()
	{
		cout << "\tID   : " << m_Id << endl;
	};

	/**
	*	@brief	�л� �̸��� ��ũ���� ���
	*	@pre	�л� �̸��� �Էµ�
	*	@post	�л� �̸��� ��ũ���� ��µ�
	*/
	void DisplayNameOnScreen()
	{
		cout << "\tName : " << m_sName << endl;
	};

	/**
	*	@brief	�л� �ּҸ� ��ũ���� ���
	*	@pre	�л� �ּҰ� �Էµ�
	*	@post	�л� �ּҰ� ��ũ���� ��µ�
	*/
	void DisplayAddressOnScreen()
	{
		cout << "\tAddress : " << m_sAddress << endl;
	};

	/**
	*	@brief	�л� ����(���ڵ�)�� ��ũ���� ���
	*	@pre	�л� ������ �Էµ�
	*	@post	�л� ������ ��ũ���� ��µ�
	*/
	void DisplayRecordOnScreen()
	{
		DisplayIdOnScreen();
		DisplayNameOnScreen();
		DisplayAddressOnScreen();
	};

	/**
	*	@brief	Ű����κ��� �л� ID�� �Է¹���
	*	@pre	none
	*	@post	�л� ID�� �Էµ�
	*/
	void SetIdFromKB();

	/**
	*	@brief	Ű����κ��� �л� �̸��� �Է¹���
	*	@pre	none
	*	@post	�л� �̸��� �Էµ�
	*/
	void SetNameFromKB();

	/**
	*	@brief	Ű����κ��� �л� �ּҸ� �Է¹���
	*	@pre	none
	*	@post	�л� �ּҰ� �Էµ�
	*/
	void SetAddressFromKB();

	/**
	*	@brief	Ű����κ��� �л� ������ �Է¹���
	*	@pre	none
	*	@post	�л� ������ �Էµ�
	*/
	void SetRecordFromKB();

	/**
	*	@brief	���Ͽ��� ���ڵ带 �д´�
	*	@pre	Ÿ�� ������ ���µǾ�����
	*	@post	�л� ������ �Էµ�
	*	@param	fin	file descriptor.
	*	@return	�Լ��� �� ���ư��� 1�� ���� �ƴϸ� 0�� ����
	*/
	int ReadDataFromFile(ifstream& fin);

	/**
	*	@brief	���Ͽ� ������ ����
	*	@pre	Ÿ�� ������ ���µǾ�����, ����Ʈ�� �ʱ�ȭ��
	*	@post	Ÿ�� ������ �� �л� ������ ������
	*	@param	fout	file descriptor.
	*	@return	�Լ��� �� ���ư��� 1�� ���� �ƴϸ� 0�� ����
	*/
	int WriteDataToFile(ofstream& fout);

	/**
	*	�� ������Ÿ���� ���Ѵ�
	*	@brief	Item ID�� �� ������Ÿ���� ���Ѵ�
	*	@pre	�� ������Ÿ���� �ʱ�ȭ�Ǿ���Ѵ�
	*	@post	Ÿ�� ������ �� �л� ������ ������
	*	@param	data	target item for comparing.
	*	@return	����ID�� DATA�� ID���� ���� ��� LESS�� ����,
	*			����ID�� DATA�� ID���� Ŭ ��� GREATER�� ����,
	*			�ƴϸ� EQUAL�� ����
	*/
	bool operator==(const AlbumType& data)const {
		return this->m_Id == data.m_Id;
	}
	bool operator>(const AlbumType& data)const {
		return this->m_Id > data.m_Id;
	}
	bool operator<(const AlbumType& data)const {
		return this->m_Id < data.m_Id;
	}
	// operator overloading
	friend ostream& operator << (ostream& out, AlbumType& item)
	{
		out << "ID : " << item.GetId() << endl;
		out << "Name : " << item.GetName() << endl;
		out << "Address : " << item.GetAddress() << endl;

		return out;
	}

protected:
	int m_Id;			///< �л� ID
	string m_sName;		///< �л� �̸�
	string m_sAddress;	///< �л� �ּ�
};

#endif	// _AlbumType_H
