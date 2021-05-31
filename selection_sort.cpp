//
// Created by toilaj on 2021/5/31.
//

#include "selection_sort.h"

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
