#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

// Функция для очистки экрана в зависимости от ОС
void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    int secret_1, secret_2; // Секретные числа
    int ask;                // Переменная для ввода ответов
    int attempts_1 = 0;     // Попытки Игрока 1
    int attempts_2 = 0;     // Попытки Игрока 2

    // === РАУНД 1: ИГРОК 1 ЗАГДЫВАЕТ, ИГРОК 2 УГАДЫВАЕТ ===
    cout << "Игрок 1, закройте экран от Игрока 2 и введите секретное число: ";
    cin >> secret_2; // Игрок 1 вводит число, которое будет угадывать Игрок 2
    clear_screen();

    cout << "--- РАУНД ИГРОКА 2 ---" << endl;
    cout << "Игрок 2, попробуйте угадать число!" << endl;
    do {
        cout << "Ваш вариант: ";
        cin >> ask;
        attempts_2++;

        if (ask > secret_2) {
            cout << "Секретное число меньше!" << endl;
        } else if (ask < secret_2) {
            cout << "Секретное число больше!" << endl;
        }
    } while (ask != secret_2);
    
    cout << "Отлично! Игрок 2 угадал число за " << attempts_2 << " попыток(и)!" << endl;
    cout << "Нажмите Enter, чтобы перейти к следующему раунду...";
    cin.ignore();
    cin.get();
    clear_screen();

    // === РАУНД 2: ИГРОК 2 ЗАГДЫВАЕТ, ИГРОК 1 УГАДЫВАЕТ ===
    cout << "Игрок 2, закройте экран от Игрока 1 и введите секретное число: ";
    cin >> secret_1; // Игрок 2 вводит число, которое будет угадывать Игрок 1
    clear_screen();

    cout << "--- РАУНД ИГРОКА 1 ---" << endl;
    cout << "Игрок 1, попробуйте угадать число!" << endl;
    do {
        cout << "Ваш вариант: ";
        cin >> ask;
        attempts_1++;

        if (ask > secret_1) {
            cout << "Секретное число меньше!" << endl;
        } else if (ask < secret_1) {
            cout << "Секретное число больше!" << endl;
        }
    } while (ask != secret_1);

    cout << "Отлично! Игрок 1 угадал число за " << attempts_1 << " попыток(и)!" << endl;
    cout << "Нажмите Enter, чтобы узнать результаты...";
    cin.ignore();
    cin.get();
    clear_screen();

    // === ФИНАЛ: ОПРЕДЕЛЕНИЕ ПОБЕДИТЕЛЯ ===
    cout << "=== ИТОГИ ИГРЫ ===" << endl;
    cout << "Игрок 1 потратил: " << attempts_1 << " попыток(и)." << endl;
    cout << "Игрок 2 потратил: " << attempts_2 << " попыток(и)." << endl;
    cout << "------------------" << endl;

    if (attempts_1 < attempts_2) {
        cout << "ПОБЕДИЛ ИГРОК 1! Он был быстрее!" << endl;
    } else if (attempts_2 < attempts_1) {
        cout << "ПОБЕДИЛ ИГРОК 2! Он был быстрее!" << endl;
    } else {
        cout << "НИЧЬЯ! Вы оба одинаково хороши!" << endl;
    }

    return 0;
}

