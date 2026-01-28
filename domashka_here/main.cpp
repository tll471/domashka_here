#include <iostream>
#include <atomic>
#include <thread>
#include <fstream>
#include <mutex>
using namespace std;

//int arr[50];
//atomic<int> counter = { 0 };
//
//void Fill()
//{
//	srand(time(0));
//	for (size_t i = 0; i < 50; i++)
//	{
//		arr[i] = rand() % 41 - 20;
//	}
//}
//
//void Parni()
//{
//	for (size_t i = 0; i < 50; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			counter++;
//			cout << "Парные элементы: " << arr[i] << endl;
//		}
//	}
//}
//
//void Minus()
//{
//	for (size_t i = 0; i < 50; i++)
//	{
//		if (arr[i] < 0)
//		{
//			counter++;
//			cout << "Отрицательные элементы: " << arr[i] << endl;
//		}
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "RUSSIA");
//	thread t1(Fill);
//	thread t2(Parni);
//	thread t3(Minus);
//
//	t1.join();
//	t2.join();
//	t3.join();
//
//	cout << endl;
//	cout << "End..." << endl;
//	cout << counter << endl;
//}



// 1
//
//mutex m;
//
//void Write1()
//{
//	m.lock();
//	ofstream file("Text.txt", ios::out);
//	if (file.is_open())
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			file << i << endl;
//		}
//	}
//	file.close();
//	m.unlock();
//}
//void Write2()
//{
//	m.lock();
//	ofstream file("Text.txt", ios::out);
//	if (file.is_open())
//	{
//		for (size_t i = 0; i < 5; i++)
//		{
//			string name;
//			cin >> name;
//			file << name;
//		}
//	}
//	file.close();
//	m.unlock();
//}
//void Out()
//{
//	m.lock();
//	ifstream file2("Text.txt", ios::in);
//	string value;
//	while (file2 >> value)
//	{
//		cout << value << endl;
//	}
//	m.unlock();
//
//}
//
//int main()
//{
//	thread t1(Write1);
//	thread t2(Write2);
//	thread t3(Out);
//
//	t1.join();
//	t2.join();
//	t3.join();
//
//
//	cout << "END..." << endl;
//}



// 2
//
//mutex m;
//
//void Fill()
//{
//	m.lock();
//	ofstream file("input.txt", ios::out);
//	if (file.is_open())
//	{
//		file << "Hello" << endl;
//		file << "World" << endl;
//		file << "Grrr" << endl;
//		file << "Mobile" << endl;
//		file << "Bye" << endl;
//	}
//	file.close();
//	m.unlock();
//}
//void Create()
//{
//	m.lock();
//	ofstream file("forbidden.txt", ios::out);
//	if (file.is_open())
//	{
//		file << "Forbidden words:" << endl;
//	}
//	file.close();
//	m.unlock();
//}
//void Find()
//{
//	m.lock();
//
//	ifstream file2("input.txt", ios::in);
//	string value;
//	while (file2 >> value)
//	{
//		if (value == "Grrr")
//		{
//			ofstream file("forbidden.txt", ios::out);
//			if (file.is_open())
//			{
//				file << value << endl;
//			}
//			file.close();
//		}
//		cout << value << endl;
//	}
//	file2.close();
//	m.unlock();
//}
//
//void Answer()
//{
//	m.lock();
//	ifstream file2("forbidden.txt", ios::in);
//	string value;
//	cout << "-----" << endl;
//	while (file2 >> value)
//	{
//		cout << value << endl;
//	}
//	cout << "-----" << endl;
//	file2.close();
//	m.unlock();
//}
//
//int main()
//{
//	thread t1(Fill);
//	thread t2(Create);
//	thread t3(Find);
//	thread t4(Answer);
//
//	t1.join();
//	t2.join();
//	t3.join();
//	t4.join();
//
//
//	cout << "END..." << endl;
//}