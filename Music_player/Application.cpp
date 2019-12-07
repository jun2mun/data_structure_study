#include "Application.h"

int Application::HomeCommand() {
	int command = 1;
	cout << endl << endl;
	cout << "\t============ ���������� ============" << endl;
	cout << "\t	1. �α���" << endl;
	cout << "\t	2. ȸ������" << endl;
	cout << "\t====================================" << endl;
	int x = 9, y = 4;
	int key = 0;
	while (key != ENTER)
	{
		gotoxy(x, y);
		cout << "->";
		key = _getch();
		switch (key)
		{
		case UP:
			if (command != 1)
			{
				gotoxy(x, y);
				cout << "  ";
				command--;
				y--;
			}
			break;
		case DOWN:
			if (command != 11)
			{
				gotoxy(x, y);
				cout << "  ";
				command++;
				y++;
			}
			break;
		}
	}

	return command;
}

void Application::HomeRun() {
	int command = HomeCommand();
	CLS;
	cout << endl << endl;
	switch (command) {
	case 1:
		Login();
		break;
	case 2:
		SignUp();
		break;
	default:
		break;
	}
}

void Application::Login()
{
	string id;
	string password;
	cout << "\t============ �α��� ===============" << endl;
	cout << "\t ID :";
	cin >> id;
	id += ".txt";
	cout << "\t PASSWORD :";
	cin >> password;
	m_InFile.open(id);
	if (m_InFile.is_open()) {
		string pw;
		m_InFile >> pw;
		if (password == pw) {
			if (id == "admin.txt")
			{
				ReadDataFromFileMaster(id);
				cout << "\n\t";
				A_id = id;
				A_pw = password;
				PAUSE;
				CLS;
				Run();
			}
			else
			{
				A_id = id;
				A_pw = password;
				ReadDataFromFilePL(id);
				m_InFile.open("admin.txt");
				string temp;
				m_InFile >> temp;
				ReadDataFromFileMaster("admin.txt");
				cout << "\n\t";
				PAUSE;
				CLS;
				GeneralUserRun();

			}
		}
		else {
			cout << "\t* ��й�ȣ�� ��ġ���� �ʽ��ϴ�." << endl;
		}
	}
	else {
		cout << "\t* �ش��ϴ� id�� �������� �ʽ��ϴ�." << endl;
		cout << "\t";
		PAUSE;
		CLS;
		HomeRun();
	}
}

void Application::SignUp()
{
	string id;
	string password;
	cout << "\t============ ȸ������ ==============" << endl;
	cout << "\t ID :";
	cin >> id;
	cout << "\t PASSWORD :";
	cin >> password;
	id += ".txt";
	ifstream f;
	f.open(id);
	if (f.is_open() == true) {
		cout << "\t* �̹� �����ϴ� id�Դϴ�." << endl;
		PAUSE;
		CLS;
		HomeRun();
		f.close();
		return;
	}
	ofstream file;
	file.open(id);
	file << password << endl;
	file.close();
	cout << endl << "\t";
	PAUSE;
	CLS;
	GeneralUserRun();
}

void Application::GeneralUserRun()
{
	while (1)
	{
		m_Command = GeneralUserCommand();
		CLS;
		cout << endl << endl;
		switch (m_Command)
		{
		case 1:
			UserSearchTypeRun();//		SearchTypeRun();
			cout << "\n\t";
			PAUSE;
			CLS;
			break;
		case 2:		// ����Ʈ�� ����� ��� ���� ȭ�鿡 ���
			DisplayAllMusic();
			cout << "\n\t";
			PAUSE;
			CLS;
			break;
		case 3:		// load list data from a file.
			PlaylistRun();
			break;
		case 4:		// save list data into a file.
			SearchByArtistWithSL();
			cout << "\n\t";
			PAUSE;
			CLS;
			break;
		case 5:
			WriteUserDataToFile();
			return;
			break;
		case 6:
			AlbumPlayRun();
			cout << "\n\t";
			PAUSE;
			CLS;
			break;
		case 7:
			return;
		default:
			cout << "\t* Illegal selection...\n";
			break;
		}

	}


}

