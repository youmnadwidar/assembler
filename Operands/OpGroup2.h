//
// Created by HP on 4/24/2018.
//

#ifndef ASSEMBLERPASS1_OPGROUP2_H
#define ASSEMBLERPASS1_OPGROUP2_H


#include "OpGroups.h"

class OpGroup2 : public OpGroups {
public:
    OpGroup2();
    bool checkOperand(std::string currentOperand) override ;


};


#endif //ASSEMBLERPASS1_OPGROUP2_H
