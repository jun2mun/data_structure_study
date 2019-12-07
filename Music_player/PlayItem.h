#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class PlayItem
{
public:
	PlayItem() {
		m_Id = "";
		numPlay = -1;
		inTime = -1;
	}
	~PlayItem() {}
	/**
	*	@brief	Set music id.
	*	@pre	none.
	*	@post	music id is set.
	*	@param	inId	music id.
	*/
	void setId(string inId) {
		m_Id = inId;
	}
	/**
	*	@brief	Set numplay.
	*	@pre	none.
	*	@post	numplay is set.
	*	@param	inNumplay	numplay.
	*/
	void setNumPlay(int inNumPlay) {
		numPlay = inNumPlay;
	}
	void AddNumPlay() {
		numPlay++;
	}

	/**
	*	@brief	Set music in time.
	*	@pre	none.
	*	@post	music in time is set.
	*	@param	inInTime	music intime.
	*/
	void setInTime(int inInTime) {
		inTime = inInTime;
	}

	/**
	*	@brief	Set music id from keyboard.
	*	@pre	none.
	*	@post	music id is set.
	*/
	void setIdFromKB() {
		string inId;
		cout << "\t* Id�Է� :";
		cin >> inId;
		m_Id = inId;
	}

	/**
	*	@brief	Set music numplay from keyboard.
	*	@pre	none.
	*	@post	music numplay is set.
	*/
	void setNumPlayFromKB() {
		int inNumPlay;
		cout << "\t* NumPlay�Է� :";
		cin >> inNumPlay;
		numPlay = inNumPlay;
	}

	/**
	*	@brief	Set music id from keyboard.
	*	@pre	none.
	*	@post	music num play is set.
	*/
	void setInTimeFromKB() {
		int inInTime;
		cout << "\t* InTime�Է� :";
		cin >> inInTime;
		inTime = inInTime;
	}

	/**
	*	@brief	Get music id.
	*	@pre	music id is set.
	*	@post	none.
	*	@return	music id.
	*/
	string getId() {
		return m_Id;
	}

	/**
	*	@brief	Get music num play.
	*	@pre	music numplay is set.
	*	@post	none.
	*	@return	music numplay.
	*/
	int getNumPlay() {
		return numPlay;
	}
	/**
	*	@brief	Get music in time.
	*	@pre	music in time is set.
	*	@post	none.
	*	@return	music in time.
	*/
	int getinTime() {
		return inTime;
	}

	int WriteDataToFile(ofstream &fout) {
		fout << endl;
		fout << m_Id << " ";
		fout << numPlay << " ";
		fout << inTime;

		return 1;
	}

	//������ �����ε�.
	bool operator == (PlayItem &data) {
		if (inTime == data.getinTime()) {
			return true;
		}
		return false;
	}

	bool operator > (PlayItem &data) {
		if (inTime > data.getinTime()) {
			return true;
		}
		return false;
	}

	bool operator < (PlayItem &data) {
		if (inTime < data.getinTime()) {
			return true;
		}
		return false;
	}


private:
	string m_Id;		//���� ���̵�
	int numPlay;	//���� �÷��̵� Ƚ��
	int inTime;		//���� playlist�� ���Ե� �ð�

};
