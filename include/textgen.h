// Copyright 2022 UNN-IASR
#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <sstream>
#include <fstream>
#include <random>
#INCLUDE_TEXTGEN_H_

class Gen {
using namespace std;
 private:
    string data;
    vector<string> words;
    typedef deque<string> prefix;
    map<prefix, vector<string> > statetab;
    int NPREF;
    int MAXGEN;
 public:
    Gen(string arr, int val1, int val2);
    string getText();
    Gen(map<prefix, vector<string> > val, vector<string> words, int v1, int v2);
};
