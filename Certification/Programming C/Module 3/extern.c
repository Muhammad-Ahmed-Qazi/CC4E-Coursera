// You should write a function called bump() that uses an extern variable so that teh first time it is called, it returns int 0, the next time it returns 1 and so on.

extern int counter;

int bump() {
    return counter++;
}

int counter = 0;