int Application::GeneralUserCommand()
{
	CLS;
	cout << endl << endl;
	int command = 1;
	cout << "\t**********����������**********" << endl;
	cout << "\t==============================" << endl;
	cout << "\t===ID == Command =============" << endl;
	cout << "\t   1 : ���� �˻��ϱ�" << endl;
	cout << "\t   2 : ��� ���� ����ϱ�" << endl;
	cout << "\t   3 : �÷��� ����Ʈ�� ����" << endl;
	cout << "\t   4 : ������ �뷡 ã��" << endl;
	cout << "\t   5 : ���� ����" << endl;
	cout << "\t   6 : �ٹ� �ۼ�(binary Tree ���)" << endl;
	cout << "\t   7 : Quit" << endl;
	cout << "\t==============================" << endl;
	int x = 9, y = 6;
	int key = 0;
	while (key != ENTER)
	{
		gotoxy(x, y);
		cout << "->";
		key = _getch();
		switch (key)
		{
		case UP:
			if (command != 1)
			{
				gotoxy(x, y);
				cout << "  ";
				command--;
				y--;
			}
			break;
		case DOWN:
			if (command != 7)
			{
				gotoxy(x, y);
				cout << "  ";
				command++;
				y++;
			}
			break;
		}
	}

	return command;
}

void Application::Run()
{
	while (1)
	{
		m_Command = GetCommand();
		CLS;
		cout << endl << endl;
		switch (m_Command)
		{
		case 1:
			AddMusic(); // �� ������ �Է� �޾� ����Ʈ�� �߰�					AddMusic();
			break;
		case 2:
			DeleteMusic(); // ���� ������ȣ�� �Է� �޾� ����Ʈ���� ����					DeleteMusic();
			break;
		case 3:
			ReplaceMusic();// �� ������ �Է� �޾Ƽ� ����Ʈ���� �ش� �� ������ ����			ReplaceMusic();
			break;
		case 4:
			SearchTypeRun();//		SearchTypeRun();
			break;
		case 5:		// ����Ʈ�� ����� ��� ���� ȭ�鿡 ���
			DisplayAllMusic();
			break;
		case 6: 		// ����Ʈ�� �Էµ� ��� ���� ����
			MakeEmpty();
			break;
		case 7:		// save list data into a file.
			SearchByArtistWithSL();
			break;
		case 8:
			WriteDataToFile();
			return;
			break;
		default:
			cout << "\t* Illegal selection...\n";
			break;
		}

		cout << "\n\t";
		PAUSE;
		CLS;
	}


}

int Application::GetCommand()
{
	CLS;
	cout << endl << endl;
	int command = 1;
	cout << "\t*******���������������*******" << endl;
	cout << "\t==============================" << endl;
	cout << "\t===ID == Command =============" << endl;
	cout << "\t   1 : Add music" << endl;
	cout << "\t   2 : Delete music" << endl;
	cout << "\t   3 : Replace music" << endl;
	cout << "\t   4 : Search music" << endl;
	cout << "\t   5 : Print all on screen" << endl;
	cout << "\t   6 : Delete all music" << endl;
	cout << "\t   7 : ������ �뷡 ã��" << endl;
	cout << "\t   8 : Quit" << endl;
	cout << "\t==============================" << endl;
	int x = 9, y = 6;
	int key = 0;
	while (key != ENTER)
	{
		gotoxy(x, y);
		cout << "->";
		key = _getch();
		switch (key)
		{
		case UP:
			if (command != 1)
			{
				gotoxy(x, y);
				cout << "  ";
				command--;
				y--;
			}
			break;
		case DOWN:
			if (command != 8)
			{
				gotoxy(x, y);
				cout << "  ";
				command++;
				y++;
			}
			break;
		}
	}

	return command;
}

int Application::RetrieveMusic() {
	ItemType item;
	item.SetIdFromKB();

	int find = m_List.Retrieve_Binary(item);
	if (find == 1) item.DisplayRecordOnScreen();
	else cout << "\t* �ش��ϴ� id�� ���� ������ �������� �ʽ��ϴ�." << endl;
	return 0;
}

int Application::DeleteMusic()
{
	ItemType item;
	item.SetIdFromKB();
	m_List.Delete(item);
	return 0;
}

int Application::ReplaceMusic() {
	ItemType item;
	item.SetRecordFromKB();
	m_List.Replace(item);

	return 0;
}

int Application::MakeEmpty() {
	m_List.MakeEmpty();
	return 0;
}

