// chao-spin-swap.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <SADXModLoader.h>

static const int button = Buttons_X;
PatchInfo patches[] = {
	{ (void*)0x0040FDD0, &button, sizeof(int) }
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) PatchList Patches[] = { { arrayptrandlength(patches) } };
}
