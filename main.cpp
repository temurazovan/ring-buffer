#include <iostream>
#include <vector>

int printVector(std::vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
}

int main() {
    std::vector<int> vec(20);
    int value = 0;

    for (int i = 0; i < vec.size(); i++) {
        std::cin >> value;
        vec[i] = value;
        if (value == -1) {
            for (int i = 0; i < vec.size(); i++) {
                std::cout << vec[i] << " ";
            }
        }
    }

    printVector(vec);

}