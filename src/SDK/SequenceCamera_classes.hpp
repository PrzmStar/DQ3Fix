#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SequenceCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SequenceCamera_structs.hpp"
#include "CinematicCamera_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SequenceCamera.SequenceCameraActor
// 0x0010 (0x0820 - 0x0810)
class ASequenceCameraActor : public ACineCameraActor
{
public:
	ELookatTrackingRotateBase                     LookatTrackingRotateBase;                          // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_811[0xF];                                      // 0x0811(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraActor">();
	}
	static class ASequenceCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASequenceCameraActor>();
	}
};
static_assert(alignof(ASequenceCameraActor) == 0x000010, "Wrong alignment on ASequenceCameraActor");
static_assert(sizeof(ASequenceCameraActor) == 0x000820, "Wrong size on ASequenceCameraActor");
static_assert(offsetof(ASequenceCameraActor, LookatTrackingRotateBase) == 0x000810, "Member 'ASequenceCameraActor::LookatTrackingRotateBase' has a wrong offset!");

// Class SequenceCamera.SequenceCameraManager
// 0x0130 (0x0350 - 0x0220)
class ASequenceCameraManager : public AActor
{
public:
	class ALevelSequenceActor*                    curSequenceActor;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                   curSequencePlayer;                                 // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                       curCameraComponent;                                // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceCameraInfo                    Info;                                              // 0x0238(0x00B8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         scaleBaseRadius;                                   // 0x02F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams            InBlendDefaultParam;                               // 0x02F4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams            OutBlendDefaultParam;                              // 0x0304(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                WorldForward;                                      // 0x0314(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams            OutBlendParam;                                     // 0x0320(0x0010)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCameraModifier_BlendAroundActor*       CameraModifier;                                    // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 lastCameraActor;                                   // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static struct FSequenceCameraTargetInfo MakeSequenceCameraTargetInfoByActor(class AActor* targetActor_);
	static struct FSequenceCameraTargetInfo MakeSequenceCameraTargetInfoByTransform(const struct FVector& targetLocation_, const struct FVector& targetForward_, float targetRadius_);

	void Blend();
	void BlendIn();
	void BlendInWithParam(const struct FViewTargetTransitionParams& InBlendParam_);
	void BlendOut();
	void BlendOutWithParam(const struct FViewTargetTransitionParams& OutBlendParam_);
	void BlendWithParam(const struct FViewTargetTransitionParams& InBlendParam_, const struct FViewTargetTransitionParams& OutBlendParam_);
	void EndSequence();
	TArray<class AActor*> GetEventReceivers();
	void OnCameraCut(class UCameraComponent* CameraComponent);
	void Pause();
	void PauseSequence();
	void ResumeSequence();
	void StartSequence(const struct FSequenceCameraInfo& info_);
	void StopSequence(float OutBlendTime);

	bool CheckInfo(const struct FSequenceCameraInfo& info_) const;
	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraManager">();
	}
	static class ASequenceCameraManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASequenceCameraManager>();
	}
};
static_assert(alignof(ASequenceCameraManager) == 0x000008, "Wrong alignment on ASequenceCameraManager");
static_assert(sizeof(ASequenceCameraManager) == 0x000350, "Wrong size on ASequenceCameraManager");
static_assert(offsetof(ASequenceCameraManager, curSequenceActor) == 0x000220, "Member 'ASequenceCameraManager::curSequenceActor' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, curSequencePlayer) == 0x000228, "Member 'ASequenceCameraManager::curSequencePlayer' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, curCameraComponent) == 0x000230, "Member 'ASequenceCameraManager::curCameraComponent' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, Info) == 0x000238, "Member 'ASequenceCameraManager::Info' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, scaleBaseRadius) == 0x0002F0, "Member 'ASequenceCameraManager::scaleBaseRadius' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, InBlendDefaultParam) == 0x0002F4, "Member 'ASequenceCameraManager::InBlendDefaultParam' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, OutBlendDefaultParam) == 0x000304, "Member 'ASequenceCameraManager::OutBlendDefaultParam' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, WorldForward) == 0x000314, "Member 'ASequenceCameraManager::WorldForward' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, OutBlendParam) == 0x000320, "Member 'ASequenceCameraManager::OutBlendParam' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, CameraModifier) == 0x000330, "Member 'ASequenceCameraManager::CameraModifier' has a wrong offset!");
static_assert(offsetof(ASequenceCameraManager, lastCameraActor) == 0x000340, "Member 'ASequenceCameraManager::lastCameraActor' has a wrong offset!");

// Class SequenceCamera.CameraModifier_BlendAroundActor
// 0x0068 (0x00B0 - 0x0048)
class UCameraModifier_BlendAroundActor final : public UCameraModifier
{
public:
	class AActor*                                 baseActor;                                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                 otherCameraActor;                                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_58[0x58];                                      // 0x0058(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BlendIn(class AActor* InBaseActor, const struct FViewTargetTransitionParams& TransitionParams, EBlendCoordinate EBlendCoordinate);
	void BlendOut(class AActor* InBaseActor, class AActor* InOtherCameraActor, const struct FViewTargetTransitionParams& TransitionParams, EBlendCoordinate EBlendCoordinate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraModifier_BlendAroundActor">();
	}
	static class UCameraModifier_BlendAroundActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraModifier_BlendAroundActor>();
	}
};
static_assert(alignof(UCameraModifier_BlendAroundActor) == 0x000008, "Wrong alignment on UCameraModifier_BlendAroundActor");
static_assert(sizeof(UCameraModifier_BlendAroundActor) == 0x0000B0, "Wrong size on UCameraModifier_BlendAroundActor");
static_assert(offsetof(UCameraModifier_BlendAroundActor, baseActor) == 0x000048, "Member 'UCameraModifier_BlendAroundActor::baseActor' has a wrong offset!");
static_assert(offsetof(UCameraModifier_BlendAroundActor, otherCameraActor) == 0x000050, "Member 'UCameraModifier_BlendAroundActor::otherCameraActor' has a wrong offset!");

