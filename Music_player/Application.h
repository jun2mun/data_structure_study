#pragma once
#include "Base.h"
#include"SortedList.h"
#include"PlayList.h"
#include"ArtistList.h"
#include"BinarySearchTree.h"
#include<iostream>
#include <fstream>
#include<string>


#define FILENAMESIZE 1024

using namespace std;


/**
*	application class for item management simply.
*/
class Application : public Base
{
public:
	/**
	*	default constructor.
	*/
	Application()
	{
		m_Command = 0;
	}
	/**
	*	destructor.
	*/
	~Application() {}
	int HomeCommand();
	void HomeRun();
	void Login();
	void SignUp();

	void GeneralUserRun();
	int GeneralUserCommand();

	/**
	*	@brief	Program driver.
	*	@pre	program is started.
	*	@post	program is finished.
	*/
	void Run();
	/**
	*	@brief	Display command on screen and get a input from keyboard.
	*	@pre	none.
	*	@post	none.
	*	@return	user's command.
	*/
	int GetCommand();

	/**
	*	@brief	Add new record into list.
	*	@pre	list should be initialized.
	*	@post	new record is added into the list.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int AddMusic() {
		if (m_List.IsFull()) {
			cout << "\t* ����Ʈ�� ���� á���ϴ�. �� �̻� �߰��� �� �����ϴ�." << endl;
			return 0;
		}

		cout << "\t===== �������� �߰��մϴ�. =====" << endl;
		ItemType item;

		item.SetRecordFromKB();
		cout << "\t================================" << endl;
		int find = m_List.Add(item);

		if (find != 0) {
			AddSong(item);
			//			m_OutFile.open("admin.txt", ios::app);
			//			m_OutFile << endl <<item.GetId() << " " << item.GetType() << " " << item.GetTitle() << " "
			//				<< item.GetComposer() << " " << item.GetArtist() << " " << item.GetGenre();

		}
		DisplayAllMusic();


		return 1;
	}
	/**
	*	@brief	Display all records in the list on screen.
	*	@pre	none.
	*	@post	none.
	*/
	void DisplayAllMusic() {
		ItemType data;

		cout << "\n\t<<======= Current list =======>>" << endl;

		// list�� ��� �����͸� ȭ�鿡 ���
		m_List.ResetList(); //list�� m_curpointer�� 0���� �ʱ�ȭ.
		int length = m_List.GetLength(); // length��� ������ list�� ���̸� ����.
		int curIndex = m_List.GetNextItem(data); // curIndex��� display�� curlpointer index�� ����. 
		while (curIndex < length && curIndex != -1)
		{
			data.DisplayRecordOnScreen();
			curIndex = m_List.GetNextItem(data);
		}
		cout << "\t<<============================>>" << endl;
	}
	/**
	*	@brief	Open a file by file descriptor as an input file.
	*	@pre	a file for reading is exist.
	*	@post	open the file for reading.
	*	@param	fileName	a filename to open for reading.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int OpenInFile(char *fileName) {
		m_InFile.open(fileName);	// file open for reading.

									// ���� ���¿� �����ϸ� 1, �׷��� �ʴٸ� 0�� ����.
		if (!m_InFile)	return 0;
		else	return 1;
	}
	/**
	*	@brief	Open a file by file descriptor as an output file.
	*	@pre	list should be initialized.
	*	@post	open the file for writing.
	*	@param	fileName	a filename to open for writing.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int OpenOutFile(char *fileName) {
		m_OutFile.open(fileName);	// file open for writing.

									// ���� ���¿� �����ϸ� 1, �׷��� �ʴٸ� 0�� ����.
		if (!m_OutFile)	return 0;
		else	return 1;
	}
	/**
	*	@brief	Open a file as a read mode, read all data on the file, and set list by the data.
	*	@pre	The file is not opened.
	*	@post	list holds all records from the file.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int ReadDataFromFilePL(string filename) {
		int index = 0;
		ItemType data;	// �б�� �ӽ� ����

		// ������ ��� ������ �о� list�� �߰�
		while (!m_InFile.eof())
		{
			// array�� �л����� ������ ����ִ� structure ����
			data.ReadDataFromFile(m_InFile);
			PlayItem insertData;
			insertData.setId(data.GetId());
			m_PlayList.AddPlayList(insertData);
		}

		m_InFile.close();	// file close



		return 1;
	}
	int ReadDataFromFileMaster(string filename) {
		int index = 0;
		ItemType data;	// �б�� �ӽ� ����

						// ������ ��� ������ �о� list�� �߰�
		while (!m_InFile.eof())
		{
			// array�� �л����� ������ ����ִ� structure ����
			data.ReadDataFromFile(m_InFile);
			m_List.Add(data);
		}

		m_InFile.close();	// file close



		return 1;
	}

	/**
	*	@brief	Open a file as a write mode, and write all data into the file,
	*	@pre	The file is not opened.
	*	@post	the list is stored in the output file.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int WriteDataToFile() {
		ItemType data;	// ����� �ӽ� ����
		string filename = A_id;
		m_OutFile.open(filename.c_str());
		m_OutFile << A_pw;

		// list �����͸� �ʱ�ȭ
		m_List.ResetList();

		// list�� ��� �����͸� ���Ͽ� ����
		int length = m_List.GetLength();
		int curIndex = m_List.GetNextItem(data);
		while (curIndex < length && curIndex != -1)
		{
			data.WriteDataToFile(m_OutFile);
			curIndex = m_List.GetNextItem(data);
		}

		m_OutFile.close();	// file close

		return 1;
	}

	int WriteUserDataToFile() {
		PlayItem data;	// ����� �ӽ� ����
		string filename = A_id;

		m_OutFile.open(filename);
		m_OutFile << A_pw;
		// list �����͸� �ʱ�ȭ

		DoublyNodeType<PlayItem> *t = m_PlayList.GetFirst();
		t = t->next;
		// list�� ��� �����͸� ���Ͽ� ����
		while (1)
		{
			if (t->next == NULL) break;
			t->data.WriteDataToFile(m_OutFile);
			t = t->next;
		}

		m_OutFile.close();	// file close

		return 1;
	}
	/**
	*	@brief	����Ʈ���� �ش� id�� ���� item�� ã�´�.
	*	@pre	����.
	*	@post	ã�� item�� ����Ѵ�.
	*	@return	������ 1�� ����, ���н� 0�� ����.
	*/
	int	RetrieveMusic(); // Ű����κ��� ���� ID�� �޾Ƽ� List���� ����� ã�Ƽ� ȭ�鿡 ���

