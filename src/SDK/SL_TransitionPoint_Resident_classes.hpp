#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SL_TransitionPoint_Resident

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SL_TransitionPoint_Resident.SL_TransitionPoint_Resident_C
// 0x0000 (0x0228 - 0x0228)
class ASL_TransitionPoint_Resident_C final : public ALevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SL_TransitionPoint_Resident_C">();
	}
	static class ASL_TransitionPoint_Resident_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASL_TransitionPoint_Resident_C>();
	}
};
static_assert(alignof(ASL_TransitionPoint_Resident_C) == 0x000008, "Wrong alignment on ASL_TransitionPoint_Resident_C");
static_assert(sizeof(ASL_TransitionPoint_Resident_C) == 0x000228, "Wrong size on ASL_TransitionPoint_Resident_C");

}
