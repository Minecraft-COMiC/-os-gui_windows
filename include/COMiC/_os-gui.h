#include <COMiC/types.h>
#include <COMiC/os.h>

#ifndef COMiC__OS_GUI_H
#define COMiC__OS_GUI_H

#include <Windows.h>

#if COMiC_LIMITED
# pragma pack(push, 1)
#endif

typedef struct _COMiC_OSGui_Instance _COMiC_OSGui_Instance;

struct _COMiC_OSGui_Instance
{
    _COMiC_OS_Instance *_owner;
};

#if COMiC_LIMITED
# pragma pop()
#endif

#endif /* COMiC__OS_GUI_H */