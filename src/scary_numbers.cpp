
#include <string>
#include "../include/num.h"

using namespace std;

bool Scary(string day, int num) {
    if (day == "Понедельник" && num == 12) {
        return true;
    } else if (day == "Вторник" && num > 95) {
        return true;
    } else if (day == "Среда" && num == 34) {
        return true;
    } else if (day == "Четверг" && num == 0) {
        return true;
    } else if (day == "Пятница" && num % 2 == 0) {
        return true;
    } else if (day == "Суббота" && num == 56) {
        return true;
    } else if (day == "Воскресенье" && (num == 666 || num == -666)) {
        return true;
    } else {
        return false;
    }
}