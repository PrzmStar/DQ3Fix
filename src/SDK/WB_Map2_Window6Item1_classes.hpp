#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Map2_Window6Item1

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Map2_Window6Item1.WB_Map2_Window6Item1_C
// 0x0010 (0x0338 - 0x0328)
class UWB_Map2_Window6Item1_C final : public UCommonItemWidget
{
public:
	class UImage*                                 BG;                                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Map2_Window6Item1_C">();
	}
	static class UWB_Map2_Window6Item1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Map2_Window6Item1_C>();
	}
};
static_assert(alignof(UWB_Map2_Window6Item1_C) == 0x000008, "Wrong alignment on UWB_Map2_Window6Item1_C");
static_assert(sizeof(UWB_Map2_Window6Item1_C) == 0x000338, "Wrong size on UWB_Map2_Window6Item1_C");
static_assert(offsetof(UWB_Map2_Window6Item1_C, BG) == 0x000328, "Member 'UWB_Map2_Window6Item1_C::BG' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Window6Item1_C, ItemIcon) == 0x000330, "Member 'UWB_Map2_Window6Item1_C::ItemIcon' has a wrong offset!");

}

