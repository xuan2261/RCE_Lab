// stdafx.h: archivo de inclusión de los archivos de inclusión estándar del sistema
// o archivos de inclusión específicos de un proyecto utilizados frecuentemente,
// pero rara vez modificados
//

#pragma once

#include "targetver.h"

#define _CRT_SECURE_NO_WARNINGS

#ifdef UNICODE
	#undef UNICODE
#endif
#ifdef _UNICODE
	#undef _UNICODE
#endif

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

#pragma comment(lib,"dbghelp_x86.lib")


// TODO: mencionar aquí los encabezados adicionales que el programa necesita
