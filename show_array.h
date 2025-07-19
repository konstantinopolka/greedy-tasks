#ifndef SHOW_ARRAY_H
#define SHOW_ARRAY_H

#include <vector>
#include <iostream>

inline void show_array(const std::vector<int>& arr) {
    for (const int& val : arr) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}

#endif // SHOW_ARRAY_H