#include "SCString.h"

void SCString::SCString(char *String) {
    length = (SCInteger)strlen(String);
    data = malloc((length + 1) * sizeof(char));
    if(data == NULL) {
       err = MALLOC_ERROR; 
       return;
    }
    strcpy(data,String);
    err = NORMAL;
}
void SCString::~SCString() {
    free(data);
    free(&length);
    free(&err);
}
char *SCString::toPoint() {
    return data;
}
void SCString::setString(char *String) {
    free(data);
    length = (SCInteger)strlen(String);
    data = malloc((length + 1) * sizeof(char));
    strcpy(data,String);
}
void append(SCChar member) {
    char old[length + 2] = {0};
    // +2 because one for '\0' and one for `member'.
    strcpy(data,old);
    old[length + 1] = member;
    this -> setString(old);
}
SCBool isNULL() {
    if data == NULL {
        return YES;
    }else{
        return NO;
    }
}
void addString(char *String) {
    char old[length + strlen(String) + 2] = {0};
    strcpy(old,data);
    strcat(old,String);
    this -> setString(old);
}
