//
// Created by lixiang on 2020-05-27.
//

#include "testSet.h"
#include "set"

int main() {
    std::set<int> test_set;//STL set
    const int A_LEN = 7;
    const int B_LEN = 8;

    int a[A_LEN] = {5, 1, 4, 8, 10, 1, 3};
    int b[B_LEN] = {2, 7, 6, 3, 1, 6, 0, 1};
    for (int i = 0; i < A_LEN; i++) {
        test_set.insert(a[i]);
    }
    for (int i = 0; i < B_LEN; i++) {
        if (test_set.find(b[i]) != test_set.end()) {
            printf("b[%d]=%d in array A.\n", i, b[i]);
        }
    }
    return 0;


}
