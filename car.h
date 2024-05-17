#pragma once
class car
{
	float price;
	int year;
	char* model;
	static char* shop;
public:
	car();
	car(const char* _model);
	car(const char* _model, float _price);
	car(const char* _model, float _price, int _year);
	car(const char* _model, float _price, int _year, const char* shop);
	void show()const;
	static void stat_input();
	char* Get_model()const
	{
		return model;
	}
	float Get_price()const
	{
		return price;
	}
	int Get_year()const
	{
		return year;
	}
	static char* Get_shop()
	{
		return shop;
	}
	void Set_model(const char* _model);
	void Set_price(float _price);
	void Set_year(int _year);
	static void Set_shop(const char* _shop);
	void del();
	~car();
};

