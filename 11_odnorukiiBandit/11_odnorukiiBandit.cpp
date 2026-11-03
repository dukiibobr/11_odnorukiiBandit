#include <stdlib.h>
#include <ctime>
#include "Queue.h"
#include <iostream>
#include <limits>



int main()
{
	srand(time(0));


	Queue q1,q2,q3;

	q1.enqueue('@');
	q1.enqueue('%');
	q1.enqueue('*');

	q2.enqueue('@');
	q2.enqueue('%');
	q2.enqueue('*');

	q3.enqueue('@');
	q3.enqueue('%');
	q3.enqueue('*');

	while (true)
	{
		cout << "press enter to spin" << endl;
		cin.get();

		q1.randomRotate();
		q2.randomRotate();
		q3.randomRotate();

		cout << q1.getFront() << " | ";
		cout << q2.getFront() << " | ";
		cout << q3.getFront() << endl;


		if (q1.getFront() == q2.getFront() &&
			q2.getFront() == q3.getFront())
		{
			cout << "Big win!" << endl;
		}
		else if (q1.getFront() == q2.getFront() ||
			q1.getFront() == q3.getFront() ||
			q2.getFront() == q3.getFront())
		{
			cout << "Small win!" << endl;
		}
		else
		{
			cout << "No win!" << endl;
		}
		

	}
	
}


