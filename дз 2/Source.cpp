#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

class MAN // ЛЮДИНА
{
public:
	float growth = 170.2;
	string hair_color = "brown";
	string name = "Angelina";
	string gender = "woman";
	int age = 18;
	string laugh;
	string massage;
	void Sits()
	{
		cout << name << " сидить..." << endl;
	}
	void Drink(string liquid)
	{
		cout << name << " п'є..." << liquid << endl;
	}
	void Say(string nick)
	{
		cout << "Хей!" << nick << " хочешь їсти?" << endl;
	}
	void Laugh()
	{
		cout << laugh << endl;
	}
	void ToFeed()
	{
		cout << name << " годує... " << endl;
	}
};
class ROOM // КІМНАТА
{

public:
	int count_room = 1;
	float height = 3; // m
	float width = 5; //m
	int count_angle = 4;
	string color_wall = "green";
	string room_closed;

	void TheRoomIsVentilated()
	{
		cout << "кімната провітрюється..." << endl;
	}
	void TheRoomIsCleaned()
	{
		cout << "кфмната прибирається..." << endl;
	}
	void TheRoomIsClosed(MAN who)
	{
		cout << "в замкнутій кімнаті..." << endl;
		who.Sits();
	}
	void TheRoomIsOpen()
	{
		cout << "кімната відімкнута..." << endl;
	}
	void TheRoomIsNotLit()
	{
		cout << "кімната не освітлюєься..." << endl;
	}
};
class MOBILE_PHONE // МОБІЛЬНИЙ ТЕЛЕФОН
{
public:
	string colot_phone = "white";
	string brand = "iphone";
	bool case_phone = true;
	double prise = 25999; //$
	int count_contact = 32;
	string call;
	void PhoneCall()
	{
		cout << call << endl;
	}
	void Vibration()
	{
		cout << "вібрація..." << endl;
	}
	void TurnOnThePhone()
	{
		cout << "телефон вмикається..." << endl;
	}
	void WatchingVideo(MAN who)
	{
		cout << "дивиться ютуб..." << endl;
		who.Laugh();
	}
	void Battery(string percent)
	{
		cout << "на тебефоні: " << percent << " %" << endl;
	}
};
class MICROPHONE // МІКРОФОН
{
public:
	string color_micro = "black";
	bool buttom = true;//наявніть кнопки для вмикання мікро
	string brand = "Trust GXT";
	int frequency_range = 5000;
	float cord_length = 1.5;//m
	string position;
	string connection;
	void IncludeMiro()
	{
		cout << "мікрофон увімкнено..." << endl;
	}
	void TurnOffMiro()
	{
		cout << "мікрофон вимкнено..." << endl;
	}
	void Position()
	{
		cout << position << endl;
	}
	void Connection()
	{
		cout << connection << endl;
	}
	void NoConnection()
	{
		cout << "мікрофон не підключен до системи..." << endl;
	}
};
class RACCOON // ЄНОТ
{
public:
	string color_wool = "gray";
	float weight = 5.6; //kg
	string eyes_color = "green";
	string nick;
	string gender = "man";
	string noize;
	void Run(MAN who, string name, string nick)
	{
		cout << "єнот біжить до..." << name << "." << endl;
		who.Say(nick);
	}
	void MakeNoize()
	{
		cout << noize << endl;
	}
	void Walk()
	{
		cout << "єнот ходить..." << endl;
	}
	void Eat(MAN who, string meal)
	{
		who.ToFeed();
		cout << "єнот їсть..." << meal << endl;
	}
	void Jump(RACCOON who)
	{
		cout << "єнот стрибає..." << endl;
		who.MakeNoize();
	}
};
int main()
{
	//setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MAN m;
	m.name = "Ангеліна";
	m.laugh = "ХА-ХА-ХА!";
	MOBILE_PHONE mb;
	RACCOON r;
	r.noize = "ГРРР!";
	r.nick = "Степан";
	ROOM room;
	room.room_closed = "кімната замкнута...";
	string meal;

	room.TheRoomIsClosed(m);
	mb.WatchingVideo(m);
	r.Run(m, m.name, r.nick);
	r.Jump(r);
	cout << "Що буде їсти єнот?" << endl;
	cin >> meal;
	r.Eat(m, meal);

}


