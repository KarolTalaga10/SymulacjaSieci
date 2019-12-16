// Karol Talaga 302929, Mateusz Bahyrycz 284336, Zbigniew Żeglecki 302947

#ifndef NETSIM_PACKAGE_HPP
#define NETSIM_PACKAGE_HPP

#include <iostream>
#include "types.hpp"

class Package{
private:
    ElementID mID;

public:
    Package();
    Package(const Package&& pcg);
    Package& operator = (const Package&& pcg);
    ElementID get_id() const { return mID; }
};

#endif //NETSIM_PACKAGE_HPP