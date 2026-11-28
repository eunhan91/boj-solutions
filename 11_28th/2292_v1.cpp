#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int layer = 1;
    int last = 1;

    while (n > last) {
        last += 6 * layer;
        ++layer;
    }

    std::cout << layer << '\n';
}