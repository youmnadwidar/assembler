//
// Created by HP on 4/24/2018.
//
#include <iostream>
#include <map>

#ifndef ASSEMBLERPASS1_OPGROUP1_H
#define ASSEMBLERPASS1_OPGROUP1_H
#include <string>


#include "OpGroups.h"

using namespace std ;

class OpGroup1 : public OpGroups
{
public:
    OpGroup1();
    bool checkOperand(std::string currentOperand ,  std::string operation) override ;
    std::string getOperationObCode(std::string operation) override;

    void setSize(int s);
};


#endif //ASSEMBLERPASS1_OPGROUP1_H
