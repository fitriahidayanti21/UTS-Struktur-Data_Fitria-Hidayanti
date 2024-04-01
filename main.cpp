#include <iostream>
using namespace std;

// Struktur untuk merepresentasikan data mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
};

// Node untuk linked list
struct Node {
    Mahasiswa data;
    Node* next;
};

// Fungsi untuk menampilkan array 1 dimensi
void displayArray(int arr[], int size) {
    cout << "Array 1 Dimensi:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk menampilkan array 2 dimensi
void display2DArray(int arr[][3], int rows, int cols) {
    cout << "Array 2 Dimensi:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menampilkan linked list
void displayLinkedList(Node* head) {
    cout << "Linked List:\n";
    while (head != nullptr) {
        cout << "Nama: " << head->data.nama << ", NIM: " << head->data.nim << endl;
        head = head->next;
    }
}

int main() {
    // Array 1 dimensi
    int array1D[] = {1, 2, 3, 4, 5};
    int size1D = sizeof(array1D) / sizeof(array1D[0]);
    displayArray(array1D, size1D);

    // Array 2 dimensi
    int array2D[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(array2D) / sizeof(array2D[0]);
    int cols = sizeof(array2D[0]) / sizeof(array2D[0][0]);
    display2DArray(array2D, rows, cols);

    // Linked list
    Node* head = new Node();
    head->data = {"John", 123};
    head->next = new Node();
    head->next->data = {"Doe", 456};
    head->next->next = nullptr;
    displayLinkedList(head);

    return 0;
}
