#ifndef SCTYPE_SCARRAY_H
#define SCTYPE_SCARRAY_H
#include <stdio.h>
#include "SCBase.h"
#include "SCSize.h"

class SCArray {
    void *data;
    SCType type;
    SCError error;
    public:
    SCInteger length;
    void SCArray(void *,SCType,SCInteger);
    void ~SCArray(void);
    void append(void *memberAddr);
    SCType dataType();
    SCPoint getData();
    SCError getErr();
    void setData(void *,SCType,SCInteger);
    void removeAll();
};
#endif
