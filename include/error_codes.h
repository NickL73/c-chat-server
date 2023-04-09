#ifndef CSP_ERROR_CODES_H
#define CSP_ERRIR_CODES_H

typedef enum
{
    FUNCTION_SUCCESS,
    GENERIC_FAILURE
} error_code_t;

void handle_error_code (error_code_t error_code);

#endif