	/**
	*	@brief	����Ʈ�� �Էµ� ��� ���� �����Ѵ�.
	*	@pre	����.
	*	@post	m_length�� 0���� �ٲ۴�.
	*	@return	������ 1�� ����, ���н� 0�� ����.
	*/
	int MakeEmpty(); // ����Ʈ�� �Էµ� ��� ���� ����

	/**
	*	@brief	id�� ��ġ�ϴ� item�� ã�Ƽ� �ش� item�� �����Ѵ�.
	*	@pre	�μ� data�� �ִ� id�� list ���� �����ϴ� ���̾�� �Ѵ�.
	*	@post	list ���� �ش� item�� ���ŵȴ�.
	*	@param	data	�����ϰ��� �ϴ� id�� �Էµ� ItemType��.
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int	DeleteMusic(); // Ű����κ��� ���� ID�� �޾Ƽ� List���� �ش� �л��� ����
		/**
	*	@brief	id�� ��ġ�ϴ� item�� ã�Ƽ� �ش� item�� �Է¹��� item���� �ٲ۴�.
	*	@pre	�μ� data�� �ִ� id�� list ���� �����ϴ� ���̾�� �Ѵ�.
	*	@post	list ���� �ش� item�� ��ü�ȴ�.
	*	@param	data	��ü�ϰ��� �ϴ� id�� �Էµ� ItemType��.
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int	ReplaceMusic(); //Ű����κ��� ���� ����� ���� ������ list���� ���� ����� ã�� ���� �Էµ� ������� ġȯ
		/**
	*	@brief	����Ʈ���� �ش� id�� ���� item�� Binary�� ã�� ����Ѵ�.
	*	@pre	ID������ ���ڸ� �Է¹޴´�.
	*	@post	�ش� id�� ���� item�� detail�� ������ �ֿܼ� ����Ѵ�.
	*	@return �ش� item�� ������ 1�� ����, �ƴҽ� 0�� ����.
	*/
	int SearchById_BinaryS();

	/**
	*	@brief	����Ʈ���� �ش� �˻�� �����ϴ� Artist Name�� ���� data���� ��� ����Ѵ�.
	*	@post	�ش� �˻�� �����ϰ� �ִ� data���� ��µȴ�.
	*	@return �ش� item�� ������ 1�� ����, �ƴҽ� 0�� ����.
	*/
	int SearchByArtist();
	/**
	*	@brief	����Ʈ���� �ش� �˻�� �帣�� ���� data���� ��� ����Ѵ�.
	*	@post	�ش� �˻�� �����ϰ� �ִ� data���� ��µȴ�.
	*	@return �ش� item�� ������ 1�� ����, �ƴҽ� 0�� ����.
	*/
	int SearchByGenre();

