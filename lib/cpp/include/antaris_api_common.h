/*
 * Copyright 2022 Antaris, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ANTARIS_API_COMMON_H__
#define __ANTARIS_API_COMMON_H__

#include <stdio.h>

#define ANTARIS_DEFAULT_STRING_MAX_LEN  (256)
#define ANTARIS_MAX_FILE_NAME_LENGTH    (ANTARIS_DEFAULT_STRING_MAX_LEN)
#define ANTARIS_MAX_CMD_LENGTH          (1024)
#define ANTARIS_MAX_TOKEN_LEN           (ANTARIS_DEFAULT_STRING_MAX_LEN)
#define ANTARIS_MAX_PEER_STRING_LEN     (ANTARIS_DEFAULT_STRING_MAX_LEN)

// common types needed by API
typedef void * AntarisChannel;

typedef unsigned char UINT8;
typedef char INT8;
typedef unsigned short int UINT16;
typedef short int INT16;
typedef unsigned int UINT32;
typedef int INT32;
typedef unsigned long long int UINT64;
typedef long long int INT64;
typedef float FLOAT;

static inline
void displayUINT8(void *obj)
{
    printf("%u\n", *(UINT8 *)obj);
}

static inline
void displayINT8(void *obj)
{
    printf("%d %c\n", *(INT8 *)obj, *(INT8 *)obj);
}

static inline
void displayUINT16(void *obj)
{
    printf("%u\n", *(UINT16 *)obj);
}

static inline
void displayINT16(void *obj)
{
    printf("%d\n", *(INT16 *)obj);
}

static inline
void displayUINT32(void *obj)
{
    printf("%u\n", *(UINT32 *)obj);
}

static inline
void displayINT32(void *obj)
{
    printf("%d\n", *(INT32 *)obj);
}

static inline
void displayUINT64(void *obj)
{
    printf("%llu\n", *(UINT64 *)obj);
}

static inline
void displayINT64(void *obj)
{
    printf("%lld\n", *(INT64 *)obj);
}

static inline
void displayFLOAT(void *obj)
{
    printf("%f\n", *(float *)obj);
}

void app_to_peer_UINT16(void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_UINT16(void *ptr_src_peer, void *ptr_dst_app);
void app_to_peer_UINT32(void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_UINT32(void *ptr_src_peer, void *ptr_dst_app);
void app_to_peer_UINT64(void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_UINT64(void *ptr_src_peer, void *ptr_dst_app);
void app_to_peer_INT32(void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_INT32(void *ptr_src_peer, void *ptr_dst_app);
void app_to_peer_FLOAT(void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_FLOAT(void *ptr_src_peer, void *ptr_dst_app);

#endif
