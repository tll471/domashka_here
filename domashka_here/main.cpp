#include <iostream>
#include <map>
using namespace std;

class Student
{
	string name;
	int age;
public:
	Student(){}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << endl;
	}
	int GetAge()
	{
		return age;
	}
	string GetName()
	{
		return name;
	}
	void SetAge(int a)
	{
		age = a;
	}
	void SetNmae(string n)
	{
		name = n;
	}

};
bool operator< (Student obj1, Student obj2) 
{
	if (obj1.GetAge() != obj2.GetAge())
	{
		return obj1.GetAge() < obj2.GetAge();
	}
	return obj1.GetName() < obj2.GetName();
}
bool operator> (Student obj1, Student obj2)
{
	if (obj2.GetAge() != obj1.GetAge())
	{
		return obj2.GetAge() > obj1.GetAge();
	}
	return obj2.GetName() > obj1.GetName();
}

typedef pair<Student, Student> mypair;

int main()
{
	map<Student, Student> dict;
	int age;
	string name;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name: " << endl;
		cin >> name;
		cout << "Enter age: " << endl;
		cin >> age;

		Student obj(name, age);
		dict.insert(mypair(obj, obj));

	}

	for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
	{
		ptr->second.Print();
	}

}