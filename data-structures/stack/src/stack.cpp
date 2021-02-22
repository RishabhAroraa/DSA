class Stack {

	int* head;
	int count = 0;

	Stack();
	Stack(const Stack&);
	Stack(int)

	// i hate c++
	void push(int);
	int pop();

	int peek();
	int count();

	bool isEmpty();
	bool isFull();

	void change(int,int);
	void display();
}