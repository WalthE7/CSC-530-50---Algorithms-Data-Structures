#include <iostream>
using namespace std;

struct Stack {
    int data[100];
    int top;

    Stack() { top = -1; }

    bool push(int x) {
        if (top == 99) return false;
        top++;
        data[top] = x;
        return true;
    }

    bool pop(int &out) {
        if (top == -1) return false;
        out = data[top];
        top--;
        return true;
    }

    void display() {
        cout << "Stack (bottom -> top): ";
        if (top == -1) { cout << "empty\n"; return; }
        for (int i = 0; i <= top; i++) cout << data[i] << " ";
        cout << "\n";
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();

    int v;
    if (st.pop(v)) cout << "Popped: " << v << "\n";
    st.display();

    return 0;
}
