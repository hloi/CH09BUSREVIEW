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
        if (!line.empty()) {
            istringstream iss(line);
            Review r;
            iss >> r;
            addReview(r);
        }
    }
    f.close();
}

void ReviewList::addReview(Review &r) {
    reviewList.push_back(r);
}

ostream &operator<<(ostream &out, ReviewList &revList) {
    for (size_t i=0; i<revList.reviewList.size(); i++) {
        out << revList.reviewList.at(i) << endl;
    }
    return out;
}

void ReviewList::saveReview(string filename) {
    ofstream out;
    out.open(filename);
    if (!out.is_open()) {
        throw "can't write to file.";
    }
    out << name << endl;
    out << *this;
    out.close();

}
