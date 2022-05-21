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
typedef std::deque<std::string> prefix;
typedef std::map<prefix, std::vector<std::string>> val;
class Gen {
 private:
    std::string data;
    std::vector<string> words;
    typedef deque<string> prefix;
    map<prefix, vector<std::string> > statetab;
    int NPREF, MAXGEN;
 public:
    Gen(std::string arr, int val1, int val2);
    std::string getText();
    Gen(map<prefix, vector<std::string> > val, vector<std::string> words, int, int);
};
