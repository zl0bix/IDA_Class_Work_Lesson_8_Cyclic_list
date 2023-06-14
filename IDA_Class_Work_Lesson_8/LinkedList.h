#pragma once
#include "Node.h"
#include <iostream>

class LinkedList
{
private:
	Node* _head;
	Node* _tail;
	int _size;

public:
	LinkedList();
	void AddTail(int data)
	{
		Node* newTail = new Node(data);
		_size++;
		if (_head == nullptr)
		{
			_head = newTail;
			_tail = newTail;
			return;
		}

		_tail->prev = newTail;
		newTail->next = _tail;

		_head->next = newTail;
		_tail = newTail;

		_tail->prev = _head;
	}

	void AddHead(int data)
	{
		Node* newHead = new Node(data);
		_size++;
		if (_head == nullptr)
		{
			_head = newHead;
			_tail = newHead;
			return;
		}

		_head->next = newHead;
		newHead->prev = _head;

		newHead->next = _tail;
		_head = newHead;

	}
	void ShowList()
	{
		int count = 0;
		if (_size == 0) std::cout << "\nNo elements";
		//for (Node* nodePtr = _head; nodePtr->next != _head; nodePtr = nodePtr->next)
		//for (Node* nodePtr = _head; count <= _size; nodePtr = nodePtr->next)
		//for (Node* nodePtr = _head; count < _size; nodePtr = nodePtr->next)
		for (Node* nodePtr = _head; count < _size; nodePtr = nodePtr->prev)
		{
			std::cout << "Data: " << nodePtr->GetData() << "\n";
			count++;
		}

	}
	void DeleteElement(int index_to_delete)
	{
		//if (obj_to_delete = nullptr)
		Node* obj_to_delete = FindElement(index_to_delete);

		/*if (obj_to_delete == _head)
		{

		}*/


		//if (obj_to_delete == nullptr) return;
	/*	if (_size == 2 && index_to_delete == 1)
		{
			obj_to_delete->next->next = nullptr;
			obj_to_delete->next->prev = nullptr;
			_size--;
			return;
		}*/



		obj_to_delete->prev->next = obj_to_delete->next;
		obj_to_delete->next->prev = obj_to_delete->prev;

		if (obj_to_delete == _head)
		{
			_head = obj_to_delete->prev;
		}
		if (obj_to_delete == _tail)
		{
			_tail = obj_to_delete->next;
		}


		delete obj_to_delete;
		_size--;

	}
	Node* FindElement(int index)
	{
		//if (index <0 || index > _size - 1) return nullptr;
		//if (index == 1) return _head;

		Node* nodePtr = _head;
		while (index != 0)
		{
			nodePtr = nodePtr->prev;
			index--;
		}
		return nodePtr;
	}
	void DeleteList()
	{
		Node* node_ptr = _tail;
		while (_size > 0)
		{
			node_ptr = node_ptr->next;
			delete(_tail);
			_tail = node_ptr;
			_size--;
		}
	}

};


