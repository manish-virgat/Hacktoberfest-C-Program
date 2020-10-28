#include <stdio.h>
#include <stdlib.h>

int key, m, *ht, hi, elec = 0, flag = 0;

void createht()
{
    int i;
    ht = (int *)malloc(m * sizeof(int));
    if (m == 0)
    {
        printf("Unable to create hash table");
        exit(0);
    }
    else
    {
        for (i = 0; i < m; i++)
            ht[i] = -1;
    }
}

void insertht(int key)
{
    hi = key % m;
    while (ht[hi] != -1)
    {
        hi = (hi + 1) % m;
        flag = 1;
    }
    if (flag)
    {
        printf("Collision detected and avoided by linear probing");
        flag = 0;
    }
    ht[hi] = key;
    elec++;
}

void displayht()
{
    int i;
    if (elec == 0)
    {
        printf("Hash table is empty\n");
        return;
    }
    printf("Hash table contents are: \n");
    for (i = 0; i < m; i++)
        printf("[%d]-->%d\n", i, ht[i]);
}

void main()
{
    int i, n;
    printf("Enter the number of employee records: \n");
    scanf("%d", &n);
    printf("Enter the two digit memory location: \n");
    scanf("%d", &m);
    if (m < n)
    {
        printf("Not enough space in the hash table!\n");
        return;
    }
    createht();
    printf("Enter the four digit key values employee records: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &key);
        insertht(key);
    }
    displayht();
}
