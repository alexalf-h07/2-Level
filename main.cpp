#include <iostream>
#include <vector>
#include "sortings.hpp"

using namespace std;

// Функция для вывода массива на экран
void printArray(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    // Исходный массив для тестирования
    vector<int> original_data = { 64, 34, 25, 12, 22, 11, 90, 45, 88, 1 };

    cout << "--- Исходный массив ---\n";
    printArray(original_data);
    cout << "-----------------------\n\n";

    // 1. Пузырьковая сортировка
    vector<int> data1 = original_data;
    bubbleSort(data1);
    cout << "1. Bubble Sort:\n";
    printArray(data1);

    // 2. Сортировка выбором
    vector<int> data2 = original_data;
    selectionSort(data2);
    cout << "\n2. Selection Sort:\n";
    printArray(data2);

    // 3. Сортировка вставками
    vector<int> data3 = original_data;
    insertionSort(data3);
    cout << "\n3. Insertion Sort:\n";
    printArray(data3);

    // 4. Сортировка слиянием
    vector<int> data4 = original_data;
    mergeSort(data4, 0, data4.size() - 1); // Передаем индексы начала и конца
    cout << "\n4. Merge Sort:\n";
    printArray(data4);

    // 5. Быстрая сортировка
    vector<int> data5 = original_data;
    quickSort(data5, 0, data5.size() - 1); // Передаем индексы начала и конца
    cout << "\n5. Quick Sort:\n";
    printArray(data5);

    // 6. Пирамидальная сортировка
    vector<int> data6 = original_data;
    heapSort(data6);
    cout << "\n6. Heap Sort:\n";
    printArray(data6);

    return 0;
}