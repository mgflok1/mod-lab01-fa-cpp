// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char *str = "hello Test string123 For Lab1 ";

    std::cout << "\nКоличество слов, не содержащих цифр: " << faStr1(str);
    std::cout << "\nКоличество слов, ";
    std::cout << "начинающихся на заглавную латинскую букву: " << faStr2(str);
    std::cout << "\nСредняя длина слов: " << faStr3(str);

    return 0;
}
