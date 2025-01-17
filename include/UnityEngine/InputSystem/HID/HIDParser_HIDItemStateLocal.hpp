// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.HID.HIDParser
#include "UnityEngine/InputSystem/HID/HIDParser.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal");
// Type namespace: UnityEngine.InputSystem.HID
namespace UnityEngine::InputSystem::HID {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.HID.HIDParser/HIDItemStateLocal
  // [TokenAttribute] Offset: FFFFFFFF
  struct HIDParser::HIDItemStateLocal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Nullable`1<System.Int32> usage
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Nullable_1<int> usage;
    // public System.Nullable`1<System.Int32> usageMinimum
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Nullable_1<int> usageMinimum;
    // public System.Nullable`1<System.Int32> usageMaximum
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<int> usageMaximum;
    // public System.Nullable`1<System.Int32> designatorIndex
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<int> designatorIndex;
    // public System.Nullable`1<System.Int32> designatorMinimum
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<int> designatorMinimum;
    // public System.Nullable`1<System.Int32> designatorMaximum
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<int> designatorMaximum;
    // public System.Nullable`1<System.Int32> stringIndex
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Nullable_1<int> stringIndex;
    // public System.Nullable`1<System.Int32> stringMinimum
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<int> stringMinimum;
    // public System.Nullable`1<System.Int32> stringMaximum
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Nullable_1<int> stringMaximum;
    // public System.Collections.Generic.List`1<System.Int32> usageList
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<int>* usageList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    public:
    // Creating value type constructor for type: HIDItemStateLocal
    constexpr HIDItemStateLocal(::System::Nullable_1<int> usage_ = {}, ::System::Nullable_1<int> usageMinimum_ = {}, ::System::Nullable_1<int> usageMaximum_ = {}, ::System::Nullable_1<int> designatorIndex_ = {}, ::System::Nullable_1<int> designatorMinimum_ = {}, ::System::Nullable_1<int> designatorMaximum_ = {}, ::System::Nullable_1<int> stringIndex_ = {}, ::System::Nullable_1<int> stringMinimum_ = {}, ::System::Nullable_1<int> stringMaximum_ = {}, ::System::Collections::Generic::List_1<int>* usageList_ = {}) noexcept : usage{usage_}, usageMinimum{usageMinimum_}, usageMaximum{usageMaximum_}, designatorIndex{designatorIndex_}, designatorMinimum{designatorMinimum_}, designatorMaximum{designatorMaximum_}, stringIndex{stringIndex_}, stringMinimum{stringMinimum_}, stringMaximum{stringMaximum_}, usageList{usageList_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Nullable`1<System.Int32> usage
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_usage();
    // Get instance field reference: public System.Nullable`1<System.Int32> usageMinimum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_usageMinimum();
    // Get instance field reference: public System.Nullable`1<System.Int32> usageMaximum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_usageMaximum();
    // Get instance field reference: public System.Nullable`1<System.Int32> designatorIndex
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_designatorIndex();
    // Get instance field reference: public System.Nullable`1<System.Int32> designatorMinimum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_designatorMinimum();
    // Get instance field reference: public System.Nullable`1<System.Int32> designatorMaximum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_designatorMaximum();
    // Get instance field reference: public System.Nullable`1<System.Int32> stringIndex
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_stringIndex();
    // Get instance field reference: public System.Nullable`1<System.Int32> stringMinimum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_stringMinimum();
    // Get instance field reference: public System.Nullable`1<System.Int32> stringMaximum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_stringMaximum();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Int32> usageList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_usageList();
    // static public System.Void Reset(ref UnityEngine.InputSystem.HID.HIDParser/HIDItemStateLocal state)
    // Offset: 0x5141E78
    static void Reset(ByRef<::UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal> state);
    // public System.Void SetUsage(System.Int32 value)
    // Offset: 0x5141EE8
    void SetUsage(int value);
    // public System.Int32 GetUsage(System.Int32 index)
    // Offset: 0x5142068
    int GetUsage(int index);
  }; // UnityEngine.InputSystem.HID.HIDParser/HIDItemStateLocal
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal>)>(&UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::Reset)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::SetUsage
// Il2CppName: SetUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::*)(int)>(&UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::SetUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal), "SetUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::GetUsage
// Il2CppName: GetUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::*)(int)>(&UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal::GetUsage)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal), "GetUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
