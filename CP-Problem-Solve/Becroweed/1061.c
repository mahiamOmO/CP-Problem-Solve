#include <stdio.h>

int main() {
    int d1, d2, h1, h2, m1, m2, s1, s2;
    char discard[4];

 
    scanf("%s %d", discard, &d1);
    scanf("%d %s %d %s %d", &h1, discard, &m1, discard, &s1);

    
    scanf("%s %d", discard, &d2);
    scanf("%d %s %d %s %d", &h2, discard, &m2, discard, &s2);

    int ds1 = s1 + (m1 * 60) + (h1 * 3600) + (d1 * 86400);
    int ds2 = s2 + (m2 * 60) + (h2 * 3600) + (d2 * 86400);
    int N = ds2 - ds1;

    int day = N / 86400;
    N = N % 86400;
    int hr = N / 3600;
    N = N % 3600;
    int min = N / 60;
    int sec = N % 60;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);

    return 0;
}
