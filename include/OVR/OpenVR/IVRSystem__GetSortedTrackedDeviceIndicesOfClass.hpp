// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*, "OVR.OpenVR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVRSystem::_GetSortedTrackedDeviceIndicesOfClass : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x496BBA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetSortedTrackedDeviceIndicesOfClass* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(OVR.OpenVR.ETrackedDeviceClass eTrackedDeviceClass, in System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unTrackedDeviceIndexArrayCount, System.UInt32 unRelativeToTrackedDeviceIndex)
    // Offset: 0x496BC44
    uint Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ByRef<::ArrayW<uint>> punTrackedDeviceIndexArray, uint unTrackedDeviceIndexArrayCount, uint unRelativeToTrackedDeviceIndex);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackedDeviceClass eTrackedDeviceClass, in System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unTrackedDeviceIndexArrayCount, System.UInt32 unRelativeToTrackedDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x496BC58
    ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ByRef<::ArrayW<uint>> punTrackedDeviceIndexArray, uint unTrackedDeviceIndexArrayCount, uint unRelativeToTrackedDeviceIndex, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x496BD30
    uint EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::*)(::OVR::OpenVR::ETrackedDeviceClass, ByRef<::ArrayW<uint>>, uint, uint)>(&OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::Invoke)> {
  static const MethodInfo* get() {
    static auto* eTrackedDeviceClass = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedDeviceClass")->byval_arg;
    static auto* punTrackedDeviceIndexArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->this_arg;
    static auto* unTrackedDeviceIndexArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unRelativeToTrackedDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::*)(::OVR::OpenVR::ETrackedDeviceClass, ByRef<::ArrayW<uint>>, uint, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eTrackedDeviceClass = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedDeviceClass")->byval_arg;
    static auto* punTrackedDeviceIndexArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->this_arg;
    static auto* unTrackedDeviceIndexArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unRelativeToTrackedDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
