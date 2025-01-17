// You should write a function called bump() that uses an static variable so that the first time it is called, it returns int 0, the next time it returns 1 and so on. Also write a function called start() which takes an int as its parameter and restarts the sequence from the specified number.

static int counter = 0;

int bump() {
    return counter++;
}

void start(int num) {
    counter = num;
}