// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cctype>
#include <cmath>

bool containsDigit(const char *word) {
    while (*word && !isspace(*word)) {
        if (isdigit(*word))
            return true;
        word++;
    }
    return false;
}

unsigned int faStr1(const char *str) {
    unsigned int counter = 0;
    bool inWord = false;

    while (*str) {
        if (std::isspace(*str)) {
            inWord = false;
        } else {
            if (!inWord) {
                inWord = true;
                if (!containsDigit(str)) {
                    counter++;
                }
            }
        }
        str++;
    }

    return counter;
}

unsigned int faStr2(const char *str) {
    unsigned int counter = 0;
    bool inWord = false;
    bool validWord = true;

    while (*str) {
        if (std::isspace(*str)) {
            inWord = false;
            if (validWord) {
                counter++;
            }
            validWord = true;
        } else {
            if (!inWord) {
                inWord = true;
                if (!std::isupper(*str) && !std::islower(*str)) {
                    validWord = false;
                }
            } else {
                if (!std::islower(*str)) {
                    validWord = false;
                }
            }
            if (std::isdigit(*str)) {
                validWord = false;
            }
        }
        str++;
    }
    if (validWord && inWord) {
        counter++;
    }

    return counter;
}

unsigned int faStr3(const char *str) {
    unsigned int wordCounter = 0;
    unsigned int totalLength = 0;
    bool inWord = false;

    while (*str) {
        if (std::isspace(*str)) {
            inWord = false;
        } else {
            if (!inWord) {
                inWord = true;
                wordCounter++;
            }
            totalLength++;
        }
        str++;
    }

    if (wordCounter == 0) {
        return 0;
    }

    return round(static_cast<double>(totalLength) / wordCounter);
}
