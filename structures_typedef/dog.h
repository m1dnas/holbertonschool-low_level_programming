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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
