#pragma once
class student
{
	float grade;
	char* FIO;
	char* birthday;
	char* telephone;
	static char* group;
	static char* university;
public:
	student();
	student(const char* _FIO);
	student(const char* _FIO, const char* _birthday);
	student(const char* _FIO, const char* _birthday, const char* _telephone);
	student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade);
	student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade, const char* _group);
	student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade, const char* _group, const char* _university);
	static void stat_input();
	void show();
	char* Get_FIO()
	{
		return FIO;
	}
	char* Get_birthday()
	{
		return birthday;
	}
	char* Get_telephone()
	{
		return telephone;
	}
	float Get_grade()
	{
		return grade;
	}
	static char* Get_university()
	{
		return university;
	}
	static char* Get_group()
	{
		return group;
	}
	void Set_FIO(const char* _FIO);
	void Set_birthday(const char* _birthday);
	void Set_telephone(const char* _telephone);
	void Set_grade(float _grade);
	static void Set_university(const char* _university);
	static void Set_group(const char* _group);
	void del();
	~student();
};