#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 3};
    int n = a.size();

    int total = 1 << n; 

    for (int mask = 0; mask < total; ++mask) {
        std::cout << "{ ";
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                std::cout << a[i] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}