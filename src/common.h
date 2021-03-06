/*
 * common.h
 *
 *  Created on: 10 Nov 2018
 *      Author: root
 */

#ifndef SRC_COMMON_H_
#define SRC_COMMON_H_

#include "utils/dict.h"
#include <stdio.h>

#define ID_LEN REDISMODULE_NODE_ID_LEN + sizeof(long long) + 1 // the +1 is for the \0
#define STR_ID_LEN  REDISMODULE_NODE_ID_LEN + 13

extern Gears_dictType* dictTypeHeapIdsPtr;

void SetId(char* finalId, char* idBuf, char* idStrBuf, long long* lastID);
int rg_vasprintf(char **__restrict __ptr, const char *__restrict __fmt, va_list __arg);
int rg_asprintf(char **__ptr, const char *__restrict __fmt, ...);

#endif /* SRC_COMMANDS_H_ */

