#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht = NULL;
	int success = 0;

	ht = hash_table_create(1024);
	success = hash_table_set(ht, "\0betty", "holberton");
	printf("Length of null betty = %i\n", (int)strlen("\0betty"));
	printf("null betty = %i\n", success);
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
