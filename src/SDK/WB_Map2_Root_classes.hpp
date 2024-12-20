#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Map2_Root

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Map2_Root.WB_Map2_Root_C
// 0x0068 (0x0428 - 0x03C0)
class UWB_Map2_Root_C final : public UCommonRootWidget
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG1;                                               // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG2;                                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_List2_C*                       ListRura;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_Window6_C*                     WindowCoin;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_FacilityList_C*              WindowFacility;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_Window3_C*                     WindowKeyGuide;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_NextGuide_Window1_C*           WindowMapGuide;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_Window4_C*                     WindowMenu;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_Window5_C*                     WindowSort;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_Window2_C*                     WindowTownMap;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Map2_Window1_C*                     WindowWorldMap;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Map2_Root_C">();
	}
	static class UWB_Map2_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Map2_Root_C>();
	}
};
static_assert(alignof(UWB_Map2_Root_C) == 0x000008, "Wrong alignment on UWB_Map2_Root_C");
static_assert(sizeof(UWB_Map2_Root_C) == 0x000428, "Wrong size on UWB_Map2_Root_C");
static_assert(offsetof(UWB_Map2_Root_C, Out) == 0x0003C0, "Member 'UWB_Map2_Root_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, In) == 0x0003C8, "Member 'UWB_Map2_Root_C::In' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, BG1) == 0x0003D0, "Member 'UWB_Map2_Root_C::BG1' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, BG2) == 0x0003D8, "Member 'UWB_Map2_Root_C::BG2' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, ListRura) == 0x0003E0, "Member 'UWB_Map2_Root_C::ListRura' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowCoin) == 0x0003E8, "Member 'UWB_Map2_Root_C::WindowCoin' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowFacility) == 0x0003F0, "Member 'UWB_Map2_Root_C::WindowFacility' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowKeyGuide) == 0x0003F8, "Member 'UWB_Map2_Root_C::WindowKeyGuide' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowMapGuide) == 0x000400, "Member 'UWB_Map2_Root_C::WindowMapGuide' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowMenu) == 0x000408, "Member 'UWB_Map2_Root_C::WindowMenu' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowSort) == 0x000410, "Member 'UWB_Map2_Root_C::WindowSort' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowTownMap) == 0x000418, "Member 'UWB_Map2_Root_C::WindowTownMap' has a wrong offset!");
static_assert(offsetof(UWB_Map2_Root_C, WindowWorldMap) == 0x000420, "Member 'UWB_Map2_Root_C::WindowWorldMap' has a wrong offset!");

}

