#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveIcon_Window

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SaveIcon_Window.WB_SaveIcon_Window_C
// 0x0020 (0x03D0 - 0x03B0)
class UWB_SaveIcon_Window_C final : public UCommonWindowWidget
{
public:
	class UWB_SaveIcon_WindowItem00_C*            Zero0;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SaveIcon_WindowItem00_C*            Zero1;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SaveIcon_WindowItem02_C*            Zero2;                                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SaveIcon_WindowItem03_C*            Zero3;                                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SaveIcon_Window_C">();
	}
	static class UWB_SaveIcon_Window_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SaveIcon_Window_C>();
	}
};
static_assert(alignof(UWB_SaveIcon_Window_C) == 0x000008, "Wrong alignment on UWB_SaveIcon_Window_C");
static_assert(sizeof(UWB_SaveIcon_Window_C) == 0x0003D0, "Wrong size on UWB_SaveIcon_Window_C");
static_assert(offsetof(UWB_SaveIcon_Window_C, Zero0) == 0x0003B0, "Member 'UWB_SaveIcon_Window_C::Zero0' has a wrong offset!");
static_assert(offsetof(UWB_SaveIcon_Window_C, Zero1) == 0x0003B8, "Member 'UWB_SaveIcon_Window_C::Zero1' has a wrong offset!");
static_assert(offsetof(UWB_SaveIcon_Window_C, Zero2) == 0x0003C0, "Member 'UWB_SaveIcon_Window_C::Zero2' has a wrong offset!");
static_assert(offsetof(UWB_SaveIcon_Window_C, Zero3) == 0x0003C8, "Member 'UWB_SaveIcon_Window_C::Zero3' has a wrong offset!");

}
