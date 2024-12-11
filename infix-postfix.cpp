#include<iostream>
#include<string>
using namespace std;

#define MAX 50
char post[MAX], in[MAX], stack[MAX];
int top = -1, toper = -1;

void insertpostfix(char x);
void insertstack(char x);
void popstack(char x);
int checkprec(char x);
void pop_all();

///////////////////main/////////////////////////////////////

int main() {
    int i, j, chk1, chk2;
    cout << "\nInsert an infix notation :: ";
    cin.getline(in, MAX);

    stack[++toper] = '(';  // Push '(' to stack
    in[strlen(in)] = ')';  // Append ')' at the end of the input string
    j = strlen(in);

    cout << "\nCharacter\tStack\tPostfix\n";
    for (i = 0; i < j; i++) {
        if ((in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' && in[i] <= 'Z') || (in[i] >= '0' && in[i] <= '9')) {
            insertpostfix(in[i]);  // Operand, add it to postfix expression
        }
        else if (in[i] == '(') {
            insertstack(in[i]);  // Open parenthesis, push to stack
        }
        else if (in[i] == '+' || in[i] == '-' || in[i] == '/' || in[i] == '*' || in[i] == '^') {
            chk1 = checkprec(in[i]);
            chk2 = checkprec(stack[toper]);
            if (chk1 > chk2) {
                insertstack(in[i]);  // Push operator to stack if it has higher precedence
            }
            else {
                popstack(in[i]);  // Pop from stack and add to postfix
            }
        }
        else if (in[i] == ')') {
            pop_all();  // Pop all operators until '(' is encountered
        }

        // Display status of the stack and postfix expression at each step
        cout << "\n" << in[i] << "\t\t";
        for (int k = 0; k <= toper; k++) {
            cout << stack[k];  // Display stack contents
        }
        cout << "\t";
        for (int k = 0; k <= top; k++) {
            cout << post[k];  // Display postfix expression
        }
    }

    cout << "\n\nFinal Postfix Notation :: " << post << endl;

    return 0;
}

///////////////////insertpostfix/////////////////////////////

void insertpostfix(char x) {
    top++;
    post[top] = x;  // Add operand to postfix expression
}

///////////////////insertstack///////////////////////////////

void insertstack(char x) {
    toper++;
    stack[toper] = x;  // Push operator to stack
}

///////////////////popstack///////////////////////////////////

void popstack(char x) {
    top++;
    post[top] = stack[toper];  // Pop operator from stack and add to postfix
    stack[toper] = x;  // Replace operator in stack with the new one
}

////////////////////pop_all////////////////////////////////////

void pop_all() {
    while (stack[toper] != '(') {
        top++;
        post[top] = stack[toper];  // Pop all operators from stack until '('
        stack[toper] = '\0';  // Clear stack
        toper--;
    }
    stack[toper] = '\0';  // Remove '(' from stack
    toper--;
}

////////////////////checkprec////////////////////////////////////

int checkprec(char x) {
    switch (x) {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    case '(':
        return 0;
    default:
        return 0;
    }
}
