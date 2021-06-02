//
// Created by toilaj on 2021/6/2.
//

#include "merge_sort.h"

void merge_sort::sort() {
    merge_ready(m_vector, 0, static_cast<int>(m_vector.size()) - 1);
}

void merge_sort::merge(vector<int> &vc, int start, int mid, int end) {
    vector<int> tmp_array(end - start + 1, 0) ;
    int p1 = start;
    int p2 = mid + 1;
    int p = 0;
    while((p1 <= mid) && (p2 <= end)) {
        if(vc.at(p1) <= vc.at(p2)) {
            tmp_array.at(p) = vc.at(p1);
            p++;
            p1++;
        }
        else {
            tmp_array.at(p) = vc.at(p2);
            p++;
            p2++;
        }
    }
    while(p1 <= mid) {
        tmp_array.at(p) = vc.at(p1);
        p++;
        p1++;
    }
    while(p2 <= end) {
        tmp_array.at(p) = vc.at(p2);
        p++;
        p2++;
    }
    p = 0;
    while(tmp_array.size() > p) {
        vc.at(start + p) = tmp_array.at(p);
        p++;
    }
}
/*
 * 按中间分组，一直分到每组只有两个元素
 * 然后每组内排序
 * 最后再把分组两两层层合并，合并的时候使用临时数组暂存有序结果。
 * */
void merge_sort::merge_ready(vector<int> &vc, int start, int end) {
    int mid;
    if(start < end) {
        mid = (start + end) / 2;
        merge_ready(vc, start, mid);
        merge_ready(vc, mid + 1, end);
        merge(vc, start, mid, end);
    }

}
