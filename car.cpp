#define _CRT_SECURE_NO_WARNINGS
#include "car.h"
#include <iostream>
using namespace std;

char* car::shop = nullptr;

car::car()
{
	model = new char[4];
	strcpy(model, "---");
	price = 0;
	year = 0;
}

car::car(const char* _model):car()
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
}

car::car(const char* _model, float _price):car(_model)
{
	if (_price>0)
	{
		price = _price;
	}
}

car::car(const char* _model, float _price, int _year):car(_model,_price)
{
	if (_year>0)
	{
		year = _year;
	}
}

car::car(const char* _model, float _price, int _year, const char* _shop):car(_model,_price,_year)
{
	if (shop != nullptr)
	{
		delete[] shop;
	}
	shop = new char[strlen(_shop) + 1];
	strcpy(shop, _shop);
}

void car::show()const
{
	cout << "\tДанные про машину:";
	cout << "\nМодель: " << model;
	cout << "\nЦена: " << price;
	cout << "\nГод производства: " << year;
	cout << "\nМагазин: " << shop;
}

void car::stat_input()
{
	char buff[100];
	cout << "Введите название магазина: "; gets_s(buff, 100);
	shop = new char[strlen(buff) + 1];
	strcpy(shop, buff);
}

void car::Set_model(const char* _model)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
}

void car::Set_price(float _price)
{
	if (_price > 0)
	{
		price = _price;
	}
}

void car::Set_year(int _year)
{
	if (_year > 0)
	{
		year = _year;
	}
}

void car::Set_shop(const char* _shop)
{
	if (shop != nullptr)
	{
		delete[] shop;
	}
	shop = new char[strlen(_shop) + 1];
	strcpy(shop, _shop);
}

void car::del()
{
	if (shop != nullptr)
	{
		delete[] shop;
	}
}

car::~car()
{
	delete[] model;
}