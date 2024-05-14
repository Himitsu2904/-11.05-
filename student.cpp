#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <iostream>
using namespace std;

char* student::group = nullptr;
char* student::university = nullptr;

student::student()
{
	FIO = new char[4];
	strcpy(FIO, "---");
	birthday = new char[4];
	strcpy(birthday, "---");
	telephone = new char[4];
	strcpy(telephone, "---");
	grade = 0;
}

student::student(const char* _FIO)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[4];
	strcpy(birthday, "---");
	telephone = new char[4];
	strcpy(telephone, "---");
	grade = 0;
}

student::student(const char* _FIO, const char* _birthday)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[4];
	strcpy(telephone, "---");
	grade = 0;
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
	grade = 0;
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
	grade = _grade;
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade, const char* _group)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
	grade = _grade;
	group = new char[strlen(_group) + 1];
	strcpy(group, _group);
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade, const char* _group, const char* _university)
{
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
	grade = _grade;
	group = new char[strlen(_group) + 1];
	strcpy(group, _group);
	university = new char[strlen(_university) + 1];
	strcpy(university, _university);
}

void student::Set_FIO(const char* _FIO)
{
	if (FIO != nullptr)
	{
		delete[] FIO;
	}
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
}

void student::Set_birthday(const char* _birthday)
{
	if (birthday != nullptr)
	{
		delete[] birthday;
	}
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
}

void student::Set_telephone(const char* _telephone)
{
	if (telephone != nullptr)
	{
		delete[] telephone;
	}
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
}

void student::Set_grade(float _grade)
{
	if (_grade > 0)
	{
		grade = _grade;
	}
}

void student::Set_university(const char* _university)
{
	if (university != nullptr)
	{
		delete[] university;
	}
	university = new char[strlen(_university) + 1];
	strcpy(university, _university);
}

void student::Set_group(const char* _group)
{
	if (group != nullptr)
	{
		delete[] group;
	}
	group = new char[strlen(_group) + 1];
	strcpy(group, _group);
}

void student::stat_input()
{
	char buff[100];
	cout << "Введите название группы: "; gets_s(buff, 100);
	group = new char[strlen(buff) + 1];
	strcpy(group, buff);
	cout << "Введите название университета: "; gets_s(buff, 100);
	university = new char[strlen(buff) + 1];
	strcpy(university, buff);
}

void student::show()
{
	cout << "\tДанные про студента:";
	cout << "\nФИО: " << FIO;
	cout << "\nДата рождения: " << birthday;
	cout << "\nКонтактный телефон: " << telephone;
	cout << "\nГруппа: " << group;
	cout << "\nНазвание университета: " << university;
	cout << "\nСредний балл: " << grade;
}

void student::del()
{
	if (group != nullptr)
	{
		delete[] group;
	}
	if (university != nullptr)
	{
		delete[] university;
	}
}

student::~student()
{
	delete[] FIO;
	delete[] birthday;
	delete[] telephone;
}