#include <iostream>

class Stack {

	int* arr;
	int top = -1;
	int size = 0;

	public:
	Stack(int size) {
		arr = (int*)malloc(size * sizeof(int));
		this->size = size;
	}

	void push(int num) {
		if(top < size - 1) arr[++top] = num;
	}

	int pop() {
		if(top > -1) return arr[top--];
		return 0;
	}

	bool isEmpty() {
		if(top == -1) return true;
		return false;
	}

	bool isFull() {
		if(size == top + 1) return true;
		return false;
	}

	int peek(int idx) {
		if(top >= idx)	return arr[idx];
		return 0;
	}

	int count() {
		return top+1;
	}

	void display() {
		for(int i = 0; i <= top; i++) {
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
	}

};