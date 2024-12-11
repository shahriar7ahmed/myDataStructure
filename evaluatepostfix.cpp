#include<iostream>
#include<stack>
#include<cctype>   // For isdigit() function

using namespace std;

class Stack {
    stack<int> s;   // C++ stack container

public:
    void push(int elem) {
        s.push(elem);
    }

    int pop() {
        int elem = s.top();
        s.pop();
        return elem;
    }

    bool isEmpty() {
        return s.empty();
    }

    int top() {
        return s.top();
    }
};

int main() {
    char pofx[50], ch;
    int i = 0, op1, op2;
    Stack stack;

    cout << "\n\nEnter the Postfix Expression: ";
    cin.getline(pofx, 50);   // Use cin.getline to read the expression

    cout << "\nSymbol\t\tStack\n";

    while ((ch = pofx[i++]) != '\0') {
        if (isdigit(ch)) {
            stack.push(ch - '0');   // Push the operand
        } else {
            // Operator, pop two operands
            op2 = stack.pop();
            op1 = stack.pop();
            switch (ch) {
                case '+':
                    stack.push(op1 + op2);
                    break;
                case '-':
                    stack.push(op1 - op2);
                    break;
                case '*':
                    stack.push(op1 * op2);
                    break;
                case '/':
                    stack.push(op1 / op2);
                    break;
            }
        }

        cout << "\n" << ch << "\t\t";
        stack<int> temp_stack = stack.s;  // Copy stack to print
        while (!temp_stack.empty()) {
            cout << temp_stack.top();
            temp_stack.pop();
        }
    }

    cout << "\nGiven Postfix Expression: " << pofx << endl;
    cout << "Result after Evaluation: " << stack.top() << endl;

    return 0;
}