	/**
	*	@brief	user�κ��� command�� �Է¹޴´�.
	*	@return user�� input�� ���ϵȴ�.

	*/
	int SelectSearchType();
	/**
	*	@brief	selectsearchtype���� �Է¹��� Ŀ�ǵ忡 ���� �ش��ϴ� �˻� ����� �����Ѵ�.
	*	@pre	Ŀ�ǵ� ���� 0~4���� ��ȿ�ؾ��Ѵ�.
	*	@post	Ŀ�ǵ� ���� �ش��ϴ� ����� ����ȴ�.
	*/
	void UserSearchTypeRun();

	void SearchTypeRun();
	//3�� �߰�
	/**
	*	@brief	input string�� ��ġ�ϴ� id�� ���� ���ڵ带 ã�� �Ķ���� �����Ϳ� �����Ų��.
	*	@pre	input string�� �ִ� id�� list ���� �����ϴ� ���̾�� �Ѵ�.
	*	@post	input string�� ��ġ�ϴ� id�� ���� ���ڵ尡 �Ķ���� �����Ϳ� ����ȴ�.
	*	@param	input	ã�����ϴ� id�� data	������� ������
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int SearchIdAddBinaryS(string input, ItemType &data);
	/**
	*	@brief	Ű���忡�� playlist�� �߰��ϰ��� �ϴ� ������ id�� �޾� list���� �˻��� �� playlist�� �߰��Ѵ�.
	*	@pre	Ű���忡�� �Է¹��� id���� ���� ���ڵ尡 list�� �����ؾ��Ѵ�.
	*	@post	�÷��� ����Ʈ�� �Է¹��� id�� ���� ������ �߰��ȴ�.
	*	@param	none
	*	@return	������ 1, ���н� 0�� �����Ѵ�.
	*/
	int AddToPlayList();
	/**
	*	@brief	�÷��� ����Ʈ�� ����ִ� ��� ������ ��µȴ�. ��� �� ����ڿ��� ����� ���θ� ���� ����� ��û�� ���� ������ ����� �ݺ��ȴ�.
	*	@pre	�÷��̸���Ʈ�� ������ �����ؾ��Ѵ�.
	*	@post	�ֿܼ� �÷��̸���Ʈ�� ��µȴ�.
	*	@param	none
	*	@return none
	*/
	void PlayIOAddTime();


	void PlayIOFreq();

	/**
	*	@brief	playlist���� �����ϰ��� �ϴ� ������ id���� Ű����κ��� �Է¹ް�, �ش� ������ playlist���� �����Ѵ�.
	*	@pre	Ű���忡�� �Է¹��� id���� ���� ���ڵ尡 list�� �����ؾ��Ѵ�.
	*	@post	�÷��̸���Ʈ���� �Է¹��� id�� ���� ���ڵ尡 playlist���� �����ȴ�.
	*	@param	none
	*	@return none
	*/
	void DeleteFrPlayList();

	/**
	*	@brief	selectplaylisttype���� �Է¹��� Ŀ�ǵ忡 ���� �ش��ϴ� �˻� ����� �����Ѵ�.
	*	@pre	Ŀ�ǵ� ���� 0~4���� ��ȿ�ؾ��Ѵ�.
	*	@post	Ŀ�ǵ� ���� �ش��ϴ� ����� ����ȴ�.
	*/
	void PlaylistRun();
	/**
	*	@brief	user�κ��� command�� �Է¹޴´�.
	*	@return user�� input�� ���ϵȴ�.

	*/
	int SelectPlaylistType();

	void AlbumPlayRun();

	int SelectAlbumType();
	/**
	*	@brief	�߰��� ���� ������ �˻��ϰ� ������ �����ϸ� �ش� ������ songlist�� �� �߰�. �������� ������ ������ �߰��ϰ� �Էµ� �� �߰��Ѵ�.
	*	@pre	addmusic�Լ��� ������ �� ���� �����ؾ��Ѵ�,
	*	@post	������ songlist�� �뷡�� �߰��ȴ�.
	*	@param	item �߰��� ������ �뷡
	*	@return none
	*/
	void AddSong(ItemType item);
	/**
	*	@brief	artistlist���� ������ �˻��ϰ� �ش� ������ �θ� ��� ���� �ڼ��� ������ ȭ�鿡 ����Ѵ�
	*	@pre	�ش��ϴ� ������ artistlist�� �����ؾ��Ѵ�.
	*	@post	�ش� ������ ��� ���� ��µȴ�.
	*	@param	none
	*	@return �ش��ϴ� ������ artistlist�� �����ϸ� return0, �������� ������ return 1;
	*/
	int SearchByArtistWithSL();
	//-----------------------BinaryTreeNode-----------------------//
	void Tree_InsertItem();
	void Tree_RemoveItem();
	void Tree_DisplayItem();
	void Tree_SearchItem();


private:
	ifstream m_InFile;///< input file descriptor.
	ofstream m_OutFile;///< output file descriptor.

	string A_id;
	string A_pw;
	int m_Command;///< current command number.

};

