#include<stdio.h>

int main()
{
    int hi, hf, mi, mf;
    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
    int m = (hf*60 + mf) - (hi*60 + mi);
    if ( m <= 0 ) m += 1440; //24*60
    int h = m/60;
    m %= 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}
