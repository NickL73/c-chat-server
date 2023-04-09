#ifndef CSP_USERS_H
#define CSP_USERS_H

#include <stdbool.h>
#include <stdint.h>

#include "error_codes.h"

typedef struct online_user_t
{
    int file_descriptor;
    char * p_username;
    uint8_t username_len;
    uint32_t session_id;
    int active_chatroom_id;
} online_user_t;

online_user_t * create_new_user (int file_descriptor, char * p_username,
                                 uint8_t username_len, error_code_t * p_error);

void destroy_user (online_user_t * p_user, error_code_t * p_error);

bool compare_users (online_user_t * p_user1, online_user_t * p_user2,
                    error_code_t * p_error);

#endif
