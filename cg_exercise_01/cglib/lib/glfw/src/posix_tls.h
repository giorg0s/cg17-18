//========================================================================
// GLFW 3.1 POSIX - www.glfw.org
//------------------------------------------------------------------------
// Copyright (c) 2002-2006 Marcus Geelnard
// Copyright (c) 2006-2010 Camilla Berglund <elmindreda@elmindreda.org>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================

#ifndef _posix_tls_h_
#define _posix_tls_h_

#include <pthread.h>

#define _GLFW_PLATFORM_LIBRARY_TLS_STATE _GLFWtlsPOSIX posix_tls


// POSIX-specific global TLS data
//
typedef struct _GLFWtlsPOSIX
{
    pthread_key_t   context;

} _GLFWtlsPOSIX;


int _glfwInitTLS(void);
void _glfwTerminateTLS(void);
void _glfwSetCurrentContext(_GLFWwindow* context);

#endif // _posix_tls_h_
// CG_REVISION 1d384085f04ade0a730db0ed88bbd9f2df80dad9
