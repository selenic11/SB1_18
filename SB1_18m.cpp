// SB1_18m.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>

class Stack {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* root;

public:
    Stack() : root(nullptr) {}

    void push(const T& val) {

        Node* newStack = new Node;
        newStack->data = val;
        newStack->next = root;
        root = newStack;

    }

    T pop() {
        if (root == nullptr) {
            throw length_error("Stack is empty");
        }
        Node* delStack = root;
        T val = delStack->data;
        root = delStack->next;
        delete delStack;
        return val;
    }

    void print() {
        while (!(root == nullptr)) //печатаем все что в стеке
        {
            cout << pop() << " ";
        }
        cout << endl;
    }

    ~Stack() {
        while (!(root == nullptr)) {
            pop();
        }
    }

};




int main() {
    int n;
    cin >> n;
    Stack <int> stackI;
    Stack <double> stackD;
    Stack <float> stackF;
    Stack <string> stackS;

    int c = 0;

    while (c++ != n)
    {
        int temp;
        cin >> temp;
        stackI.push(temp);
    }

    c = 0;

    while (c++ != n)
    {
        double temp;
        cin >> temp;
        stackD.push(temp);
    }

    c = 0;

    while (c++ != n)
    {
        float temp;
        cin >> temp;
        stackF.push(temp);
    }

    c = 0;

    while (c++ != n)
    {
        string temp;
        cin >> temp;
        stackS.push(temp);
    }

    stackI.print();
    stackD.print();
    stackF.print();
    stackS.print();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
