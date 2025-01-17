int lower(c) {
    char result;

    result = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
    return result;
}