#ifndef DOG_H
#define DOG_H
/**
*dog_t - type for struct dog
*
*/

typedef struct dog dog_t;

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
