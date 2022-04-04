#ifndef WRAP_TIME_H
#define WRAP_TIME_H

long __wrap_time(long *__timer) {
    static long time = 100;
    time += 1;
    long result = time / 100;
    if (__timer != 0) {
        *__timer = result;
    }
    return result;
}

#endif // WRAP_TIME_H
