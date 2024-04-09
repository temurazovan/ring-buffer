#include <iostream>
#include <vector>

void printVector(std::vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
}

int main() {
    std::vector<int> vec;
    int value = 0;

    std::cout << "Input up to 20 elements: ";

    std::cin >> value;
    while (value != -1) {
        if (vec.size() < 20) {
            vec.push_back(value);
        } else {
            for (int i = 0; i < 20; i++) {
                vec[i] = vec[i + 1];
                vec[vec.size() - 1] = value;
            }
        }
        while (vec.size() > 20){
            vec.pop_back();
        }
        std::cin >> value;
    }

    printVector(vec);

}
