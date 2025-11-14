#include <iostream>
using namespace std;

//class Passport
//{
//protected:
//	string name;
//	string surname;
//	int age;
//	string gender;
//public:
//	Passport(){}
//	Passport(string n, string sur, int a, string gen)
//	{
//		name = n;
//		surname = sur;
//		age = a;
//		gender = gen;
//	}
//	void Print()
//	{
//		cout << "---Passport info---" << endl;
//		cout << "Name: " << name << endl;
//		cout << "Surname: " << surname << endl;
//		cout << "Gender: " << gender << endl;
//		cout << "Age: " << age << endl;
//	}
//};
//class ForeignPassport : public Passport
//{
//	int visits;
//	int number;
//public:
//	ForeignPassport(){}
//	ForeignPassport(string n, string sur, int a, string gen, int vis, int num)
//	{
//		name = n;
//		surname = sur;
//		age = a;
//		gender = gen;
//		visits = vis;
//		number = num;
//	}
//	void Print()
//	{
//		Passport::Print();
//		cout << "---ForeignPassport info---" << endl;
//		cout << "Number of visits: " << visits << endl;
//		cout << "Special number: " << number << endl;
//	}
//
//};
//int main()
//{
//	Passport obj1("Alex", "Alexander", 19, "male");
//	obj1.Print();
//	cout << endl;
//
//	ForeignPassport obj2("Alex", "Alexander", 19, "male", 22, 3819420);
//	obj2.Print();
//	cout << endl;
//}

class Wheel
{
	int *arr1;
	int *arr2;
	int *arr3;
public:
	Wheel(){}
	Wheel(int *ar1, int *ar2, int *ar3)
	{
		arr1 = ar1;
		arr2 = ar2;
		arr3 = ar3;
	}
	void Print()
	{
		srand(time(NULL));
		
		while (true)
		{
			int number1 = rand() % 6;
			int number2 = rand() % 6;
			int number3 = rand() % 6;
			string idk;
			cout << "Enter something: " << endl;
			cin >> idk;
			cout << "[" << arr1[number1] << "]" << " " << "[" << arr2[number2] << "]" << " " << "[" << arr3[number3] << "]" << " " << endl;
			
			if (arr1[number1] == arr2[number2] && arr2[number2] == arr3[number3])
			{
				cout << "You won! " << endl;
				break;
			}
			
		}
		
		
		
	}
};
int main()
{
	const int size = 6;
	int arr1[size] = { 1, 2, 3, 4, 5, 6 };
	int arr2[size] = { 1, 2, 3, 4, 5, 6 };
	int arr3[size] = { 1, 2, 3, 4, 5, 6 };

	Wheel obj1(arr1, arr2, arr3);
	obj1.Print();
}