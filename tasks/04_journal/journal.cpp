#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if (0 <= score && score <= 100){
        return true;
    } else{
        return false;
    }
}

long long AddToSum(long long sum, int score) {
    sum = sum + score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if (!(has_score)){
        return score;
    }
    int new_min;
    if (current_min > score){
        new_min = score;
    } else{
        new_min = current_min;
    }
    return new_min;
}

int NextMax(bool has_score, int current_max, int score) {
    if (!(has_score)){
        return score;
    }
    int new_max;
    if (current_max < score){
        new_max = score;
    } else{
        new_max = current_max;
    }
    return new_max;
}

int NextPassed(int passed, int score) {
    if (score >= 60){
        passed++;
    }
    return passed;
}

double Average(long long sum, int count) {
    double count_d = count;
    return sum / count_d;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0){
        return "empty";
    } else if (passed != count){
        return "debt";
    } else if (min_score >= 90){
        return "excellent";
    } else {
        return "ok"; 
    }
}
