#ifndef CSP_USER_LIST_H
#define CSP_USER_LIST_H

#include <stdint.h>

#include "users.h"

typedef struct list_node_t
{
    online_user_t * p_data;
    struct list_node_t * p_next;
} list_node_t;

typedef struct user_list_t
{
    uint16_t num_users;
    list_node_t * p_head;
} user_list_t;

user_list_t * create_new_user_list (error_code_t * p_error);

void destroy_user_list (user_list_t * p_list, error_code_t * p_error);

int search_user_list (user_list_t * p_list, online_user_t * p_user,
                      error_code_t * p_error);

online_user_t * search_name_list (user_list_t * p_list, char * p_name,
                                  uint8_t username_len, error_code_t * p_error);

void add_user_list (user_list_t * p_list, online_user_t * p_user,
                    error_code_t * p_error);

void remove_user_list (user_list_t * p_list, online_user_t * p_user,
                       error_code_t * p_error);

#endif
