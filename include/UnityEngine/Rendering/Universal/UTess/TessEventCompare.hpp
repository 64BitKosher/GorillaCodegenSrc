// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: UnityEngine.Rendering.Universal.UTess.UEvent
#include "UnityEngine/Rendering/Universal/UTess/UEvent.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: TessEventCompare
  struct TessEventCompare;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::TessEventCompare, "UnityEngine.Rendering.Universal.UTess", "TessEventCompare");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.TessEventCompare
  // [TokenAttribute] Offset: FFFFFFFF
  struct TessEventCompare/*, public ::System::ValueType, public ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::UTess::UEvent>*/ {
    public:
    // Creating value type constructor for type: TessEventCompare
    constexpr TessEventCompare() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::UTess::UEvent>
    operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::UTess::UEvent>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::UTess::UEvent>*>(this);
    }
    // public System.Int32 Compare(UnityEngine.Rendering.Universal.UTess.UEvent a, UnityEngine.Rendering.Universal.UTess.UEvent b)
    // Offset: 0x5321CCC
    int Compare(::UnityEngine::Rendering::Universal::UTess::UEvent a, ::UnityEngine::Rendering::Universal::UTess::UEvent b);
  }; // UnityEngine.Rendering.Universal.UTess.TessEventCompare
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::TessEventCompare::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::UTess::TessEventCompare::*)(::UnityEngine::Rendering::Universal::UTess::UEvent, ::UnityEngine::Rendering::Universal::UTess::UEvent)>(&UnityEngine::Rendering::Universal::UTess::TessEventCompare::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UEvent")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.UTess", "UEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::TessEventCompare), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
