#include "users.h"

online_user_t * create_new_user (int file_descriptor, char * p_username,
                                 uint8_t username_len, error_code_t * p_error)
{
    online_user_t * p_new_user = NULL;

    assert(p_username != NULL);

    p_new_user = calloc(1, sizeof(p))

    return p_new_user;
}

void destroy_user (online_user_t * p_user, error_code_t * p_error);

bool compare_users (online_user_t * p_user1, online_user_t * p_user2,
                    error_code_t * p_error);