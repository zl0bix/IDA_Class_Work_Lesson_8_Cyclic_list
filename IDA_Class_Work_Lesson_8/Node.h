#pragma once


class Node
{
	int _data;
public:
	Node* next;
	Node* prev;
	Node(int data) : _data{ data }, next{ nullptr }, prev{ nullptr } {}
	int GetData() { return _data; }

};

