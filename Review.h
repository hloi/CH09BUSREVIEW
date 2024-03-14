//
// Created by hloi on 3/12/2024.
//

#ifndef CH09BUSREVIEW_REVIEW_H
#define CH09BUSREVIEW_REVIEW_H


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
public:

    Review();
    Review(string id, int revRating, string revComment);
    void SetRatingAndComment(string id, int revRating, string revComment) {
        this->id = id;
        rating = revRating;
        comment = revComment;
    }
    int GetRating() const { return rating; }
    string GetComment() const { return comment; }

    bool operator==(const Review& r) const;

    friend ostream& operator<<(ostream& out, Review& r);
    friend istream& operator>>(istream& in, Review& r);

private:
    string id;
    int rating;
    string comment;
};


#endif //CH09BUSREVIEW_REVIEW_H
