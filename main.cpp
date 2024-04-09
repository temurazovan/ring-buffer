#include <iostream>
#include <vector>

void printVector(std::vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
}

int main() {
    std::vector<int> vec(20);
    int value = 0;

    std::cout << "Input up to 20 elements: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cin >> value;
        if (value != -1) {
            vec[i] = value;
        }
        if (value == -1) {
            printVector(vec);
        }
    }

}
