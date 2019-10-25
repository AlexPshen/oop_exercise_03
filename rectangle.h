#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "figure.h"

struct rectangle : public fig{
private:
    point top1, top2, top3, top4;
public:
    rectangle(std::istream& is){
        is >> top1.x >> top1.y >> top2.x >> top2.y >> top3.x >> top3.y >> top4.x >> top4.y;
    }

    bool correct() const override;
    point center() const override;
    double square() const override;
    void print(std::ostream& os) const override;
};

#endif
