#include <iostream>
#include "../src/stack.cpp"

int main() {

	Stack st(10);
	for(int i = 0; !(st.isFull()); i++) {
		st.push(i*i);
	}
	st.display();

	while(!(st.isEmpty())) {
		std::cout << st.pop() << ' ';
	}

}