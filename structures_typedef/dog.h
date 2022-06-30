#ifndef DOG
#define DOG
/**
 * struct dog - print its content
 * @name: name
 * @age: age
 * @owner: owner
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog dog_t - structure of dog_t
 **/
typedef struct dog dog_t
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
