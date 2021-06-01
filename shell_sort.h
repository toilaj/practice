//
// Created by toilaj on 2021/6/1.
//

#ifndef ALGORITHM_SHELL_SORT_H
#define ALGORITHM_SHELL_SORT_H

#include "common.h"

class shell_sort : public common{

public:
    shell_sort(int *s, int cnt) : common(s, cnt, "shell sort") {};
    ~shell_sort() = default;
    void sort() override;
};


#endif //ALGORITHM_SHELL_SORT_H
