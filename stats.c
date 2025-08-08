#include "stats.h"
#include <stddef.h>

struct Stats compute_statistics(const float* numbers, int count) {
    float sum = 0.0f;
    float min = 0.0f;
    float max = 0.0f;

    for (int i = 0 ; i < count; i++) {
        if (i == 0) {
            min = numbers[i];
            max = numbers[i];
        } else {
            if (numbers[i] < min) {
                min = numbers[i];
            }
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
        sum += numbers[i];
    }
    struct Stats stats;
    stats.average = sum / count;
    stats.min = min;
    stats.max = max;
    return stats;
}