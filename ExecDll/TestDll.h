#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define DLLImport __declspec(dllimport)

DLLImport double GetSA(double radius);
DLLImport double GetVol(double radius);

#ifdef __cplusplus
};
#endif