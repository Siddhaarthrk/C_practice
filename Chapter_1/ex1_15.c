#include <stdio.h>
float toCelsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}
int main() {
    float fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%6.1f %6.1f\n", fahr, toCelsius(fahr));
    return 0;
}
