#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HEARED_NUM 5

typedef struct Entry
{
    int key;
    char *name;
    struct Entry *next;
} Entry;

Entry *Table[HEARED_NUM + 1];

Entry *createEntry(int key, char *name)
{
    Entry *entry = (Entry *)malloc(sizeof(Entry));
    entry->key = key;
    entry->name = strdup(name);
    entry->next = NULL;
    return entry;
}

void insert(int key, char *name)
{
    int init_table = 0;
    Entry *newEntry = createEntry(key, name);

    if (Table[init_table] == NULL)
    {
        Table[init_table] = newEntry;
    }
    else
    {
        Entry *current = Table[init_table];
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newEntry;
    }
}

char *search_key(int key)
{
    Entry *current = Table[0];
    while (current != NULL)
    {
        if (current->key == key)
        {
            return current->name;
        }
        current = current->next;
    }
    return NULL;
}

int main(void)
{
    for (int i = 0; i < HEARED_NUM; i++)
    {
        char *temp = malloc(10 * sizeof(char));
        if (temp == NULL)
            return 1;

        printf("%d: ", i);
        scanf("%9s", temp);
        insert(i, temp);
    }
    printf("Which one?: ");
    int key;
    scanf("%d", &key);
    char *name = search_key(key);
    printf("%s", name);
}