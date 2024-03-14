//
// Created by hloi on 3/12/2024.
//
#include <iostream>
#include <string>
#include <cctype>

#include "Review.h"
using namespace std;

bool Review::operator==(const Review &r) const {
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
    if (r.id.empty()) {
        throw invalid_argument("invalid id");
    }
    getline(in, c, ',');
    string s = c.substr(c.find_first_not_of(' '));
    if (!isdigit(s[0])) {
        throw invalid_argument("illegal number");
    }
    r.rating = stoi(c.substr(c.find_first_not_of(' ')));
    getline(in, r.comment, ',');
    if (r.comment.empty()) {
        throw invalid_argument("Missing value");
    }

    return in;
}


Review::Review() {
    id = "";
    rating = -1;
    comment = "";
}

Review::Review(string id, int revRating, string revComment) {
    this->id = id;
    this->rating = revRating;
    this->comment = revComment;
}
