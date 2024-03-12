//
// Created by hloi on 3/12/2024.
//

#include "Review.h"

bool Review::operator==(Review &r) {
    return this->id == r.id && this->rating == r.rating && this->comment == r.comment;
}

ostream &operator<<(ostream &out, Review &r) {
    out << r.id << ", " << r.rating << ", " << r.comment;
    return out;
}

istream &operator>>(istream &in, Review& r) {

    in >> r.id;
    in >> r.rating;
    in >> r.comment;

    return in;
}
