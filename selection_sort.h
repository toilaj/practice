//
// Created by toilaj on 2021/5/31.
//

#ifndef ALGORITHM_SELECTION_SORT_H
#define ALGORITHM_SELECTION_SORT_H
#include "common.h"
using namespace std;

class selection_sort : public common{

public:
    selection_sort(int *s, int cnt, string name): common(s, cnt, name) {};
    ~selection_sort() override = default;
    void sort() override;
};


#endif //UNTITLED2_SELECTION_SORT_H
