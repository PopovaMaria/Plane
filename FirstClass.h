#pragma once

#include "BaseComposite.h"

class FirstClass: public BaseComposite {

private:
    static const size_t max_number_of_passengers = 10;

public:
    void add_child(IStoreLuggage* item) override;
    void show() const override;
    void delete_child(size_t seat);
};

