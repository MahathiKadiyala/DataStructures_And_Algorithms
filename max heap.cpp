
#include <iostream>
using namespace std;

#define MAX 100

/* ---------------- MAX HEAP ---------------- */
class MaxHeap {
    int arr[MAX];
    int size;

public:
    MaxHeap() { size = 0; }

    void insert(int val) {
        arr[size] = val;
        int i = size;
        size++;

        // Heapify Up
        while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void deleteRoot() {
        if (size == 0) {
            cout << "Heap is empty\n";
            return;
        }

        arr[0] = arr[size - 1];
        size--;

        // Heapify Down
        int i = 0;
        while (2 * i + 1 < size) {
            int largest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < size && arr[left] > arr[largest])
                largest = left;

            if (right < size && arr[right] > arr[largest])
                largest = right;

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else break;
        }
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
/* ---------------- MAIN FUNCTION ---------------- */
int main() {
    MaxHeap maxH;

    cout << "Max Heap:\n";
    maxH.insert(10);
    maxH.insert(20);
    maxH.insert(5);
    maxH.insert(30);

    maxH.display();

    maxH.deleteRoot();
    cout << "After deletion:\n";
    maxH.display();
    return 0;
}