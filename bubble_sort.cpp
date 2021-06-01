//
// Created by toilaj on 2021/5/31.
//
#include "bubble_sort.h"

/*
 * 基本排序算法
 * i - 轮数
 * j - 每轮遍历一遍，两两比较交换
 * */
void bubble_sort::sort() {
    int i;
    int j;
    int tmp;
    for(i = 0; i < m_vector.size(); i++) {
        for(j = i + 1; j < m_vector.size(); j++) {
            if(m_vector.at(i) > m_vector.at(j)) {
                tmp = m_vector.at(i);
                m_vector.at(i) = m_vector.at(j);
                m_vector.at(j) = tmp;
            }
        }
    }
}
