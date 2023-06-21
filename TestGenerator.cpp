#include "testlib/testlib.h"

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(1, 10);
    int q = rnd.next(1, 10);

    println(n);
    for (int i = 0; i < n; i++) {
        double factor = rnd.next(-1000.0, 1000.0);
        int happiness_index = rnd.next(1, 100);
        println(factor, happiness_index);
    }

    println(q);
    for (int i = 0; i < q; i++) {
        double factor = rnd.next(-1000.0, 1000.0);
        println(factor);
    }

    return 0;
}
