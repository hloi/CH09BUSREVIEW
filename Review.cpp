//
// Created by hloi on 3/12/2024.
//
#include <iostream>
#include <string>

#include "Review.h"
using namespace std;

bool Review::operator==(Review &r) {
    return this->id == r.id && this->rating == r.rating && this->comment == r.comment;
}

ostream &operator<<(ostream &out, Review &r) {
    out << r.id << ", " << r.rating << ", " << r.comment;
    return out;
}

istream &operator>>(istream &in, Review& r) {

//    in >> r.id;
//    in >> r.rating;
//    in >> r.comment;
    string c;

    getline(in, r.id, ',');
    getline(in, c, ',');
    r.rating = stoi(c.substr(c.find_first_not_of(' ')));
    getline(in, r.comment, ',');
    return in;
}

Review::Review() {
    id = "";
    rating = -1;
    comment = "";
}
