//
// Created by toilaj on 2021/6/1.
//

#include "insert_sort.h"

/* i - 从第二个元素开始向后遍历，i之前认为是插入排序的有序区
 * j - 在有序区内，比较待插入元素大小，确定插入位置，然后从插入位置向后拷贝覆盖，最终留出待插入的位置。
 * */
void insert_sort::sort() {
    int i;
    int j;
    int insert;
    insert = m_vector.at(0);
    for(i = 1; i < m_vector.size(); i++) {
        insert = m_vector.at(i);
        j = i - 1;
        for(; (j >= 0) && (insert < m_vector.at(j)); j--) {
            m_vector.at(j + 1) = m_vector.at(j);
        }
        m_vector.at(j + 1) = insert;
    }

}
