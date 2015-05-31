//
//  EEGFile.h
//  EEGAnalysis
//
//  Created by Ryan Van Soelen on 5/30/15.
//  Copyright (c) 2015 Mssn. All rights reserved.
//

#ifndef EEGAnalysis_EEGFile_h
#define EEGAnalysis_EEGFile_h

#include <map>
#include <string>
#include "Channel.h"
using namespace std;


class EEGFile {
private:
    map<string, Channel *> _channels;
    string _title;
    string _dateRec;  //Date recorded
    string _timeRec;  //Time recorded
    string _subject;
    int _samplingRate; //(Hz)
    string _units;   //1 emotiv is nearly equivalent to 1 microvolt
    string _filename;
    
public:
    EEGFile(string filename);
    int numChannels();
    string title();
    string recDate();
    string recTime();
    string subject();
    int samplingRate();
    string units();
    map<string, Channel *> channels();
    Channel * getChannel(string name);
    string filename();
    
};


#endif
