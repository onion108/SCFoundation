#include "SCArray.h"

void SCArray::SCArray(void *array,SCType type,SCInteger length) {
    this -> length = length;
    if(getSize(type) == -1) {
        this -> error = NOT_A_DATA_TYPE;
        return;
    }
    this -> data = malloc((this -> length) * getSize(type))
    if(this -> data == NULL) {
        error = MALLOC_ERROR;
        return;
    }
    memcpy(this -> data,array,(this -> length) * getSize(type));
    this -> type = type;
    error = NORMAL;
}
void SCArray::~SCArray(void) {
    free(this -> data);
}
void SCArray::append(void *memberAddr) {
    if(memberAddr == NULL) {
        error = NULL_POINTER;
        return;
    }
    void *old = malloc(((this -> length) + 1) * getSize(this -> type));
    void *backup = old;
    memcpy(old,this -> data,this -> length * getSize(type));
    for(int i;i < ((this -> length) * (getSize(this -> type)));i++) {
        (SCByte *)(old)++;
    }
    memcpy(old,memberAddr,getSize(type));
    old = backup;
    this -> data = old;
    this -> length++;
}
void SCArray::removeAll(void) {
    free(this -> data);
    this -> data = NULL;
    this -> length = 0;
}
SCType SCArray::getType(void) {
    return this -> type;
}
SCError SCArray::getErr(void) {
    return this -> error;
}
SCPoint SCArray::getData(void) {
    return (SCPoint)this -> data;
}
