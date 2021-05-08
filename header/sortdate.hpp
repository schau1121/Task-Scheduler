#ifndef __SORTDATE_HPP__
#define __SORTDATE_HPP__

#include "sortstrategy.hpp"

class SortByDate : public SortStrategy {
public:
    SortByDate() {};
    virtual vector<Base*> sort(vector<Base*> priorityQueue, int numSubTasks);
};

#endif
