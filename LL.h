#pragma once
#include "Node.h"
template <class T>
class LL {
private:
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;
	int len;
public:
	LL(T in) {
		head = new Node<T>(in);
		tail = head->next;
		len = 1;
	}
	LL() {
		head = nullptr;
		tail = nullptr;
		len = 0;
	}
	bool isEmpty() {
		return head == nullptr;
	}
	int getLen() {
		return len;
	}
	void add(T in) {
		len++;
		Node<T>* temp = new Node<T>(in);
		if (isEmpty()) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}
	void remove(T in) {
		if (head == nullptr) { return; }
		if (head->data == in) {
			delete head;
			head = nullptr;
			len--;
			return;
		}
		Node<T>* temp = head;
		while (temp->next != nullptr && temp->next->data != in) {
			temp = temp->next;
		}
		if (temp->next == nullptr) {
			return;
		}
		Node<T>* node = temp->next;
		temp->next = temp->next->next;
		delete node;
		len--;
	}
	T* get(T in) {
		Node<T>* temp = head;
		while (temp->next != nullptr && temp->data != in) { //data created class type needs != and == operator overloads
			temp = temp->next;
		}
		if (temp->data == in) {
			return &temp->data;
		}
		return nullptr;
	}
	T* toArr() {
		Node<T>* temp = head;
		T* arr = new T[len];
		int i = 0;
		while (i < len) {
			arr[i] = temp->data;
			temp = temp->next;
			i++;
		}
		return arr;
	}
	void debug_print() {
		Node<T>* temp = head;
		if (temp != nullptr) {
			std::cout << std::string(temp->data);
		}
		else {
			return;
		}
		while (temp->next != nullptr) {
			temp = temp->next;
			std::cout << ", and " << std::string(temp->data);
		}
	}

};