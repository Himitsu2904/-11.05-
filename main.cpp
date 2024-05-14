#include "student.h"
#include "car.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	student stud1("Игнатенко В. А.", "13.07.2005", "068 342 5136", 87.4, "Компьютерные науки 122", "IT Step School");
	stud1.show();
	cout << endl << endl;
	stud1.Set_group("Кибербезопасность 132");
	stud1.Set_birthday("22.01.2006");
	student stud2("Загонец О. В.", "05.11.2006", "097 643 9847", 94.2);
	stud1.show();
	cout << endl << endl;
	stud2.show();
	cout << ("\n----------------------------------------------------\n");
	car car1("Audi", 20000, 2019, "Automart");
	car1.show();
	cout << endl << endl;
	car1.Set_shop("Autoria");
	car1.show();
	cout << endl << endl;
	car car2("BMW", 30000, 2020);
	car2.show();
	cout << endl << endl;
	car1.del();
	stud1.del(); //!!!
}