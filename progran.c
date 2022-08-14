
﻿#define SIZE 100
/* Tabla de 100 enteros (Global) */
int table[SIZE];

/* Rellena una tabla con ceros */
void fill_in(int *t, int size) 
{
    int i;
    for (i = 0; i < size; i++) 
    {
        t[i] = 0;
    }
    return;
}
