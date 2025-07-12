#include <iostream>
#include <string>
#include <stack>

// This program implements a stack-based structure to manage percentage values.
// It allows users to push and pop values, simulating a percentage point system.
// The stack is used to store the first percentage point, the end percentage point, and the calculated value.
// The user can interact with the stack through a simple menu system.
// The program continues to run until the user decides to exit, allowing for multiple operations on the stack.
// The stack is initialized with a default value of 100, and users can add or remove percentage points as needed.
// The program also keeps track of the number of elements in the stack and displays relevant information after each operation.
// is equired to initialize the stack and manage the input/output operations.
//     ~_Winit();
// is valid for the current version of the C++ standard library.

int main() {

	std::cout << "Wellcome to Delta Parcent Method Structuer." << std::endl;

	// Initialize the manage Target remain name.
	std::string Target;

	std::stack<int> s;
	int V = 100;
	// Push elements onto the stack
	s.push(V);
	// Display the topelement
	std::cout << "i send first value:" << s.top() << std::endl;
	// Pop an element from the stack

	s.push(0);
	s.push(0);

	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;

	E++;

	std::cout << "Stack initialized with value for Consecesed: " << Target << std::endl;
	

	do {
		std::cout << "1:push 2:pop 3:end."<<std::endl;
	
		std::cin >> A;
		if(A== 1) {

			std::cout << "Enter a value to push onto the stack: Parcent point at First. ";
			std::cin >> C;
			s.push(C);
			std::cout << "Pushed " << C << " onto the stack." << std::endl;

			std::cout << "Enter a value to push onto the stack: Parcent point at End.";			
			std::cin >> D;
			s.push(D);
			std::cout << "Pushed " << D << " onto the stack." << std::endl;

			std::cout << "Enter a value to push onto the stack: Value. Range:0 - 100. ";
			//std::cin >> B;
			B = D - C;
			s.push(B);
			std::cout << "Pushed " << B << " onto the stack." << std::endl;
			
			std::cout << "Value:"<<B<<" "<<"First % position:"<<C<<" "<<"End % position:"<<D<<" is new." << std::endl;
			V = B;
			E++;
		} else if (A == 2) {
			if (!s.empty()) {
				//Before popping, check if the stack has enough elements.

				std::cout << "Popping values from the stack..." <<V<< std::endl;

				D = s.top();
				s.pop();
				std::cout << "Popped " << D << " from the stack this is end." << std::endl;
				C = s.top();
				s.pop();
				std::cout << "Popped " << C << " from the stack. this is first." << std::endl;
				B = s.top();
				s.pop();
				std::cout << "Popped " << B << " from the stack.this is value." << std::endl;
				
				std::cout << V <<"'s Parcent:"<<B<<","<<"First % position:"<<C<<","<<"End % position:"<<D<<" is old." << std::endl;
				V = B;
				E--;
			} else {
				std::cout << "Stack is empty, cannot pop." << std::endl;
			}
		} else if (A == 3) {
			std::cout << "Exiting..." << std::endl;
			break;
		} else {
			std::cout << "Invalid option, please try again." << std::endl;
		}
		std::cout << "Current value count: " << E << std::endl;
	} while (!s.empty());
	// Check if the stack is empty
	if (s.empty()) {
		std::cout << "Stack is empty." << std::endl;
	} else {
		std::cout << "Stack is not empty." << std::endl;
	}
	std::cout << "How feel." << std::endl;
	return 0;
}
