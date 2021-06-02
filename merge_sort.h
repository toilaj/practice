//
// Created by toilaj on 2021/6/2.
//

#ifndef ALGORITHM_MERGE_SORT_H
#define ALGORITHM_MERGE_SORT_H

#include "common.h"

class merge_sort : public common {

public:
    merge_sort(int *s, int cnt) : common(s, cnt, "merge sort") {};
    ~merge_sort()  override = default;
    void sort() override;
private:
    static void merge(vector<int> &vc, int start, int mid, int end);
    void merge_ready(vector<int> &vc, int start, int end);
};


#endif //ALGORITHM_MERGE_SORT_H
