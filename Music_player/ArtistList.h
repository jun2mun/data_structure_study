#pragma once
#include"Base.h"
#include"DoublySortedLinkedList.h"
#include <iostream>
#include "ArtistType.h"
using namespace std;


class ArtistList : public Base {
public:
	ArtistList() {}
	void AddArtist(ArtistType item) {
		item.setArtistAgeFromKB();
		item.setArtistGenderFromKB();
		artistArray.Add(item);
	}
	void AddSong(ItemType item) {
		ArtistType adding;
		SimpleItemType newItem;
		newItem.setRecord(item.GetId(), item.GetTitle());
		adding.setArtistName(item.GetArtist());
		int find = artistArray.Get(adding);
		if (find == 0) {
			adding.Add(newItem);
			cout << "\t* ���ο� ��Ƽ��Ʈ�� �����Դϴ�. ������ �Է����ּ���. " << endl;
			AddArtist(adding);
			return;
		}
		else {
			FindAndAddSong(adding, newItem);
		}
	}
	void FindAndAddSong(ArtistType artist, SimpleItemType item) {
		DoublyIterator<ArtistType> itor(artistArray);
		while (true) {
			ArtistType compare = itor.Next();
			if (!itor.NextNotNull()) break;
			if (compare == artist) {
				itor.GetCurrentNode()->data.Add(item);
				break;
			}
		}
	}

	int Get(ArtistType &item) {
		if (artistArray.Get(item) == 1) {
			return 1;
		}
		return 0;
	}

private:
	DoublySortedLinkedList<ArtistType> artistArray;
};



/**
*	@brief	�̱۸�ũ�帮��Ʈ �ȿ��� �ش��ϴ� name���� �������� ã�� �� �������� list�� adding�߰�.
*	@pre	�ش��ϴ� name�� ���� �������� �̹� �����Ѵٰ� ����.
*	@post	�ش� name�� ���� �������� ����Ʈ�� ���ο� �뷡�� �߰��ȴ�.
*	@param	item	ã�� name�� ���� item	adding	�߰��� �뷡
*	@return none
*/
//	void FindAndAdd(ArtistType item, SimpleItemType adding);


