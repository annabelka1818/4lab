
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ru");
	int selectedMenu = -1;
	while (selectedMenu != 0)
	{
		cout << "The information system of the Faculty of Applied Mathematics is working!\n";
		cout << "1. News of the day\n";
		cout << "2. Аnecdote of the week\n";
		cout << "3. Author!!!\n";
		cin >> selectedMenu;
		switch (selectedMenu)
		{
		case 1:
			cout << "1. News of the day\n";

			break;
		case 2:
			cout << "2. Аnecdote of the week\n ";
			printf("Апостол Пётр попросил Иисуса на время подменить его возле врат Рая. Стоит Иисус и видит,\n что какая-то душа хочет пройти в рай. Он её поймал и спрашивает:\n— Ты кто ?\n— Я простой плотник, ничем не знаменит, но однажды у меня появился сын.\nОн появился необычным способом... Он ни на кого не похож.\nОн ходил по свету и совершал добрые дела, прошёл через \nвеликие испытания и за это он стал известен всему миру...\n— Папа ?\n— Буратино ?!\n");
			break;
		case 3:
			cout << "3. Author!!!\n";

			break;
		case 0:
			break;
		default:
			break;
		}
	}
}