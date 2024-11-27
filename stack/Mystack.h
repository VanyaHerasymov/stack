#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace myStack {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) { info = value; next = prev = nullptr; }
	};


	template <typename U>
	class Stack {
		Node<U>* head;
		Node<U>* current;
	public:
		Stack() { 
			head = current = nullptr;

		}
		~Stack() {
			while (!isEmpty()) {
				pop_back();
			}
		}

		bool isEmpty()const {
			return head == nullptr;
		}
		U top()const {
			if (isEmpty())throw "stack is empty";

			return current->info;
		}
		void push_back(U value) { 
			Node <U>* el = new Node<U>(value);
			if (isEmpty()) head = current = el;
			else {
				current->next = el;
				el->prev = current;
				current = el;
			}

		}
		void pop_back() {
			if(!isEmpty())
				if (current != head) {
					current = current->prev;
					delete current->next;
					current->next = nullptr;
				}
				else {
					delete head;
					head = current = nullptr;
				}
		}
		void showStack()const { 
			if (isEmpty())cout << "Empty";
			else {
				Node <U>* p = head;
				while (p != NULL) {
					cout << p->info << " ";
					p = p->next;
				}
				cout << endl;
			}
		
		}
	};
}
	;
