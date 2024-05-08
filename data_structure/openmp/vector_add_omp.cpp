// 文件：vector_add_omp.cpp
#include <iostream>
#include <vector>

int main() {
    const int n = 10;
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> v2 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> v3(n);

    #pragma omp parallel for
    for (int i = 0; i < n; ++i)
        v3[i] = v1[i] + v2[i];

    for (int i = 0; i < n; ++i)
        std::cout << v3[i] << " ";
    std::cout << std::endl;

    return 0;
}
