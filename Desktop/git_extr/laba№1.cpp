#include <iostream>
#include <set>
#include <string> 
#include <Windows.h>

using namespace std;
int main() {
    // Подключение русского языка
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    // Список гласных
    string text;
    set<string> letters = { "a", "e", "u", "o", "i", "y", "а", "е", "ё", "и", "у", "о", "э", "ю", "я", "ы",
                                "А", "Е", "Ё", "И", "У", "О", "Э", "Ю", "Я", "Ы", "A", "E", "U", "O", "I", "Y" };
    // Ввод строки 
    cout << "Введите текст: " << endl;
    getline(cin, text);
    // Цикл поиска гласных
    int count = 0;
    for (auto c : text) {
        if (letters.count(string(1, c)) > 0) {
            count++;
        }
    }
    // Вывод количества гласных
    cout << "Количество гласных букв: " << count << endl;

    return 0;
}