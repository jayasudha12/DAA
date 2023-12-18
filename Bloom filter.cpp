#include <iostream>
#include <functional>
#include <bitset>

const int size = 1000;
std::bitset<size> filter;
std::hash<int> hashFunction1;
std::hash<int> hashFunction2;

void insert(int key) {
    size_t index1 = hashFunction1(key) % size;
    size_t index2 = hashFunction2(key) % size;

    filter[index1] = true;
    filter[index2] = true;
}

bool contains(int key) {
    size_t index1 = hashFunction1(key) % size;
    size_t index2 = hashFunction2(key) % size;

    return filter[index1] && filter[index2];
}

int main() {
    insert(3);
    insert(2);
    insert(1);

    std::cout << "Contains '1': " << std::boolalpha << contains(1) << std::endl;
    std::cout << "Contains '6': " << std::boolalpha << contains(6) << std::endl;

    return 0;
}
