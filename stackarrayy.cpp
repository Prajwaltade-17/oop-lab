#include <iostream>

#define MAX_SIZE 100

using namespace std;
class Stack {
private:
    int top;
    int stackArray[MAX_SIZE];

const int MAX_SIZE = 5; // Maximum size of the list
public:
    Stack() {
        top = -1; // Initializing top to -1 to indicate an empty stack
    }

    bool isEmpty() {
        return top == -1;
    }

struct StaticList {
    int data[MAX_SIZE];
    int size;
    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    StaticList() {
        size = 0; // Initialize size to 0
    void push(int item) {
        if (isFull()) {
            std::cout << "Stack Overflow! Cannot push item " << item << std::endl;
            return;
        }
        stackArray[++top] = item;
        std::cout << item << " pushed into stack." << std::endl;
    }

    void insert(int value) {
        if (size < MAX_SIZE) {
            data[size++] = value; // Insert the value at the end and increment size
            cout << "Inserted " << value << " into the list." << endl;
        } else {
            cout << "List is full. Cannot insert " << value << "." << endl;
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow! Cannot pop from empty stack." << std::endl;
            return -1; // Assuming -1 as an error code for empty stack
        }
        return stackArray[top--];
    }

    void display() {
        cout << "List contents:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
            return -1; // Assuming -1 as an error code for empty stack
        }
        cout << endl;
        return stackArray[top];
    }
};

int main() {
    

    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element of stack: " << stack.peek() << std::endl;

    std::cout << stack.pop() << " popped from stack." << std::endl;
    std::cout << stack.pop() << " popped from stack." << std::endl;

    std::cout << "Top element of stack: " << stack.peek() << std::endl;

    return 0;
}
