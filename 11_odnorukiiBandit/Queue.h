#pragma once
using namespace std;
#include <iostream>
class Queue
{
	char* arr;
	int size;
public:
	Queue();

	void enqueue(char symb);

	bool isEmpty()const;

	char dequeue();

	void rotate();

	void print();

	void randomRotate();

	char getFront()const;

	char getMiddle()const;

	char getEnd()const;
	
	void check();

	~Queue();
};

