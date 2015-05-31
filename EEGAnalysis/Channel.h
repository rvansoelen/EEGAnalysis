//
//  Channel.h
//  EEGAnalysis
//
//  Created by Ryan Van Soelen on 5/30/15.
//  Copyright (c) 2015 Mssn. All rights reserved.
//

#ifndef EEGAnalysis_Channel_h
#define EEGAnalysis_Channel_h

#include <vector>
using namespace std;

class Channel {
    friend class EEGFile;
protected:
    vector<double> _data;
    vector<double> _freq;
    
public:
    vector<double> data();
    void printData();
    
};


#endif
