#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
#include <Windows.h>
using namespace std;

mutex m;

void Create()
{
	m.lock();
	ofstream file("file.txt", ios::out);
	if (file.is_open())
	{
		cout << "File is open!" << endl;
	}
	file.close();
	m.unlock();
}

void Fill(int arr[], int size)
{
	m.lock();
	ofstream file("file.txt", ios::out);
	if (file.is_open())
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 100 + 1;
			file << arr[i] << " ";
		}
	}
	file.close();
	m.unlock();
}

void Print(int arr[], int size)
{
	m.lock();
	ifstream file2("file.txt", ios::in);
	string value;

	while (file2 >> value)
	{
		cout << value << ", ";
		Sleep(20);
	}
	file2.close();
	m.unlock();

}

int main()
{
	srand(time(0));

	const int size = 100;
	int arr[size];

	thread t1(Create);
	thread t2(Fill, arr, size);
	thread t3(Print, arr, size);

	t1.join();
	t2.join();
	t3.join();

	cout << endl;
	cout << "Ends..." << endl;
}