//-------�ǽ�����2---------//


int Application::SearchById_BinaryS() {
	ItemType item;
	item.SetIdFromKB();
	int isExist = m_List.Retrieve_Binary(item);
	if (isExist == 1) {
		item.DisplayRecordOnScreen();
		return 1;
	}
	cout << "\t* �ش��ϴ� ID�� ��ġ�ϴ� �����Ͱ� �������� �ʽ��ϴ�." << endl;
	return 0;
}

int Application::SearchIdAddBinaryS(string input, ItemType &data) {
	ItemType item;
	item.SetId(input);
	int isExist = m_List.Retrieve_Binary(item);
	if (isExist == 1) {
		return 1;
	}
	return 0;
}

//���� �̸����� �˻�. "��"�� �Է��ϸ� "��"�� ���Ե� �� �� ���.
int Application::SearchByArtist() {
	string input;
	cout << "\t* �˻�� �Է����ּ��� : ";
	cin >> input;
	int have = 0;

	m_List.ResetList();
	for (int curPointer = 0; curPointer < m_List.GetLength(); curPointer++) {
		std::size_t pos;
		ItemType data;
		m_List.GetNextItem(data);
		if (pos = data.GetArtist().find(input, 0) != string::npos) {
			data.DisplayRecordOnScreen();
			have = 1;
		}
	}
	return have;
}

//�帣�� �˻�
int Application::SearchByGenre() {
	int input;
	cout << "\t* �˻�� �Է����ּ��� : ";
	cin >> input;
	int have = 0;
	m_List.ResetList();
	for (int curPointer = 0; curPointer < m_List.GetLength(); curPointer++) {
		ItemType data;
		m_List.GetNextItem(data);
		if (data.GetGenre() == input) {
			data.DisplayRecordOnScreen();
			have = 1;
		}
	}
	return have;
}

//--------------�˻� ��� ���� start-----------------------//
int Application::SelectSearchType() {
	int command = 1;
	cout << "\t=== �˻�â���� �̵��մϴ�. ===" << endl << endl;
	cout << "\t==============================" << endl;
	cout << "\t===ID == Command =============" << endl;
	cout << "\t   1 : Search by Id" << endl;
	cout << "\t   2 : Search by Artist" << endl;
	cout << "\t   3 : Search by Genre" << endl;
	cout << "\t   4 : back" << endl;
	cout << "\t==============================" << endl;

	int x = 9, y = 7;
	int key = 0;
	while (key != ENTER)
	{
		gotoxy(x, y);
		cout << "->";
		key = _getch();
		switch (key)
		{
		case UP:
			if (command != 1)
			{
				gotoxy(x, y);
				cout << "  ";
				command--;
				y--;
			}
			break;
		case DOWN:
			if (command != 4)
			{
				gotoxy(x, y);
				cout << "  ";
				command++;
				y++;
			}
			break;
		}
	}

	return command;

}

void Application::UserSearchTypeRun() {

	int m_Command;

	m_Command = SelectSearchType();
	CLS;
	cout << endl << endl;
	switch (m_Command)
	{
	case 1:
		RetrieveMusic();

		break;
	case 2:
		SearchByArtist();
		break;
	case 3:
		SearchByGenre();

		break;
	default:
		break;
	}

}

void Application::SearchTypeRun() {

	int m_Command;

	m_Command = SelectSearchType();
	CLS;
	cout << endl << endl;
	switch (m_Command)
	{
	case 1:
		RetrieveMusic();
		break;
	case 2:
		SearchByArtist();
		break;
	case 3:
		SearchByGenre();
		break;
	case 4:
		break;
	default:
		cout << "\tIllegal selection...\n";
		break;
	}

	Run();
}
//--------------�˻� ��� ���� end-----------------------//


