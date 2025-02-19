//
// Created by HP on 4/21/2018.
//
#include <string>
#include <iostream>
#include <string>
#include <regex>
#include <map>


#ifndef ASSEMBLERPASS1_OPGROUPS_H
#define ASSEMBLERPASS1_OPGROUPS_H
using namespace std ;

class OpGroups {
protected:
     int size;
    map < string, int > operationsList;
    map < string, string > obcode;
public:
        int getSize();
    virtual bool checkOperand(std::string currentOperand,  std::string operation) = 0;
    virtual std::string getOperationObCode(std::string operation) = 0;

};


#endif //ASSEMBLERPASS1_OPGROUPS_H
