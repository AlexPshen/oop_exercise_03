#ifndef _TRIGON_H_
#define _TRIGON_H_

#include "figure.h"

struct trigon : public fig{
private:
    point l, r, top;
public:
    trigon(std::istream& is){
        is >> l.x >> l.y >> r.x >> r.y >> top.x >> top.y;
    }

    bool correct() const override;
    point center() const override;
    double square() const override;
    void print(std::ostream& os) const override;
};

#endif
