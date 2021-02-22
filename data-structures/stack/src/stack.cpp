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
		arr[++top] = num;
	}

	int pop() {
		return arr[top--];
	}

	bool isEmpty() {
		if(top == -1) return true;
		return false;
	}

	bool isFull() {
		if(size == top + 1) returm true;
		return false;
	}

	int peek(int idx) {
		if(top >= idx)	return arr[idx];
		return -1;
	}

	int count() {
		return top+1;
	}
}