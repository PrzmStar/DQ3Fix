#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DLCBoxEventBase

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DLCBoxEventBase.BP_DLCBoxEventBase_C
// 0x0000 (0x0270 - 0x0270)
class ABP_DLCBoxEventBase_C : public ADLCBoxEvent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DLCBoxEventBase_C">();
	}
	static class ABP_DLCBoxEventBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DLCBoxEventBase_C>();
	}
};
static_assert(alignof(ABP_DLCBoxEventBase_C) == 0x000008, "Wrong alignment on ABP_DLCBoxEventBase_C");
static_assert(sizeof(ABP_DLCBoxEventBase_C) == 0x000270, "Wrong size on ABP_DLCBoxEventBase_C");

}

