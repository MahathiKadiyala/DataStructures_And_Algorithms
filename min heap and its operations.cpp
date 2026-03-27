#include<iostream>
using namespace std;
#define MAX 100
class MinHeap {
    int arr[MAX];
    int size;

public:
    MinHeap() { size = 0; }

    void insert(int val) {
        arr[size] = val;
        int i = size;
        size++;

        // Heapify Up
        while (i != 0 && arr[(i - 1) / 2] > arr[i]) {
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
            int smallest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < size && arr[left] < arr[smallest])
                smallest = left;

            if (right < size && arr[right] < arr[smallest])
                smallest = right;

            if (smallest != i) {
                swap(arr[i], arr[smallest]);
                i = smallest;
            } else break;
        }
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    MinHeap minH;

    cout << "\nMin Heap:\n";
    minH.insert(10);
    minH.insert(40); 
    minH.insert(5);
    minH.insert(15);

    minH.display();

    minH.deleteRoot();
    cout << "After deletion:\n";
    minH.display();

    return 0;
}
