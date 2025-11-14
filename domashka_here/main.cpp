#include<iostream>
using namespace std;

class Transport
{
protected:
	string name;
	int year;
	int max_speed;
	string weight;
public:
	Transport() {}
	Transport(string n, int y, int max, string w)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
	}
	void Print()
	{
		cout << "---Transport into---" << endl;
		cout << "Name: " << name << endl;
		cout << "Year: " << year << endl;
		cout << "Max speed: " << max_speed << endl;
		cout << "Weight: " << weight << endl;
	}
};
class Truck : public Transport
{
	int wheel_size;
	int engine_displacement;
public:
	Truck() {}
	Truck(string n, int y, int max, string w, int wheel, int engine)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
		wheel_size = wheel;
		engine_displacement = engine;
	}
	void Print()
	{
		Transport::Print();
		cout << "---Truck info---" << endl;
		cout << "Wheel size: " << wheel_size << endl;
		cout << "Engine displacement: " << engine_displacement << endl;
	}
};
class Plane : public Transport
{
	int wingspan;
	int engine_power;
public:
	Plane() {}
	Plane(string n, int y, int max, string w, int wing, int engine)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
		wingspan = wing;
		engine_power = engine;
	}
	void Print()
	{
		Transport::Print();
		cout << "---Plane info---" << endl;
		cout << "Wingspan: " << wingspan << endl;
		cout << "Engine_power: " << engine_power << endl;
	}
};
class Ship : public Transport
{
	int length;
	int ticket;
public:
	Ship() {}
	Ship(string n, int y, int max, string w, int len, int tic)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
		length = len;
		ticket = tic;
	}
	void Print()
	{
		Transport::Print();
		cout << "---Ship info---" << endl;
		cout << "Length: " << length << endl;
		cout << "Tickets: " << ticket << endl;
	}
};
class Auto : public Transport
{
	string color;
	string model;
public:
	Auto(){}
	Auto(string n, int y, int max, string w, string col, string mod)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
		color = col;
		model = mod;
	}
	void Print()
	{
		Transport::Print();
		cout << "---Auto info---" << endl;
		cout << "Color: " << color << endl;
		cout << "Model: " << model << endl;
	}
	string GetColor()
	{
		return color;
	}
	string GetModel()
	{
		return model;
	}
	void SetColor(string c)
	{
		color = c;
	}
	void SetModel(string m)
	{
		model = m;
	}
};
class Bike : public Transport
{
	string color;
	string type;
public:
	Bike(){}
	Bike(string n, int y, int max, string w, string col, string ty)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
		color = col;
		type = ty;
	}
	void Print()
	{
		Transport::Print();
		cout << "---Bike info---" << endl;
		cout << "Color: " << color << endl;
		cout << "Type: " << type << endl;
	}
	string GetColor()
	{
		return color;
	}
	string GetType()
	{
		return type;
	}
	void SetColor(string c)
	{
		color = c;
	}
	void SetType(string t)
	{
		type = t;
	}
};
class Tank : public Transport
{
	int bullets_count;
	string length_of_the_weapon;
	string color;
public:
	Tank(){}
	Tank(string n, int y, int max, string w, int bullets, string length, string col)
	{
		name = n;
		year = y;
		max_speed = max;
		weight = w;
		bullets_count = bullets;
		length_of_the_weapon = length;
		color = col;
	}
	void Print()
	{
		Transport::Print();
		cout << "---Tank info---" << endl;
		cout << "Bullets count: " << bullets_count << endl;
		cout << "Length of the weapon: " << length_of_the_weapon << endl;
		cout << "Color: " << color << endl;
	}

	int GetBullets()
	{
		return bullets_count;
	}
	string GetWeapon()
	{
		return length_of_the_weapon;
	}
	string GetColor()
	{
		return color;
	}
	void SetBullets(int bul)
	{
		bullets_count = bul;
	}
	void SetWeapon(string wea)
	{
		length_of_the_weapon = wea;
	}
	void SetColor(string c)
	{
		color = c;
	}
};

int main()
{
	Truck obj1("BMV", 2020, 200, "40", 20, 100);
	obj1.Print();
	cout << endl;

	Plane obj2("BMV", 2017, 140, "50", 500, 200);
	obj2.Print();
	cout << endl;

	Ship obj3("BMV", 2023, 180, "80", 700, 400);
	obj3.Print();
	cout << endl;

	Auto obj4("BMV", 2025, 170, "90", "red", "Toyota");
	obj4.Print();
	cout << endl;

	Bike obj5("BMV", 2024, 120, "40", "Green", "Urban");
	obj5.Print();
	cout << endl;

	Tank obj6("BMV", 2014, 250, "50", 50, "5 meters", "grey");
	obj6.Print();
	cout << endl;
}