//
// Created by hloi on 3/12/2024.
//

#ifndef CH09BUSREVIEW_REVIEWLIST_H
#define CH09BUSREVIEW_REVIEWLIST_H
#include "Review.h"
#include <vector>
#include <string>
#include <sstream>

class ReviewList {
public:
    ReviewList() {name = "";}
    ReviewList(string name);
    void readReview(string filename);
    double CalcAvgRating();
    void saveReview(string filename);
    void addReview(Review& r);
    void delReview(Review& r);
    friend ostream& operator<<(ostream& out, ReviewList& revList);
    friend istream& operator>>(istream& in, ReviewList& revList);
private:
    vector<Review> reviewList;
    string name;

};


#endif //CH09BUSREVIEW_REVIEWLIST_H
