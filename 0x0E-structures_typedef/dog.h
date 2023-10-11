#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
/**
 * struct dog - function for dog
 * @name: This is the dog's name
 * @age: This is the dog's age
 * @owner: This is the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
