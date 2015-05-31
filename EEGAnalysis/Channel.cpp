//
//  Channel.cpp
//  EEGAnalysis
//
//  Created by Ryan Van Soelen on 5/30/15.
//  Copyright (c) 2015 Mssn. All rights reserved.
//

#include "Channel.h"
#include <vector>
#include <iostream>
using namespace std;

vector<double> Channel::data() {
    return _data;
}

void Channel::printData() {
    for(vector<double>::iterator it = _data.begin(); it != _data.end(); it++) {
        cout<<*it<<", ";
    }
    cout<<endl;
}