//--------------�÷��̸���Ʈ start-----------------------//
int Application::SelectPlaylistType() {
	int command = 1;
	cout << "\t= �÷��̸���Ʈ�� �̵��մϴ�. =" << endl << endl;
	cout << "\t==============================" << endl;
	cout << "\t===ID == Command =============" << endl;
	cout << "\t   1 : �÷��̸���Ʈ ���� �߰�" << endl;
	cout << "\t   2 : �߰��� ������ ���" << endl;
	cout << "\t   3 : ���� ����� ������ ���" << endl;
	cout << "\t   4 : �÷��̸���Ʈ ���� ����" << endl;
	cout << "\t   5 : back" << endl;
	cout << "\t==============================" << endl;
	int x = 9, y = 7;
	int key = 0;
	while (key != ENTER)
	{
		gotoxy(x, y);
		cout << "->";
		key = _getch();
		switch (key)
		{
		case UP:
			if (command != 1)
			{
				gotoxy(x, y);
				cout << "  ";
				command--;
				y--;
			}
			break;
		case DOWN:
			if (command != 5)
			{
				gotoxy(x, y);
				cout << "  ";
				command++;
				y++;
			}
			break;
		}
	}

	return command;
}

void Application::AlbumPlayRun()
{
	int m_command;

	m_Command = SelectAlbumType();
	CLS;
	cout << endl << endl;
	switch (m_Command)
	{
	case 1:
		Tree_InsertItem(); // �� ������ �Է� �޾� ����Ʈ�� �߰�					
		break;
	case 2:
		Tree_RemoveItem();
		break;
	case 3:
		Tree_DisplayItem();
		break;
	case 4:
		Tree_SearchItem();
		break;
	case 5:
		break;
	default:
		cout << "\t* Illegal selection...\n";
		break;
	}
}

int Application::SelectAlbumType()
{
	int command = 1;
	cout << "\t=�ٹ�����Ʈ�� �̵��մϴ�.. =" << endl << endl;
	cout << "\t==============================" << endl;
	cout << "\t===ID == Command =============" << endl;
	cout << "\t   1 : �ٹ� �뷡 �߰�" << endl;
	cout << "\t   2 : �ٹ� �뷡 ����" << endl;
	cout << "\t   3 : �ٹ� ����Ʈ ���" << endl;
	cout << "\t   4 : �ٹ� ������ �˻�" << endl;
	cout << "\t   5 : back" << endl;
	cout << "\t==============================" << endl;
	int x = 9, y = 7;
	int key = 0;
	while (key != ENTER)
	{
		gotoxy(x, y);
		cout << "->";
		key = _getch();
		switch (key)
		{
		case UP:
			if (command != 1)
			{
				gotoxy(x, y);
				cout << "  ";
				command--;
				y--;
			}
			break;
		case DOWN:
			if (command != 5)
			{
				gotoxy(x, y);
				cout << "  ";
				command++;
				y++;
			}
			break;
		}
	}

	return command;
}

void Application::PlaylistRun() {

	int m_Command;

	m_Command = SelectPlaylistType();
	CLS;
	cout << endl << endl;
	switch (m_Command)
	{
	case 1:
		AddToPlayList(); // �� ������ �Է� �޾� ����Ʈ�� �߰�					
		break;
	case 2:
		PlayIOAddTime();
		break;
	case 3:
		PlayIOFreq();
		break;
	case 4:
		DeleteFrPlayList();
		break;
	case 5:
		break;
	default:
		cout << "\t* Illegal selection...\n";
		break;
	}
}

int Application::AddToPlayList() {
	string input;
	ItemType data;
	cout << "\t* Play List�� �߰��� ������ id�� �Է��� �ּ��� :";
	cin >> input;
	if (SearchIdAddBinaryS(input, data) == 0) {
		cout << "\t* �ش��ϴ� id�� ���� ������ �������� �ʽ��ϴ�." << endl;
		return 0;

	}
	PlayItem insertData;
	data.SetId(input);
	insertData.setId(data.GetId());
	m_PlayList.AddPlayList(insertData);
	return 1;
}


void Application::PlayIOAddTime() {

	int input = 1;

	do {
		m_PlayList.PrintAll();
		cout << "\t* ����� ����Ͻðڽ��ϱ�? ���� : 0, ��� : 1" << endl << "\t* �Է� :";
		cin >> input;
	} while (input);
}

void Application::PlayIOFreq() {
	int input = 1;
	do {
		m_PlayList.PrintByFreq();
		cout << "\t* ����� ����Ͻðڽ��ϱ�? ���� : 0, ��� : 1" << endl << "\t* �Է� :";
		cin >> input;
	} while (input);
}

