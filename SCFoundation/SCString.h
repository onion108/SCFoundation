#ifndef SCTYPE_SCSTRING_H
#define SCTYPE_SCSTRING_H
#include <stdio.h>
#include <string.h>
#include "SCBase.h"

class SCString {
    char *data;
    public:
    SCInteger length;
    SCError err;
    
    void SCString(char *String);
    void ~SCString();
    char *toPoint();
    void setString(char *String);
    void append(SCChar Member);
    SCBool isNULL();
    void addString(char *String);
};
#endif
