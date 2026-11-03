#include "Queue.h"

 Queue::Queue()
{
	arr = nullptr;
	size = 0;
}

  void Queue::enqueue(char symb) {

	 char* temp = new char[size + 1];

	 for (int i = 0; i < size; i++)
	 {
		 temp[i] = arr[i];
	 }
	 temp[size] = symb;

	 if (arr != nullptr)
		 delete[]arr;
	 arr = temp;
	 size++;
 }

  inline bool Queue::isEmpty() const {
	  return size == 0;
  }

   char Queue::dequeue() {
	  if (!isEmpty())
	  {
		  char first = arr[0];
		  char* temp = new char[size - 1];
		  for (int i = 1; i < size; i++)
			  temp[i - 1] = arr[i];

		  delete[]arr;
		  arr = temp;
		  size--;
		  return first;
	  }
	  return '\0';
  }

    void Queue::rotate() {
	   if (!isEmpty())
	   {
		   char first = dequeue();
		   enqueue(first);
	   }
   }

	 void Queue::print() {
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	  void Queue::randomRotate() {
		 int r = rand() % 11;

		 for (int i = 0; i < r; i++)
			 rotate();
	 }

	   char Queue::getFront() const {
		  if (size >= 1)
		  {
			  return arr[0];
		  }
		  return '\0';

	   }

	   char Queue::getMiddle() const {
		   if (size >= 2)
		   {
			   return arr[1];
		   }
		   return '\0';

	   }

	   char Queue::getEnd() const {
		   if (size >= 3)
		   {
			   return arr[2];
		   }
		   return '\0';

		}

		  void Queue::check() {
			  if (getFront() == getMiddle() &&
				  getMiddle() == getEnd())
			  {
				  cout << "Big win!" << endl;
			  }
			  else if (getFront() == getMiddle() ||
				  getFront() == getEnd() ||
				  getMiddle() == getEnd())
			  {
				  cout << "Small win!" << endl;
			  }
			  else
			  {
				  cout << "No win!" << endl;
			  }
		 }

  Queue::~Queue()
 {
	 if (arr != nullptr)
		 delete[]arr;
 }
