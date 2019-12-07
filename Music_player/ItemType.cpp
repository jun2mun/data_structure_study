#include "ItemType.h"

int ItemType::ReadDataFromFile(ifstream &fin) {

	fin >> mId;
	fin >> mType;
	fin >> mTitle;
	fin >> mComposer;
	fin >> mArtist;
	fin >> mGenre;

	return 1;
}		// ���Ͽ��� ���� ���� �޾ƿ��� �Լ�

int ItemType::WriteDataToFile(ofstream &fout) {
	fout << endl;
	fout << mId << " ";
	fout << mType << " ";
	fout << mTitle << " ";
	fout << mComposer << " ";
	fout << mArtist << " ";
	fout << mGenre;

	return 1;
}

RelationType ItemType::Compare(const ItemType &data) {

	if (this->mId > data.mId)
		return GREATER;
	else if (this->mId < data.mId)
		return LESS;
	else
		return EQUAL;
}