void Application::DeleteFrPlayList() {
	string inputId;
	cout << "\t* Play List���� ������ ������ id�� �Է����ּ��� :";
	cin >> inputId;
	PlayItem deleteItem;
	deleteItem.setId(inputId);
	int result = m_PlayList.DeleteItem(deleteItem);
	if (result == 0) {
		cout << "\t* �ش��ϴ� id�� ���� ������ �������� �ʽ��ϴ�." << endl;
	}
	else {
		cout << "\t* ���� ����!" << endl;
		return;
	}
}
//-------------�÷��̸���Ʈ end-----------------------//

//-----------Artist List ���� �Լ� start --------------//

//item�� ���� �̸��� �ԷµǾ��ִ� artisttype��ü.

// ���ο� ���� �߰�

//item�� �ϴ� ���� �̸��� �ԷµǾ��ִ� artisttype ��ü,
void Application::AddSong(ItemType item) {
	artistList.AddSong(item);
}
// �߰��� ���� ������ �˻��ϰ� ������ �����ϸ� �ش� ������ songlist�� ���� �߰��Ѵ�. 
// �������� ������ ������ �߰��ϰ� �Էµ� ���� �߰��Ѵ�.

//AddSong�� application�� add()�Լ��� ������ �� ���� �����ؾ��Ѵ�. 
//�� master list�� item�� �߰��� �� AddSong�� �����ؼ� ���� �˻��ϰ� �ش� ������ song list�� �� �߰�.. 
//������ ���� �߰��ϰ� �뷡 �߰�.

int Application::SearchByArtistWithSL() {
	ArtistType copy;
	string inArtistName;
	cout << "\t* �˻��Ͻ� ��Ƽ��Ʈ�� �̸��� �Է����ּ��� :";
	cin >> inArtistName;
	copy.setArtistName(inArtistName);
	int isFind = artistList.Get(copy);
	if (isFind == 1) {
		copy.DisplayRecordOnScreen();
		return 1;
	}
	else {
		cout << "\t* �ش��ϴ� ��Ƽ��Ʈ�� �������� �ʽ��ϴ�." << endl;
		return 0;
	}
}

//Artist List 

//-----------Artist List ���� �Լ� end ----------------//

//--------------Binary Tree ���� �Լ� -------------------//
void Application::Tree_InsertItem()
{
	AlbumType item;
	cout << "Insert Item : " << endl;
	item.SetRecordFromKB();				// Tree�� �߰��� item ���� Ű����κ��� �Է¹���

	albumList.Add(item);						// Add�Լ��� ���ؼ� item�� Tree�� �߰���
	Tree_DisplayItem();						// ���� Tree�� node�� ��� �����
}
void Application::Tree_RemoveItem()
{
	AlbumType item;
	cout << "Input Id to delete item : " << endl;
	item.SetIdFromKB();					// Tree���� ������� �ϴ� item ���� Ű����κ��� �Է¹���

	bool found;							// �˻����ο� ���� ����� ������ found
	albumList.RetrieveItem(item, found);		// RetrieveItem �Լ��� ���ؼ� Tree���� �˻�

	if (found == true)					// Tree�� item�� ������
	{
		albumList.DeleteItem(item);			// DeleteItem�Լ��� ���ؼ� Tree���� item���� �ش��ϴ� ��带 ������
		Tree_DisplayItem();					// ����� ������ Tree�� ���
	}
	else
		cout << "No item to delete" << endl;	// ������� �ϴ� ���� node�� ���� ��� 
					// ���� Tree�� node�� ��� �����
}
void Application::Tree_DisplayItem()
{
	albumList.PrintTree(cout);				// PrintTree�Լ��� ���ؼ� ���
}
void Application::Tree_SearchItem()
{
	AlbumType item;
	cout << "Input Id to search item : " << endl;
	item.SetIdFromKB();								// �˻��ϰ��� �ϴ� ��(Id)�� Ű����κ��� �Է¹���


	bool found;										// �̻����θ� ������ found
	albumList.RetrieveItem(item, found);					// RetrieveItem �Լ��� ���� Tree���� �˻�
	if (found == true)								// ã���� ã�Ҵٴ� ������ �Բ�, ���� �������� ���
	{
		cout << "Target item exists in the list." << endl;
		item.DisplayRecordOnScreen();
	}
	else
		cout << "Target item is not in the list." << endl;		// �� ã������ �� ã�Ҵٴ� ������ ���
}