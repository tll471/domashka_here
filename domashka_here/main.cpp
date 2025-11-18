#include<iostream>
using namespace std;

class Animal
{
protected:
	int weight;
	int height;
	int population;
	string type;
public:
	Animal(){}
	Animal(int w, int h, int p, string t)
	{
		weight = w;
		height = h;
		population = p;
		type = t;
	}
	void Print()
	{
		cout << "---Animal info---" << endl;
		cout << "Weight: " << weight << endl;
		cout << "Height: " << height << endl;
		cout << "Population: " << population << endl;
		cout << "Type: " << type << endl;
	}
	void Eat()
	{
		cout << type << " eat" << endl;
		cout << endl;
	}
	void Move()
	{
		cout << type << " move" << endl;
		cout << endl;
	}
};
class Elephant : public Animal
{
	int trunk_length;
	string mainland;
public:
	Elephant(){}
	Elephant(int w, int h, int p, string t, int trunk, string main) : Animal(w, h, p, t)
	{
		trunk_length = trunk;
		mainland = main;
	}
	void Print()
	{
		Animal::Print();
		cout << "---Elephant info---" << endl;
		cout << "Trunk length: " << trunk_length << endl;
		cout << "Mainland: " << mainland << endl;
		cout << endl;
	}
};
class Penguin : public Animal
{
	string mainland;
	string color;
public:
	Penguin(){}
	Penguin(int w, int h, int p, string t, string col, string main) : Animal(w, h, p, t)
	{
		mainland = main;
		color = col;
	}
	void Print()
	{
		Animal::Print();
		cout << "---Penguin info---" << endl;
		cout << "Color: " << color << endl;
		cout << "Mainland: " << mainland <<endl;
		cout << endl;
	}
};
class Parrot : public Animal
{
	bool can_speak;
	string color;
public:
	Parrot(){}
	Parrot(int w, int h, int p, string t, string col, bool can) : Animal(w, h, p, t)
	{
		can_speak = can;
		color = col;
	}
	void Print()
	{
		string n;
		if (can_speak)
		{
			n = "yes";
		}
		else
		{
			n = "no";
		}
		Animal::Print();
		cout << "---Parror info---" << endl;
		cout << "Can speak: " << n << endl;
		cout << "Color: " << color << endl;
		cout << endl;
 	}
};
class Shark : public Animal
{
	int bite_force;
public:
	Shark(){}
	Shark(int w, int h, int p, string t, int bite) : Animal(w, h, p, t)
	{
		bite_force = bite;
	}
	void Print()
	{
		Animal::Print();
		cout << "---Shark info---" << endl;
		cout << "Bite force: " << bite_force << endl;
		cout << endl;
	}
};
int main()
{
	Elephant obj1(300, 5, 100000, "Elephant", 2, "Asia");
	obj1.Print();
	obj1.Eat();
	obj1.Move();

	Penguin obj2(50, 1, 2000, "Penguin", "Grey", "Antarctica");
	obj2.Print();
	obj2.Eat();
	obj2.Move();

	Parrot obj3(1, 1, 500000, "Parrot", "Green", true);
	obj3.Print();
	obj3.Eat();
	obj3.Move();

	Shark obj4(120, 3, 149999, "Shark", 1000);
	obj4.Print();
	obj4.Eat();
	obj4.Move();
}