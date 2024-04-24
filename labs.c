#include <stdio.h>
#include <stdlib.h>
#ifndef LABS_H
#define LABS_H
#define MAXLINE 1000

float power(float base, int exponent) {
    float result = 1;

    // Возведение в степень
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int laba1(){
    float L; // расстояние между пунктами
    float g; // скорость сближения пешеходов
    float v1; // скорость первого
    float v2; // скорость второго
    float t; // время встречи
    // ввод исходных данных
    // ввод расстояние
    printf("L = ");
    scanf("%f", &L);
    // ввод скорость первого
    printf("v1 = ");
    scanf("%f", &v1);
    // ввод время встречи
    printf("t = ");
    scanf("%f", &t);
    // решение задачи
    g = L / 2;
    v2 = g - v1;
    // вывод результатов
    printf("Skorost vtorogo v2 = %f\n", v2);
    system("pause");
    return 0;
}

int laba2() {
    float x;
    float summ = 0;
    int n;
    int i = 1;

    // Ввод значений x и n
    
    printf("vedite x: ");
    scanf("%f", &x);

    printf("vedite kolvo elementov n: ");
    scanf("%d", &n);
    
    // Решение
    
    while (i <= n) {
        summ += power(-1, i - 1) * power(x, i) / i;
        ++i;
    }
    
    printf("summa pervih %d elementod ryada: %f\n", n, summ);
    system("pause");
    return 0;
}

int laba3(){

    int N; // количество букв
    int c; // текущий символ из потока
    int flag; // признак слова
    int cnt; // счётчик
    int found; // индикатор того, что искомый признак
    int ccount; // счетчик символов в текущем слове


    // обнаружен
    // начальные присваивания (инициализация)
    cnt = 0;
    flag = 0;
    found = 0;

    // цикл чтения символов из потока, связанного с
    // клавиатурой
    printf("Vedite cifru:\n");
    scanf("%d", &N);
    printf("Vedite text\n");
    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '.' || c == '\n' || c == ',')
        {
            if(flag == 1)
            {
                if(ccount >= N)
                {
                    cnt = cnt + 1;
                }
                ccount = 0;
                flag = 0;
            }
        }
        else
        {
            ccount = ccount + 1;
            flag = 1;
        }
    }
    printf("%d", cnt);
    system("pause");
    return 0;
    }

int laba4(){
    char input[100];
    char output[100];
    char prev = '\0'; 
    int i = 0, j = 0; 
    printf("Vedite stroky: ");

    while ((input[i] = getchar()) != EOF) {
        i++;
    }
    input[i] = '\0'; 
    for (i = 0; input[i] != '\0'; i++) {
        if (!(prev == ' ' && input[i] == ' ')) { 
            output[j] = input[i]; 
            j++; 
            prev = input[i]; 
        }
    }
    output[j] = '\0';
    for (int i = 0; output[i] != '\0'; i++){
        printf("%s\n", output[i]);
    }

    system("pause");
    return 0;
}

int laba5(){
    int N = 10;
    int x[N];
    int aver;
    int i;
    
    for (i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }
    
    aver = 0;
    for (i = 0; i < N; i++){
        aver = aver + x[i];
    }
    aver = aver / N;
    
    for (i = 0; i < N; i++){
        if (x[i] < aver){
            x[i] = 0;
        }
    }
    
    for(i = 0; i < N; i++){
        printf("%d ", x[i]);
    }
    printf("\n");
    
    system("pause");
    return 0;
}

int laba6(){
    int K = 3;
    int N = 4;
    int x[K][N];
    int i, j;
    int minSum = 0;
    int minRowIndex = 0;
    int sumRow = 0;

    for(i = 0; i < K; i++)
        for(j = 0; j < N; j++)
            scanf("%d", &x[i][j]);
    for(j = 0; j < N; j++) {
        minSum += x[0][j];
    }

    for(i = 0; i < K; i++) {
        for(j = 0; j < N; j++) {
            sumRow += x[i][j];
        }
        if(sumRow < minSum) {
            minSum = sumRow;
            minRowIndex = i;
        }
    }
    for(j = 0; j < N; j++) {
        x[minRowIndex][j] = 0;
    }
    for(i = 0; i < K; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

int laba7(){
    long int N;
    int position = 0;
    long int mask = 1;
    printf("Vedite N: ");
    scanf("%ld", &N);
    while ((N & mask) == 0) {
        position++; // Увеличиваем позицию
        mask <<= 1; // Сдвигаем маску влево на один бит
    }

    printf("Positia edinitsi: %d\n", position);

    system("pause");
    return 0;
}
#endif /* LABS_H */ 
