// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

int main() {
    const char *str = "hello Test string123 For Lab1 ";

    std::cout << "\nКоличество слов, не содержащих цифр: " << faStr1(str);
    std::cout << "\nКоличество слов, начинающиеся на заглавную латинскую букву, а среди других символов этих слов только латинские строчные буквы: " << faStr2(str);
    std::cout << "\nСредняя длина слов: " << faStr3(str);

    return 0;
}
