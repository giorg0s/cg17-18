//========================================================================
// GLFW 3.1 Linux - www.glfw.org
//------------------------------------------------------------------------
// Copyright (c) 2014 Jonas Ådahl <jadahl@gmail.com>
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

#ifndef _linux_joystick_h_
#define _linux_joystick_h_

#include <regex.h>

#define _GLFW_PLATFORM_LIBRARY_JOYSTICK_STATE \
    _GLFWjoystickLinux linux_js


// Linux-specific joystick API data
//
typedef struct _GLFWjoystickLinux
{
    struct
    {
        int             present;
        int             fd;
        float*          axes;
        int             axisCount;
        unsigned char*  buttons;
        int             buttonCount;
        char*           name;
        char*           path;
    } js[GLFW_JOYSTICK_LAST + 1];

#if defined(__linux__)
    int             inotify;
    int             watch;
    regex_t         regex;
#endif /*__linux__*/
} _GLFWjoystickLinux;


int _glfwInitJoysticks(void);
void _glfwTerminateJoysticks(void);

#endif // _linux_joystick_h_
// CG_REVISION 1d384085f04ade0a730db0ed88bbd9f2df80dad9
