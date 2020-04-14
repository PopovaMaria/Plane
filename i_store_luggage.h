#pragma once

#include <glob.h>
#include <string>

class IStoreLuggage {
public:
    [[nodiscard]] virtual size_t get_luggage_weight() const = 0;
    virtual void show() const = 0;
};



