//
// Created by hloi on 3/12/2024.
//
#include <fstream>
#include <stdexcept>

#include "ReviewList.h"

using namespace std;

ReviewList::ReviewList(string name) {
    this->name = name;
}

void ReviewList::readReview(string filename) {
    ifstream f;
    f.open(filename);
    if (!f.is_open()) {
        throw "file not found.";
    }
    getline(f, name);

    while (!f.eof()) {
        string line;

        getline(f, line);
        istringstream iss(line);
        Review r;
        iss >> r;
    }

}
