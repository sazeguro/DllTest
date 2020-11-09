// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다.
#include "pch.h"

#define _USE_MATH_DEFINES
#include <cmath>
#include "myheader.h"

//#ifdef __cplusplus
//extern "C" {
//#endif
//
//BOOL APIENTRY DllMain( HMODULE hModule,
//                       DWORD  ul_reason_for_call,
//                       LPVOID lpReserved
//                     )
//{
//    switch (ul_reason_for_call)
//    {
//    case DLL_PROCESS_ATTACH:
//    case DLL_THREAD_ATTACH:
//    case DLL_THREAD_DETACH:
//    case DLL_PROCESS_DETACH:
//        break;
//    }
//    return TRUE;
//}

double GetSA(double radius)
{
    return 4 * M_PI * radius * radius;
}

double GetVol(double radius)
{
    return 4.0 / 3.0 * M_PI * pow(radius, 3.0);
}

//#ifdef __cplusplus
//};
//#endif