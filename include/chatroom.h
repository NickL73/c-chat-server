#ifndef CSP_CHATROOM_H
#define CSP_CHATROOM_H

#include <stdint.h>
#include <stddef.h>

#include "user_list.h"
#include "error_codes.h"
#include "users.h"

typedef struct chatroom_t
{
    size_t chatroom_name_size;
    char * p_chatroom_name;
    user_list_t * p_connected_users;

} chatroom_t;

chatroom_t * create_chatroom (char * p_chatroom_name, uint8_t name_length,
                              error_code_t * p_error);

void destroy_chatroom (chatroom_t * p_chatroom, error_code_t * p_error);

void add_user_chatroom (chatroom_t * p_chatroom,
                        online_user_t * p_user,
                        error_code_t * p_error);

void remove_user_chatroom (chatroom_t * p_chatroom, online_user_t * p_user,
                           error_code_t * p_error);

int search_user_chatroom (chatroom_t * p_chatroom, online_user_t * p_user,
                          error_code_t * p_error);

online_user_t * search_name_chatroom (chatroom_t * p_chatroom, char * p_username,
                                      uint8_t username_len,
                                      error_code_t * p_error);

#endif
