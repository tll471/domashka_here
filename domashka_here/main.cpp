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
}