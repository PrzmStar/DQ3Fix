#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MessageWindow_Root

#include "Basic.hpp"

#include "Nicola_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MessageWindow_Root.WB_MessageWindow_Root_C
// 0x0030 (0x03F0 - 0x03C0)
class UWB_MessageWindow_Root_C final : public UCommonRootWidget
{
public:
	class UWB_Common_ChoiceList_C*                ListYesNo;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_ChoiceList1_C*               ListYesNo1;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNicolaRichTextBlock*                   WidthCheckText;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Message_Window_C*                   WindowMessageBottom;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Message_Window_C*                   WindowMessageCenter;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Message_Window_C*                   WindowMessageTop;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MessageWindow_Root_C">();
	}
	static class UWB_MessageWindow_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MessageWindow_Root_C>();
	}
};
static_assert(alignof(UWB_MessageWindow_Root_C) == 0x000008, "Wrong alignment on UWB_MessageWindow_Root_C");
static_assert(sizeof(UWB_MessageWindow_Root_C) == 0x0003F0, "Wrong size on UWB_MessageWindow_Root_C");
static_assert(offsetof(UWB_MessageWindow_Root_C, ListYesNo) == 0x0003C0, "Member 'UWB_MessageWindow_Root_C::ListYesNo' has a wrong offset!");
static_assert(offsetof(UWB_MessageWindow_Root_C, ListYesNo1) == 0x0003C8, "Member 'UWB_MessageWindow_Root_C::ListYesNo1' has a wrong offset!");
static_assert(offsetof(UWB_MessageWindow_Root_C, WidthCheckText) == 0x0003D0, "Member 'UWB_MessageWindow_Root_C::WidthCheckText' has a wrong offset!");
static_assert(offsetof(UWB_MessageWindow_Root_C, WindowMessageBottom) == 0x0003D8, "Member 'UWB_MessageWindow_Root_C::WindowMessageBottom' has a wrong offset!");
static_assert(offsetof(UWB_MessageWindow_Root_C, WindowMessageCenter) == 0x0003E0, "Member 'UWB_MessageWindow_Root_C::WindowMessageCenter' has a wrong offset!");
static_assert(offsetof(UWB_MessageWindow_Root_C, WindowMessageTop) == 0x0003E8, "Member 'UWB_MessageWindow_Root_C::WindowMessageTop' has a wrong offset!");

}

