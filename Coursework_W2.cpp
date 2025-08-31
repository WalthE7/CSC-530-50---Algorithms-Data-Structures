#include <iostream>
#include <string>
using namespace std;

class PrintQueue {
private:
    string queue[100];  // arreglo para guardar los documentos
    int front, rear;

public:
    PrintQueue() {
        front = 0;
        rear = -1;
    }

    // Agregar trabajo
    void addJob(string doc) {
        rear++;
        queue[rear] = doc;
    }

    // Procesar trabajo
    void processJob() {
        if (front > rear) {
            cout << "No jobs to process." << endl;
            return;
        }
        cout << "Processing: " << queue[front] << endl;
        front++;
    }

    // Mostrar cola
    void showQueue() {
        if (front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PrintQueue pq;
    string doc;

    // Input del usuario (Doc1, Doc2)
    cin >> doc;
    pq.addJob(doc);

    cin >> doc;
    pq.addJob(doc);

    // Mostrar cola
    pq.showQueue();

    // Procesar primer trabajo
    pq.processJob();

    // Mostrar cola nuevamente
    pq.showQueue();

    return 0;
}
