#include "BaseComposite.h"

class BusinessClass: public BaseComposite {

private:
    static const size_t max_number_of_passengers = 20;
    static const size_t max_passenger_free_luggage_weight = 35;
    static const size_t max_passenger_paid_luggage_weight = 60;

public:
    void add_child(IStoreLuggage* item) override;
    void show() const override;
};


