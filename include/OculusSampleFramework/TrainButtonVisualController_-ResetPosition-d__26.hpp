// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusSampleFramework.TrainButtonVisualController
#include "OculusSampleFramework/TrainButtonVisualController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26*, "OculusSampleFramework", "TrainButtonVisualController/<ResetPosition>d__26");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TrainButtonVisualController::$ResetPosition$d__26 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public OculusSampleFramework.TrainButtonVisualController <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::OculusSampleFramework::TrainButtonVisualController* $$4__this;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::TrainButtonVisualController*) == 0x8);
    // private System.Single <startTime>5__2
    // Size: 0x4
    // Offset: 0x28
    float $startTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <endTime>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $endTime$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public OculusSampleFramework.TrainButtonVisualController <>4__this
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::TrainButtonVisualController*& dyn_$$4__this();
    // Get instance field reference: private System.Single <startTime>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$startTime$5__2();
    // Get instance field reference: private System.Single <endTime>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$endTime$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x282D16C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrainButtonVisualController::$ResetPosition$d__26* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrainButtonVisualController::$ResetPosition$d__26*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x282D1C0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x282D1C4
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x282D338
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x282D340
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x282D378
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // OculusSampleFramework.TrainButtonVisualController/<ResetPosition>d__26
  #pragma pack(pop)
  static check_size<sizeof(TrainButtonVisualController::$ResetPosition$d__26), 44 + sizeof(float)> __OculusSampleFramework_TrainButtonVisualController_$ResetPosition$d__26SizeCheck;
  static_assert(sizeof(TrainButtonVisualController::$ResetPosition$d__26) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::*)()>(&OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::*)()>(&OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::*)()>(&OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::*)()>(&OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::*)()>(&OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainButtonVisualController::$ResetPosition$d__26*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
