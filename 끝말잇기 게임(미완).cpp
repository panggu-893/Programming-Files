#include <iostream>
#include <string>
using namespace std;

class WordGame {
	string word = "아버지";
public:
	WordGame() { cout << "끝말 잇기 게임을 시작합니다."; }
	int pNumber(void);
	void startGame(void);
};

int WordGame::pNumber(void)
{
	int count;
	cout << "게임에 참가하는 인원은 몇명입니까? ";
	cin >> count;
	return count;
}

void WordGame::startGame(void)
{
	cout << "시작하는 단어는 " << word << "입니다.\n";
}



class Player {
	string name;
	string answer;
public:
	Player() :Player("") {};
	Player(string s) :name(s) {};
	void setName(string s) { name = s; }
	void setAnswer(void);
	string getAnswer(void);
};

void Player::setAnswer(void)
{
	cout << name << ">>";
	cin >> answer;
	return;
}

string Player::getAnswer(void)
{
	return answer;
}


int main()
{
	WordGame game;
	
	int players = game.pNumber();
	Player* pCreate = new Player[players];

	for (int i = 0;i < players;i++)
	{
		string name;
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>> ";
		cin >> name;
		pCreate[i].setName(name);
	}

	game.startGame();

	int i = 0;
	while (true)
	{
		(pCreate+i)->setAnswer();

	}

	
	delete[] pCreate;

	return 0;
}
