#ifndef TIMER_H
#define TIMER_H

#include <sys/time.h>

// Function to get the current time in seconds
double get_time() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (double) tv.tv_sec + (double) tv.tv_usec / 1000000.0;
}

#endif /* TIMER_H */
