/*#include <unistd.h>

void *jmalloc(unsigned int size);
void jfree(void *ptr);
void *jrealloc(void *ptr,unsigned int size);
void *jcalloc(unsigned int size, unsigned int size2);
*/

#ifndef _MALLOC_H
#define _MALLOC_H

#ifdef __cplusplus
extern "C" {
#endif

	void *malloc(unsigned int size);
	void *calloc(unsigned int nmemb, unsigned int size);
	void *realloc(void *ptr, unsigned int size);
	void free(void *ptr);

#ifdef __cplusplus
}  /* extern C */
#endif

#endif
