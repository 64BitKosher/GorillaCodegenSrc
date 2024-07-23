// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRSelectFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRSelectInteractor
  class IXRSelectInteractor;
  // Forward declaring type: IXRSelectInteractable
  class IXRSelectInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: XRSelectFilterDelegate
  class XRSelectFilterDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRSelectFilterDelegate");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.XRSelectFilterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class XRSelectFilterDelegate : public ::Il2CppObject/*, public ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*/ {
    public:
    public:
    // private System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Boolean> <delegateToProcess>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>* delegateToProcess;
    // Field size check
    static_assert(sizeof(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>*) == 0x8);
    // private System.Boolean <canProcess>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool canProcess;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter
    operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(this);
    }
    // Get instance field reference: private System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Boolean> <delegateToProcess>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>*& dyn_$delegateToProcess$k__BackingField();
    // Get instance field reference: private System.Boolean <canProcess>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$canProcess$k__BackingField();
    // public System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Boolean> get_delegateToProcess()
    // Offset: 0x542E084
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>* get_delegateToProcess();
    // public System.Void set_delegateToProcess(System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Boolean> value)
    // Offset: 0x542E08C
    void set_delegateToProcess(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>* value);
    // public System.Boolean get_canProcess()
    // Offset: 0x542E094
    bool get_canProcess();
    // public System.Void set_canProcess(System.Boolean value)
    // Offset: 0x542E09C
    void set_canProcess(bool value);
    // public System.Void .ctor(System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Boolean> delegateToProcess)
    // Offset: 0x542E0A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRSelectFilterDelegate* New_ctor(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>* delegateToProcess) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRSelectFilterDelegate*, creationType>(delegateToProcess)));
    }
    // public System.Boolean Process(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor interactor, UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable interactable)
    // Offset: 0x542E12C
    bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.XRSelectFilterDelegate
  #pragma pack(pop)
  static check_size<sizeof(XRSelectFilterDelegate), 24 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_Filtering_XRSelectFilterDelegateSizeCheck;
  static_assert(sizeof(XRSelectFilterDelegate) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::get_delegateToProcess
// Il2CppName: get_delegateToProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>* (UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::get_delegateToProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate*), "get_delegateToProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::set_delegateToProcess
// Il2CppName: set_delegateToProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::*)(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, bool>*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::set_delegateToProcess)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractor"), ::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractable"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate*), "set_delegateToProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::get_canProcess
// Il2CppName: get_canProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::get_canProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate*), "get_canProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::set_canProcess
// Il2CppName: set_canProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::set_canProcess)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate*), "set_canProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::*)(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate::Process)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractor")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRSelectFilterDelegate*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, interactable});
  }
};
