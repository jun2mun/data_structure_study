#include "AlbumType.h"

// Ű����� ���� �л� ID�� �Է¹���
void AlbumType::SetIdFromKB()
{
	cout << "\tID : ";
	cin >> m_Id;
}


// Ű����� ���� �л� �̸��� �Է¹���
void AlbumType::SetNameFromKB()
{
	cout << "\tName : ";
	cin >> m_sName;
}


// Ű����� ���� �л� �ּҸ� �Է¹���
void AlbumType::SetAddressFromKB()
{
	cout << "\tAddress : ";
	cin >> m_sAddress;
}


// Ű����� ���� �л� ������ �Է¹���
void AlbumType::SetRecordFromKB()
{
	SetIdFromKB();
	SetNameFromKB();
	SetAddressFromKB();
}


// ���Ͽ��� ���ڵ带 �д´�
int AlbumType::ReadDataFromFile(ifstream& fin)
{
	fin >> m_Id;
	fin >> m_sName;
	fin >> m_sAddress;

	return 1;
};


// ���Ͽ� ���ڵ带 ����
int AlbumType::WriteDataToFile(ofstream& fout)
{
	fout << endl;
	fout << m_Id << " ";
	fout << m_sName << " ";
	fout << m_sAddress;

	return 1;
}


