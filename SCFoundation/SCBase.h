#ifndef SCTYPE_SCBASE_H
#define SCTYPE_SCBASE_H

typedef int SCInteger;
typedef long SCLong;
typedef char SCChar;
typedef unsigned char SCByte;
typedef short SCShort;
typedef unsigned int SCUInteger;
typedef unsigned long SCULong;
typedef unsigned short SCUShort;
typedef float SCFloat;
typedef double SCDouble;
typedef void * (*SCFunction)(void *);
typedef void * SCPoint;
typedef unsigned char SCBool;
typedef enum types {
    INT,
    UINT,
    SCUINT,
    LONG,
    CHAR,
    UCHAR,
    SCINT,
    SCLONG,
    SCCHAR,
    SCBYTE,
    SCSHORT,
    SHORT,
    SCULONG,
    ULONG,
    SCUSHORT,
    USHORT,
    SCFLOAT,
    FLOAT,
    SCDOUBLE,
    DOUBLE,
    SCPOINT,
    SCBOOL,
    SCFUNC,
    SCTYPE,
    SCERROR,
    STRUCT,
    ENUM,
    SCSTRING,
    SCARRAY,
    UNKNOWN
}SCType;
enum error {
    NORMAL,
    MALLOC_ERROR,
    FILE_IO_ERROR,
    NULL_POINTER,
    NULL_CALL,
    SOCKET_ERROR,
    TCP_IP_ERROR,
    FORMAT_ERROR,
    UNSUPPORT_TYPE,
    NOT_A_DATA_TYPE,
    UNKNOWN = -1
}SCError;

#define YES (unsigned char)1
#define NO (unsigned char)0
#define ON YES
#define OFF NO
#endif
