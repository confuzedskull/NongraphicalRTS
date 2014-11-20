#ifndef WORKER_H
#define WORKER_H
#include "troop.h"

class worker : public troop
{
public:
    worker();
    void repair();
    void harvest();
};

#endif // WORKER_H
