//
// Created by toilaj on 2021/5/31.
//

#ifndef ALGORITHM_BUBBLE_SORT_H
#define ALGORITHM_BUBBLE_SORT_H

#include "common.h"

using namespace std;

class bubble_sort : public common{

public:
    bubble_sort(int *s, unsigned int cnt, string name) : common(s, cnt, name) {};
    void sort() override;
    ~bubble_sort() override = default;
};


#endif //UNTITLED2_BUBBLE_SORT_H
