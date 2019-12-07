#include "AlbumType.h"

// 키보드로 통해 학생 ID를 입력받음
void AlbumType::SetIdFromKB()
{
	cout << "\tID : ";
	cin >> m_Id;
}


// 키보드로 통해 학생 이름을 입력받음
void AlbumType::SetNameFromKB()
{
	cout << "\tName : ";
	cin >> m_sName;
}


// 키보드로 통해 학생 주소를 입력받음
void AlbumType::SetAddressFromKB()
{
	cout << "\tAddress : ";
	cin >> m_sAddress;
}


// 키보드로 통해 학생 정보를 입력받음
void AlbumType::SetRecordFromKB()
{
	SetIdFromKB();
	SetNameFromKB();
	SetAddressFromKB();
}


// 파일에서 레코드를 읽는다
int AlbumType::ReadDataFromFile(ifstream& fin)
{
	fin >> m_Id;
	fin >> m_sName;
	fin >> m_sAddress;

	return 1;
};


// 파일에 레코드를 쓴다
int AlbumType::WriteDataToFile(ofstream& fout)
{
	fout << endl;
	fout << m_Id << " ";
	fout << m_sName << " ";
	fout << m_sAddress;

	return 1;
}


