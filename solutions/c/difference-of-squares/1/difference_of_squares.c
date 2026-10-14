#include "difference_of_squares.h"
unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}

unsigned int sum_of_squares(unsigned int number) {
    unsigned int sum_squares = 0;
    for (unsigned int i = 1; i <= number; i++) {
      sum_squares += i * i;
    }
    return sum_squares;
}
unsigned int square_of_sum(unsigned int number) {
    const unsigned int ariphmetic_sum = (1 + number) * number / 2;
    return ariphmetic_sum * ariphmetic_sum;
}
