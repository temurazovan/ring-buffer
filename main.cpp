#include <iostream>
#include <vector>
#include <algorithm>

void printVector(std::vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
}

int main() {
    std::vector<int> vec;
    int value = 0;

    std::cout << "Input up to 20 elements: ";

    while (true) {
        std::cin >> value;
        if (value == -1) {
            break;
        }
        if (vec.size() >= 20) {
            vec.erase(vec.begin());
        }
        vec.push_back(value);
    }

    printVector(vec);

}
