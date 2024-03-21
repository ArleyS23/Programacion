#include <iostream>

using namespace std;

// Estructura del nodo de la lista
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Clase de la lista doblemente enlazada
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    // Función para agregar un elemento al final de la lista
    void add(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = tail;

        if (tail != NULL) {
            tail->next = newNode;
        }
        else {
            head = newNode;
        }

        tail = newNode;
    }

    // Función para imprimir la lista en orden inverso
    void printReverse() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    // Función para imprimir la lista en orden ascendente
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList myList;
    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.print();
    myList.printReverse();

    return 0;
}