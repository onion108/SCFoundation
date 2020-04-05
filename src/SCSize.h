#include "SCSize.h"

/**
* There's no tips so I write all types there.
* typedef enum types {
*     INT, (done)
*     UINT, (done)
*     SCUINT, (done)
*     LONG, (done)
*     CHAR, (done)
*     SCINT, (done)
*     SCLONG, (done)
*     SCCHAR, (done)
*     SCBYTE, (done)
*     SCSHORT, (done)
*     SHORT, (done)
*     SCULONG, (done)
*     ULONG, (done)
*     SCUSHORT, (done)
*     USHORT, (done)
*     SCFLOAT, (done)
*     FLOAT, (done)
*     SCDOUBLE, (done)
*     DOUBLE, (done)
*     SCPOINT, (done)
*     SCBOOL, (done)
*     SCFUNC, (done)
*     SCTYPE, (done)
*     SCERROR, (done)
*     STRUCT, (done)
*     ENUM, (done)
*     SCSTRING, (done)
*     SCARRAY, (done)
*     UNKNOWN (done)
* }SCType;
*/
int getSize(SCType type) {
    switch(type) {
        case INT:
        case SCINT:
        case UINT:
        case SCUINT:         // Int type
        return sizeof(int);
        
        case LONG:
        case SCLONG:
        case ULONG:
        case SCULONG:
        return sizeof(long);
        
        case SHORT:
        case USHORT:
        case SCSHORT:
        case SCUSHORT:
        return sizeof(short);
        
        case CHAR:
        case UCHAR:
        case SCCHAR:
        case SCBYTE:
        case SCBOOL:
        return sizeof(char);
        
        case SCPOINT:
        return sizeof(void *);
        
        case DOUBLE:
        case SCDOUBLE:
        return sizeof(double);
        
        case FLOAT:
        case SCFLOAT:
        return sizeof(float);
        
        case SCFUNC:
        return sizeof(SCFunction);
        
        case SCTYPE:
        return sizeof(SCType);
        
        case SCERROR:
        return sizeof(SCError);
        
        case SCSTRING:
        return sizeof(SCString);
        
        case SCARRAY
        return sizeof(SCArray);
        
        default:
        return -1;
    }
}
