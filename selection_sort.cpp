//
// Created by toilaj on 2021/5/31.
//

#include "selection_sort.h"
/*
 * i - 遍历前n-1个元素（第n个元素不需要遍历因为最后一个位置已经成序）
 * j - 从i后一个元素开始遍历并与当前最小元素比较，目的是找出第i个元素后续元素中最小的一个
 * 如果最小一个不是当前第i个，则交换他们，保证前第i个是剩下后续元素中最小的，最后就从小到大排列了。
 */
void selection_sort::sort() {
    int i;
    int j;
    int tmp;
    int min_index;
    for(i = 0; i < m_vector.size() - 1; i++) {
        min_index = i;
        for(j = i + 1; j < m_vector.size(); j++) {
            if(m_vector.at(j) < m_vector.at(min_index)) {
                min_index = j;
            }
        }
        if(min_index != i) {
            tmp = m_vector.at(i);
            m_vector.at(i) = m_vector.at(min_index);
            m_vector.at(min_index) = tmp;
        }
    }
}
