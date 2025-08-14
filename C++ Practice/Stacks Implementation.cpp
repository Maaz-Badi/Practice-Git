#include <iostream>

void push(int stack[],int max_size, int& top, int value) {
    if (top == (max_size-1)) {  // MAX_SIZE - 1
        std::cout << "Stack overflow\n";
        return;
    }
    stack[++top] = value;
    std::cout << "Pushed: " << value << "\n";
}

int pop(int stack[], int& top) {
    if (top == -1) {
        std::cout << "Stack underflow\n";
        return -1;
    }
    return stack[top--];
}

void display(int stack[], int top) {
    if (top == -1) {
        std::cout << "Stack is empty\n";
        return;
    }
    for (int i = 0; i <= top; i++) {
        std::cout << stack[i] << " ";
    }
    std::cout << "\n";
}
int main(){
    const int MAX_SIZE = 10;
    int stack[MAX_SIZE];
    int top = -1;

    push(stack, MAX_SIZE,top, 5);  
    push(stack, MAX_SIZE,top, 2);  
    push(stack, MAX_SIZE,top, 3);  
    push(stack, MAX_SIZE,top, 10);  
    push(stack, MAX_SIZE,top, 23);  
    push(stack, MAX_SIZE,top, 21);  
    push(stack, MAX_SIZE,top, 22);  
    
    display(stack, top);  
    
    std::cout << "Popped: " << pop(stack, top) << std::endl;
    display(stack, top);
    push(stack, MAX_SIZE,top, 11);
    display(stack, top);  
    
    return 0;
}