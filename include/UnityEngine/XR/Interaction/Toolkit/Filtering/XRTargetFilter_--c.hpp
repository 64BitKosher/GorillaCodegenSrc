// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: XRTargetEvaluator
  class XRTargetEvaluator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetFilter/<>c");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XRTargetFilter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter/<>c <>9
    static ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter/<>c <>9
    static void _set_$$9(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x5432004
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x543206C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRTargetFilter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRTargetFilter::$$c*, creationType>()));
    }
    // System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator> <.cctor>b__49_0()
    // Offset: 0x5432074
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* $_cctor$b__49_0();
    // System.Void <.cctor>b__49_1(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator> list)
    // Offset: 0x54320DC
    void $_cctor$b__49_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* list);
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::$_cctor$b__49_0
// Il2CppName: <.cctor>b__49_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* (UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::$_cctor$b__49_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c*), "<.cctor>b__49_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::$_cctor$b__49_1
// Il2CppName: <.cctor>b__49_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c::$_cctor$b__49_1)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetEvaluator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::$$c*), "<.cctor>b__49_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};