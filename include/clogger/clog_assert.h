#ifndef CLOGGER_CLOG_ASSERT_H
#define CLOGGER_CLOG_ASSERT_H

// Assert functions
void clog_assert(int condition, const char* location, const char* message, ...);
void clog_assert_equal_int32(int expected, int actual, const char* location, const char* message, ...);

// Expect functions (non-fatal assert function), returns the result of the condition
int clog_expect(int condition, const char* location, const char* message, ...);
int clog_expect_equal_int32(int expected, int actual, const char* location, const char* message, ...);

#endif //CLOGGER_CLOG_ASSERT_H