//
// Created by HP on 4/24/2018.
//

#include "OpGroup4.h"
using namespace std ;

OpGroup4::OpGroup4() {

    size = 2 ;

}

std::string OpGroup4::getOperationObCode(std::string operation) {}
bool OpGroup4::checkOperand(std::string currentOperand, std::string operation) {

    string s = "^[0-9]{1,4}$";

    regex m (s);
    if (regex_match(currentOperand , m)){
        return true ;
    }
    return false;

}

