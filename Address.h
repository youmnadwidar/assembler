//
// Created by karim on 4/25/2018.
//

#ifndef ASSEMBLERPASS1_ADDRESS_H
#define ASSEMBLERPASS1_ADDRESS_H

#include <iostream>
#include <vector>
#include "Operations.h"
#include "Line.h"
#include "Literal.h"
#include <string.h>

using namespace std;

class Address {
public:
    Address();
    vector<Line> setAddresses(vector<Line> configuredLines,map<string , Literal> &litTab);

private:
    vector<string> addresses;
};


#endif //ASSEMBLERPASS1_ADDRESS_H