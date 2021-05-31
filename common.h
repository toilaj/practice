//
// Created by toilaj on 2021/5/31.
//

#ifndef ALGORITHM_COMMON_H
#define ALGORITHM_COMMON_H

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class common {
public:
    common(int *s, unsigned int cnt, string name) : name(name){
        int i;
        for(i = 0; i < cnt; i++) {
            m_vector.push_back(s[i]);
        }
    };
    virtual ~common() {};
    virtual void sort() = 0;
    void print() {
        int i;
        cout << name + ':' << endl;
        for(i = 0; i < m_vector.size(); i++) {
            cout << m_vector.at(i)  << ' ';
        }
        cout << endl;
    };
protected:
     vector<int> m_vector;
     string name;
};


#endif //ALGORITHM_COMMON_H
