
#include <iostream>
#include <vector>

void binarySort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr = {5, 3, 8, 4, 2};

    binarySort(arr);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
