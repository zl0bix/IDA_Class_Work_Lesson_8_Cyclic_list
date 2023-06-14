#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
//#include <algorithm>
#include "Service.h"
#include "LinkedList.h"


// Class Work 14.06.2023 -------------------------------------------	

//Task 1
void Task_1()
{
	int size = 5;
	LinkedList list;
	list.AddHead(555);
	for (int i = 0; i < size; i++)
		list.AddTail(i * 5);
	list.ShowList();

	//std::cout << "\n" << list.FindElement(2)->GetData();
	std::cout << "\n";

	//list.DeleteElement(0);
	list.DeleteElement(1);

	for (int i = 0; i < size; i++)
	{
		//list.DeleteElement(size);
		list.DeleteElement(0);
		list.ShowList();
		std::cout << "\n";
	}



	//list.ShowList();

	//list.DeleteList();

	list.ShowList();


}
//Task 2
void Task_2()
{
	
}

// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
Task_1();






std::cout << "\n\n";
system("pause");	
}

