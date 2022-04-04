#ifndef DATE_H
#define DATE_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
class Turn
{
private:
	int size;
	HANDLE heaphandle;
	int* mass;
public:
	Turn();
	Turn(const Turn& turn);
	void AddElement();
	void EjectionElemet();
	void Viewing();
	int GetFirstEl();
	int GetSize();
	void WriteToFile();
	Turn ReadFromFile();
	void Push(int value);
	~Turn();
};
#endif