// Class SequenceCamera.NotifyCameraCutInterface
// 0x0000 (0x0028 - 0x0028)
class INotifyCameraCutInterface final : public IInterface
{
public:
	void NotifyCameraCut();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NotifyCameraCutInterface">();
	}
	static class INotifyCameraCutInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INotifyCameraCutInterface>();
	}
};
static_assert(alignof(INotifyCameraCutInterface) == 0x000008, "Wrong alignment on INotifyCameraCutInterface");
static_assert(sizeof(INotifyCameraCutInterface) == 0x000028, "Wrong size on INotifyCameraCutInterface");

// Class SequenceCamera.SequenceCameraBaseActor
// 0x0098 (0x02B8 - 0x0220)
class ASequenceCameraBaseActor : public AActor
{
public:
	uint8                                         Pad_220[0x8];                                      // 0x0220(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESequenceCameraLocation                       CameraLocation;                                    // 0x0228(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESequenceCameraForward                        CameraForward;                                     // 0x0229(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A[0x2];                                      // 0x022A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleMin;                                          // 0x022C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleMax;                                          // 0x0230(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTrackLocation;                                    // 0x0234(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTrackForward;                                     // 0x0235(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_236[0x2];                                      // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TrackingInterpSpeed;                               // 0x0238(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetActorInEditor;                               // 0x0240(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreFlip;                                       // 0x0248(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCameraDistance;                                   // 0x0249(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24A[0xE];                                      // 0x024A(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	class ASequenceCameraManager*                 manager;                                           // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSequenceCameraTargetInfo              targetInfo;                                        // 0x0260(0x0028)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_288[0x30];                                     // 0x0288(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BeginTransform(class ASequenceCameraManager* man);
	void EndTransform();
	void SetTargetActorInEditor(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraBaseActor">();
	}
	static class ASequenceCameraBaseActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASequenceCameraBaseActor>();
	}
};
static_assert(alignof(ASequenceCameraBaseActor) == 0x000008, "Wrong alignment on ASequenceCameraBaseActor");
static_assert(sizeof(ASequenceCameraBaseActor) == 0x0002B8, "Wrong size on ASequenceCameraBaseActor");
static_assert(offsetof(ASequenceCameraBaseActor, CameraLocation) == 0x000228, "Member 'ASequenceCameraBaseActor::CameraLocation' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, CameraForward) == 0x000229, "Member 'ASequenceCameraBaseActor::CameraForward' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, ScaleMin) == 0x00022C, "Member 'ASequenceCameraBaseActor::ScaleMin' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, ScaleMax) == 0x000230, "Member 'ASequenceCameraBaseActor::ScaleMax' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, bTrackLocation) == 0x000234, "Member 'ASequenceCameraBaseActor::bTrackLocation' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, bTrackForward) == 0x000235, "Member 'ASequenceCameraBaseActor::bTrackForward' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, TrackingInterpSpeed) == 0x000238, "Member 'ASequenceCameraBaseActor::TrackingInterpSpeed' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, TargetActorInEditor) == 0x000240, "Member 'ASequenceCameraBaseActor::TargetActorInEditor' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, bIgnoreFlip) == 0x000248, "Member 'ASequenceCameraBaseActor::bIgnoreFlip' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, bCameraDistance) == 0x000249, "Member 'ASequenceCameraBaseActor::bCameraDistance' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, manager) == 0x000258, "Member 'ASequenceCameraBaseActor::manager' has a wrong offset!");
static_assert(offsetof(ASequenceCameraBaseActor, targetInfo) == 0x000260, "Member 'ASequenceCameraBaseActor::targetInfo' has a wrong offset!");

// Class SequenceCamera.SequenceCameraCenterBaseActor
// 0x0020 (0x02D8 - 0x02B8)
class ASequenceCameraCenterBaseActor final : public ASequenceCameraBaseActor
{
public:
	float                                         CenterRate;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScaleWithDistance;                                // 0x02BC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2BD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                AttackerLocationInEditor;                          // 0x02C0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DefenderLocationInEditor;                          // 0x02CC(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetCenterRate(float Rate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraCenterBaseActor">();
	}
	static class ASequenceCameraCenterBaseActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASequenceCameraCenterBaseActor>();
	}
};
static_assert(alignof(ASequenceCameraCenterBaseActor) == 0x000008, "Wrong alignment on ASequenceCameraCenterBaseActor");
static_assert(sizeof(ASequenceCameraCenterBaseActor) == 0x0002D8, "Wrong size on ASequenceCameraCenterBaseActor");
static_assert(offsetof(ASequenceCameraCenterBaseActor, CenterRate) == 0x0002B8, "Member 'ASequenceCameraCenterBaseActor::CenterRate' has a wrong offset!");
static_assert(offsetof(ASequenceCameraCenterBaseActor, bScaleWithDistance) == 0x0002BC, "Member 'ASequenceCameraCenterBaseActor::bScaleWithDistance' has a wrong offset!");
static_assert(offsetof(ASequenceCameraCenterBaseActor, AttackerLocationInEditor) == 0x0002C0, "Member 'ASequenceCameraCenterBaseActor::AttackerLocationInEditor' has a wrong offset!");
static_assert(offsetof(ASequenceCameraCenterBaseActor, DefenderLocationInEditor) == 0x0002CC, "Member 'ASequenceCameraCenterBaseActor::DefenderLocationInEditor' has a wrong offset!");

}
