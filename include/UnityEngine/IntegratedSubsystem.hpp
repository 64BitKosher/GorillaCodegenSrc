// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISubsystem
#include "UnityEngine/ISubsystem.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::IntegratedSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystem*, "UnityEngine", "IntegratedSubsystem");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.IntegratedSubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class IntegratedSubsystem : public ::Il2CppObject/*, public ::UnityEngine::ISubsystem*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // UnityEngine.ISubsystemDescriptor m_SubsystemDescriptor
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ISubsystemDescriptor* m_SubsystemDescriptor;
    // Field size check
    static_assert(sizeof(::UnityEngine::ISubsystemDescriptor*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISubsystem
    operator ::UnityEngine::ISubsystem() noexcept {
      return *reinterpret_cast<::UnityEngine::ISubsystem*>(this);
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: UnityEngine.ISubsystemDescriptor m_SubsystemDescriptor
    [[deprecated("Use field access instead!")]] ::UnityEngine::ISubsystemDescriptor*& dyn_m_SubsystemDescriptor();
    // System.Void SetHandle(UnityEngine.IntegratedSubsystem subsystem)
    // Offset: 0x553CF24
    void SetHandle(::UnityEngine::IntegratedSubsystem* subsystem);
    // public System.Void Start()
    // Offset: 0x553CF68
    void Start();
    // public System.Void Stop()
    // Offset: 0x553CFA4
    void Stop();
    // public System.Void Destroy()
    // Offset: 0x553CFE0
    void Destroy();
    // public System.Boolean get_running()
    // Offset: 0x553D1FC
    bool get_running();
    // System.Boolean get_valid()
    // Offset: 0x553D25C
    bool get_valid();
    // System.Boolean IsRunning()
    // Offset: 0x553D26C
    bool IsRunning();
    // public System.Void .ctor()
    // Offset: 0x553D2A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::IntegratedSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystem*, creationType>()));
    }
  }; // UnityEngine.IntegratedSubsystem
  #pragma pack(pop)
  static check_size<sizeof(IntegratedSubsystem), 24 + sizeof(::UnityEngine::ISubsystemDescriptor*)> __UnityEngine_IntegratedSubsystemSizeCheck;
  static_assert(sizeof(IntegratedSubsystem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::SetHandle
// Il2CppName: SetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::IntegratedSubsystem::*)(::UnityEngine::IntegratedSubsystem*)>(&UnityEngine::IntegratedSubsystem::SetHandle)> {
  static const MethodInfo* get() {
    static auto* subsystem = &::il2cpp_utils::GetClassFromName("UnityEngine", "IntegratedSubsystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "SetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subsystem});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::IntegratedSubsystem::*)()>(&UnityEngine::IntegratedSubsystem::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::IntegratedSubsystem::*)()>(&UnityEngine::IntegratedSubsystem::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::IntegratedSubsystem::*)()>(&UnityEngine::IntegratedSubsystem::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::get_running
// Il2CppName: get_running
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::IntegratedSubsystem::*)()>(&UnityEngine::IntegratedSubsystem::get_running)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "get_running", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::get_valid
// Il2CppName: get_valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::IntegratedSubsystem::*)()>(&UnityEngine::IntegratedSubsystem::get_valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "get_valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::IsRunning
// Il2CppName: IsRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::IntegratedSubsystem::*)()>(&UnityEngine::IntegratedSubsystem::IsRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystem*), "IsRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
