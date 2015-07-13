#if defined(_MSC_VER)
	#pragma once
#endif

#ifndef VPBRT_CORE_ERROR_H
#define VPBRT_CORE_ERROR_H

#define PRINTF_FUNC

void Info(const char*, ...) PRINTF_FUNC;
void Warning(const char*, ...) PRINTF_FUNC;
void Error(const char*, ...) PRINTF_FUNC;
void Severe(const char*, ...) PRINTF_FUNC;

#endif //VPBRT_CORE_ERROR_H