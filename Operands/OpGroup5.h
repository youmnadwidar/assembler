//
// Created by HP on 4/24/2018.
//

#ifndef ASSEMBLERPASS1_OPGROUP5_H
#define ASSEMBLERPASS1_OPGROUP5_H


#include "OpGroups.h"

class OpGroup5 : public OpGroups{
public:
    OpGroup5();
    bool checkOperand(std::string currentOperand) override ;


};


#endif //ASSEMBLERPASS1_OPGROUP5_H
