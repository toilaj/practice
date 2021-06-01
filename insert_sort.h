//
// Created by toilaj on 2021/6/1.
//

#ifndef ALGORITHM_INSERT_SORT_H
#define ALGORITHM_INSERT_SORT_H
#include "common.h"

class insert_sort : public common {
    
public:
    insert_sort(int *s, int cnt) : common(s, cnt, "insert sort") {};
    ~insert_sort() override = default;
    void sort() override;
};


#endif //ALGORITHM_INSERT_SORT_H
