#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
/**
*	Relation between two items.
*/
enum RelationType { LESS, GREATER, EQUAL };

/**
*	item information class.
*/

class ItemType
{
public:
	/**
	*	default constructor.
	*/
	ItemType() {
		string mId = ""; //�� ID(������ȣ)
		int mType = -1; //�� Ÿ�� ���� ���� 1: ����, 2: ���ְ�, �ʱⰪ : -1
		string mTitle = ""; //�� �̸� ���� ����
		string mComposer = ""; // �� �۰ ���� ����
		string mArtist = ""; // ���� ���� �Ǵ� ������
		int mGenre = 0; //���� �帣
	}

	/**
	*	destructor.
	*/
	~ItemType() {}

	/**
	*	@brief	Get music id.
	*	@pre	music id is set.
	*	@post	none.
	*	@return	music id.
	*/

	string GetId() {
		return mId;
	}
	/**
	*	@brief	Get music type.
	*	@pre	music type is set.
	*	@post	none.
	*	@return	music type.
	*/
	int GetType() {
		return mType;
	}		// ���� Ÿ�� ��ȯ �Լ�

	/**
	*	@brief	Get music title.
	*	@pre	music title is set.
	*	@post	none.
	*	@return	music title.
	*/
	string GetTitle() {
		return mTitle;
	}		//���� title ��ȯ �Լ�

	/**
	*	@brief	Get music composer.
	*	@pre	music composer is set.
	*	@post	none.
	*	@return	music composer.
	*/
	string GetComposer() {
		return mComposer;
	}		//���� �۰ ��ȯ �Լ�
		/**
	*	@brief	Get music artist.
	*	@pre	music artist is set.
	*	@post	none.
	*	@return	music artist.
	*/
	string GetArtist() {
		return mArtist;
	}		//���� ����or������ ��ȯ �Լ�
	/**
	*	@brief	Get music genre.
	*	@pre	music genre is set.
	*	@post	none.
	*	@return	music genre.
	*/
	int GetGenre() {
		return mGenre;
	}		//���� �帣 ��ȯ �Լ�

	/**
	*	@brief	Set music id.
	*	@pre	none.
	*	@post	music id is set.
	*	@param	inId	music id.
	*/
	void SetId(string inId) {
		mId = inId;
	}		// ���� ID ���� �Լ�
	/**
	*	@brief	Set music type.
	*	@pre	none.
	*	@post	music type is set.
	*	@param	inType	music type.
	*/
	void SetType(int inType) {
		cin >> inType;
		mType = inType;

	}		// ���� Ÿ�� ���� �Լ�. 1�Ǵ� 2�� �Է¹޴� ������ ����.

	/**
	*	@brief	Set music title.
	*	@pre	none.
	*	@post	music title is set.
	*	@param	inTitle		music title.
	*/
	void SetTitle(string inTitle) {
		mTitle = inTitle;
	}		//���� �̸� ���� �Լ�
		/**
	*	@brief	Set music composer.
	*	@pre	none.
	*	@post	music composer is set.
	*	@param	inComposer	music composer.
	*/
	void SetComposer(string inComposer) {
		mComposer = inComposer;
	}		//���� �۰ ���� �Լ�
	/**
	*	@brief	Set music artist.
	*	@pre	none.
	*	@post	music artist is set.
	*	@param	inArtist	music artist.
	*/
	void SetArtist(string inArtist) {
		mArtist = inArtist;
	}		//���� ���� or ������ ���� �Լ�
		/**
	*	@brief	Set music genre.
	*	@pre	none.
	*	@post	music type is genre.
	*	@param	inGenre		music genre.
	*/
	void SetGenre(int inGenre) {
		mGenre = inGenre;
	}
	/**
	*	@brief	Set music record.
	*	@pre	none.
	*	@post	music record is set.
	*	@param	inId		music id.
	*	@param	inType		music name.
	*	@param	inTitle		music title.
	*	@param	inComposer	music composer.
	*	@param	inArtist	music artist.
	*	@param	inGenre		music Genre.
	*/
	void SetRecord(string inId, int inType, string inTitle, string inComposer,
		string inArtist, int inGenre) {
		SetId(inId);
		SetType(inType);
		SetTitle(inTitle);
		SetComposer(inComposer);
		SetArtist(inArtist);
		SetGenre(inGenre);
	}		//���� ���� ���� �Լ�

		/**
	*	@brief	Display music id on screen.
	*	@pre	music id is set.
	*	@post	music id is on screen.
	*/
	void DisplayIdOnScreen() {
		cout << "\t ID : " << mId;
	}		// ���� id ��� �Լ�
	/**
	*	@brief	Display music type on screen.
	*	@pre	music type is set.
	*	@post	music type is on screen.
	*/
	void DisplayTypeOnScreen() {
		if (mType == 1) {
			cout << "\t Type : ����";
		}
		else if (mType == 2) {
			cout << "\t Type : ���ְ�";
		}

	}		//���� Ÿ�� ��� �Լ�
	/**
*	@brief	Display music title on screen.
*	@pre	music title is set.
*	@post	music title is on screen.
*/
	void DisplayTitleOnScreen() {
		cout << "\t Title : " << mTitle;
	}		//���� Ÿ��Ʋ ��� �Լ�
		/**
	*	@brief	Display music composer on screen.
	*	@pre	music composer is set.
	*	@post	music composer is on screen.
	*/
	void DisplayComposerOnScreen() {
		cout << "\t Composer : " << mComposer;
	}		//���� �۰ ��� �Լ�
		/**
	*	@brief	Display music artist on screen.
	*	@pre	music artist is set.
	*	@post	music artist is on screen.
	*/
	void DisplayArtistOnScreen() {
		cout << "\t Artist : " << mArtist;
	}		// ���� ���� or ������ ��� �Լ�
	/**
	*	@brief	Display music genre on screen.
	*	@pre	music genre is set.
	*	@post	music genre is on screen.
	*/
	void DisplayGenreOnScreen() {
		cout << "\t Genre : " << mGenre << endl;
	}		// ���� �帣 ��� �Լ�
		/**
	*	@brief	Display music record on screen.
	*	@pre	music record is set.
	*	@post	music record is on screen.
	*/
	void DisplayRecordOnScreen() {
		DisplayIdOnScreen();
		DisplayTypeOnScreen();
		DisplayTitleOnScreen();
		DisplayComposerOnScreen();
		DisplayArtistOnScreen();
		DisplayGenreOnScreen();
	}

