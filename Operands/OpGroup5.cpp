//
// Created by HP on 4/24/2018.
//

#include "OpGroup5.h"

using namespace std ;
OpGroup5::OpGroup5() {

    size = 2 ;
}
std::string OpGroup5::getOperationObCode(std::string operation) {}
bool OpGroup5::checkOperand(std::string currentOperand, std::string operation) {

    string s = "^([AXSFTBaxstfb])//,[0-9]{1,4}$";

    regex m (s);
    if (regex_match(currentOperand , m)){
        return true ;
    }
    return false;

}