// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: ComputeBuffer
  class ComputeBuffer;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ComputeShader
  class ComputeShader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ComputeShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ComputeShader
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  class ComputeShader : public ::UnityEngine::Object {
    public:
    // public System.Int32 FindKernel(System.String name)
    // Offset: 0x54CC618
    int FindKernel(::StringW name);
    // public System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 val)
    // Offset: 0x54CC65C
    void SetVector(int nameID, ::UnityEngine::Vector4 val);
    // private System.Void SetIntArray(System.Int32 nameID, System.Int32[] values)
    // Offset: 0x54CC70C
    void SetIntArray(int nameID, ::ArrayW<int> values);
    // private System.Void Internal_SetBuffer(System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.ComputeBuffer buffer)
    // Offset: 0x54CC760
    void Internal_SetBuffer(int kernelIndex, int nameID, ::UnityEngine::ComputeBuffer* buffer);
    // public System.Void SetBuffer(System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.ComputeBuffer buffer)
    // Offset: 0x54CC7BC
    void SetBuffer(int kernelIndex, int nameID, ::UnityEngine::ComputeBuffer* buffer);
    // public System.Void Dispatch(System.Int32 kernelIndex, System.Int32 threadGroupsX, System.Int32 threadGroupsY, System.Int32 threadGroupsZ)
    // Offset: 0x54CC818
    void Dispatch(int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);
    // public System.Void SetInts(System.Int32 nameID, params System.Int32[] values)
    // Offset: 0x54CC884
    void SetInts(int nameID, ::ArrayW<int> values);
    // private System.Void SetVector_Injected(System.Int32 nameID, ref UnityEngine.Vector4 val)
    // Offset: 0x54CC6B8
    void SetVector_Injected(int nameID, ByRef<::UnityEngine::Vector4> val);
  }; // UnityEngine.ComputeShader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ComputeShader::FindKernel
// Il2CppName: FindKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ComputeShader::*)(::StringW)>(&UnityEngine::ComputeShader::FindKernel)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "FindKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::SetVector
// Il2CppName: SetVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, ::UnityEngine::Vector4)>(&UnityEngine::ComputeShader::SetVector)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "SetVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, val});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::SetIntArray
// Il2CppName: SetIntArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, ::ArrayW<int>)>(&UnityEngine::ComputeShader::SetIntArray)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "SetIntArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::Internal_SetBuffer
// Il2CppName: Internal_SetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, int, ::UnityEngine::ComputeBuffer*)>(&UnityEngine::ComputeShader::Internal_SetBuffer)> {
  static const MethodInfo* get() {
    static auto* kernelIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("UnityEngine", "ComputeBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "Internal_SetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kernelIndex, nameID, buffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::SetBuffer
// Il2CppName: SetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, int, ::UnityEngine::ComputeBuffer*)>(&UnityEngine::ComputeShader::SetBuffer)> {
  static const MethodInfo* get() {
    static auto* kernelIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("UnityEngine", "ComputeBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "SetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kernelIndex, nameID, buffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::Dispatch
// Il2CppName: Dispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, int, int, int)>(&UnityEngine::ComputeShader::Dispatch)> {
  static const MethodInfo* get() {
    static auto* kernelIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* threadGroupsX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* threadGroupsY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* threadGroupsZ = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "Dispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::SetInts
// Il2CppName: SetInts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, ::ArrayW<int>)>(&UnityEngine::ComputeShader::SetInts)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "SetInts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::ComputeShader::SetVector_Injected
// Il2CppName: SetVector_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ComputeShader::*)(int, ByRef<::UnityEngine::Vector4>)>(&UnityEngine::ComputeShader::SetVector_Injected)> {
  static const MethodInfo* get() {
    static auto* nameID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ComputeShader*), "SetVector_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameID, val});
  }
};