	/**
	*	@brief	Set music id from keyboard.
	*	@pre	none.
	*	@post	music id is set.
	*/
	void SetIdFromKB() {
		cout << "\t* ID�� �Է����ּ��� : ";
		cin >> mId;
		cin.ignore(1000, '\n');
	}				// Ű����� ���� ID �Է� �Լ�
	/**
	*	@brief	Set music type from keyboard.
	*	@pre	none.
	*	@post	music type is set.
	*/
	void SetTypeFromKB() {
		cout << "\t* ������ Ÿ���� �Է����ּ���(1 : ����, 2 : ���ְ�. 1 �Ǵ� 2�� �Է��� �ּ���.) : ";

		int inType;
		while (1) {
			cin >> inType;
			if (inType == 1 || inType == 2) {
				mType = inType;
				break;
			}
			else {
				cout << endl << "\t====1 �Ǵ� 2�� �ԷµǾ�� �մϴ�.====" << endl << endl;
				cout << "\t* ������ Ÿ���� �Է����ּ���(1 : ����, 2 : ���ְ�. 1 �Ǵ� 2�� �Է��� �ּ���.) : ";
				cin.ignore(1000, '\n');
			}
		}

	}			// Ű����� ���� Ÿ�� �Է� �Է��� �ٸ� �Է��� �� ������ �ݺ�
		/**
	*	@brief	Set music title from keyboard.
	*	@pre	none.
	*	@post	music title is set.
	*/
	void SetTitleFromKB() {
		cout << "\t* ������ ������ �Է����ּ��� : ";
		cin >> mTitle;
	}			// Ű����� ���� Ÿ��Ʋ �Է� �Լ�
		/**
	*	@brief	Set music composer from keyboard.
	*	@pre	none.
	*	@post	music composer is set.
	*/
	void SetComposerFromKB() {
		cout << "\t* �۰�� �̸��� �Է����ּ��� : ";
		cin >> mComposer;
	}			// Ű����� �۰ �̸� �Է� �Լ�
			/**
	*	@brief	Set music artist from keyboard.
	*	@pre	none.
	*	@post	music artist is set.
	*/
	void SetArtistFromKB() {
		cout << "\t* ��Ƽ��Ʈ �̸��� �Է����ּ��� : ";
		cin >> mArtist;
	}			// Ű����� ��Ƽ��Ʈ �̸� �Է� �Լ�
			/**
	*	@brief	Set music genre from keyboard.
	*	@pre	none.
	*	@post	music genre is set.
	*/
	void SetGenreFromKB() {
		cout << "\t* �帣�� �Է����ּ��� : ";
		cin >> mGenre;
	}			// Ű����� �帣 �Է� �Լ�
			/**
	*	@brief	Set music record from keyboard.
	*	@pre	none.
	*	@post	music record is set.
	*/
	void SetRecordFromKB() {
		SetIdFromKB();
		SetTypeFromKB();
		SetTitleFromKB();
		SetComposerFromKB();
		SetArtistFromKB();
		SetGenreFromKB();
	}			// Ű����� ���� ���� �Է� �Լ�
		/**
	*	@brief	Read a record from file.
	*	@pre	the target file is opened.
	*	@post	student record is set.
	*	@param	fin	file descriptor.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int ReadDataFromFile(ifstream& fin);
	/**
	*	@brief	Write a record into file.
	*	@pre	the target file is opened. And the list should be initialized.
	*	@post	the target file is included the new student record.
	*	@param	fout	file descriptor.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int WriteDataToFile(ofstream& fout);
	/**
	*	Compare two itemtypes.
	*	@brief	Compare two item types by item id.
	*	@pre	two item types should be initialized.
	*	@post	the target file is included the new item record.
	*	@param	data	target item for comparing.
	*	@return	return LESS if this.id < data.id,
	*			return GREATER if this.id > data.id then,
	*			otherwise return EQUAL.
	*/
	RelationType Compare(const ItemType &data);


private:
	// ������ �� ���� ��. int������ �ʱⰪ�� -1�� ����. string������ �ʱⰪ�� ""�� ����.

	string mId; //�� ID(������ȣ)
	int mType; //�� Ÿ�� ���� ���� 1: ����, 2: ���ְ�, �ʱⰪ : -1
	string mTitle; //�� �̸� ���� ����
	string mComposer; // �� �۰ ���� ����
	string mArtist; // ���� ���� �Ǵ� ������
	int mGenre; //���� �帣




};









