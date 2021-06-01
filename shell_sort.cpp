//
// Created by toilaj on 2021/6/1.
//

#include "shell_sort.h"
/*
 * 希尔排序其实就是加了预处理的插入排序
 * 预处理的过程其实就是按增量间隔d进行插入排序
 * */
void shell_sort::sort() {
    int d = m_vector.size();
    int i, j, k;
    int insert;
    while (d > 1) {
        d >>= 1;
        for(i = 0; i < d; i++) {
            /*以d为增量的插入排序流程(直接插入排序是以1为增量)*/
            for(j = i + d; j < m_vector.size(); j += d) {
                insert = m_vector.at(j);
                for(k = j - d; (k >= 0) && (m_vector.at(k) > insert); k -= d) {
                    m_vector.at(k + d) = m_vector.at(k);
                }
                m_vector.at(k + d) = insert;
            }
        }
    }
}
