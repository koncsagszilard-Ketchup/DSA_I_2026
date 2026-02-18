//
// Created by szila on 2026. 02. 18..
//

#include "functions.h"
#include <string.h>

int sum(int a, int b) {
    return a+b;
}
int min(int a, int b) {
    if (a < b)
        return a;
    else if ( b<a)
        return b;
    else return 0;

}
int string_length(char s[25]) {
    return  strlen(s);
}