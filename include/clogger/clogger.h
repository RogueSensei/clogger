#ifndef CLOGGER_CLOGGER_H
#define CLOGGER_CLOGGER_H

#include "core.h"
#include "console.h"

typedef struct CLogger
{
    const char* name;
    void (* error_callback)(const char* clogger_name, const char* location);
    clog_console_colour colour;
    clog_bool debug_mode;
    unsigned short colour_flags;
} clogger;

CLOGGER_API clogger make_clogger(const char* clogger_name);

CLOGGER_API void clogger_info(clogger* logger, const char* location, const char* message, ...);
CLOGGER_API void clogger_debug(clogger* logger, const char* location, const char* message, ...);
CLOGGER_API void clogger_warning(clogger* logger, const char* location, const char* message, ...);
CLOGGER_API void clogger_error(clogger* logger, const char* location, const char* message, ...);
CLOGGER_API void clogger_critical(clogger* logger, const char* location, const char* message, ...);

#endif //CLOGGER_CLOGGER_H
