#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveIcon_WindowItem02

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SaveIcon_WindowItem02.WB_SaveIcon_WindowItem02_C
// 0x0008 (0x0330 - 0x0328)
class UWB_SaveIcon_WindowItem02_C final : public UCommonItemWidget
{
public:
	class UImage*                                 IconBook;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SaveIcon_WindowItem02_C">();
	}
	static class UWB_SaveIcon_WindowItem02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SaveIcon_WindowItem02_C>();
	}
};
static_assert(alignof(UWB_SaveIcon_WindowItem02_C) == 0x000008, "Wrong alignment on UWB_SaveIcon_WindowItem02_C");
static_assert(sizeof(UWB_SaveIcon_WindowItem02_C) == 0x000330, "Wrong size on UWB_SaveIcon_WindowItem02_C");
static_assert(offsetof(UWB_SaveIcon_WindowItem02_C, IconBook) == 0x000328, "Member 'UWB_SaveIcon_WindowItem02_C::IconBook' has a wrong offset!");

}
