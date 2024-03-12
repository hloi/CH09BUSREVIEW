#include <iostream>
#include "Review.h"
#include "ReviewList.h"

using namespace std;

int main() {
    ReviewList list1;
    list1.readReview("review.txt");
    cout << list1 << endl;
    list1.saveReview("review.out");
    return 0;
}
