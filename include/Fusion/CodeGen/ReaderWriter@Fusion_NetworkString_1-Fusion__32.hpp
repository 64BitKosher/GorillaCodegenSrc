// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.IElementReaderWriter`1
#include "Fusion/IElementReaderWriter_1.hpp"
// Including type: Fusion.NetworkString`1
#include "Fusion/NetworkString_1.hpp"
// Including type: Fusion._32
#include "Fusion/_32.hpp"
// Completed includes
// Type namespace: Fusion.CodeGen
namespace Fusion::CodeGen {
  // Forward declaring type: ReaderWriter@Fusion_NetworkString`1<Fusion__32
  struct ReaderWriter@Fusion_NetworkString_1$Fusion__32;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32, "Fusion.CodeGen", "ReaderWriter@Fusion_NetworkString`1<Fusion__32");
// Type namespace: Fusion.CodeGen
namespace Fusion::CodeGen {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__32>
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReaderWriter@Fusion_NetworkString_1$Fusion__32/*, public ::System::ValueType, public ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>*/ {
    public:
    // Creating value type constructor for type: ReaderWriter@Fusion_NetworkString_1$Fusion__32
    constexpr ReaderWriter@Fusion_NetworkString_1$Fusion__32() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>
    operator ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>() noexcept {
      return *reinterpret_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>*>(this);
    }
    // Get static field: static public Fusion.IElementReaderWriter`1<Fusion.NetworkString`1<Fusion._32>> Instance
    static ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* _get_Instance();
    // Set static field: static public Fusion.IElementReaderWriter`1<Fusion.NetworkString`1<Fusion._32>> Instance
    static void _set_Instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* value);
    // public Fusion.NetworkString`1<Fusion._32> Read(System.Byte* data, System.Int32 index)
    // Offset: 0x2905088
    ::Fusion::NetworkString_1<::Fusion::_32> Read(uint8_t* data, int index);
    // public Fusion.NetworkString`1<Fusion._32> ReadRef(System.Byte* data, System.Int32 index)
    // Offset: 0x29050A0
    ::Fusion::NetworkString_1<::Fusion::_32> ReadRef(uint8_t* data, int index);
    // public System.Void Write(System.Byte* data, System.Int32 index, Fusion.NetworkString`1<Fusion._32> val)
    // Offset: 0x29050B0
    void Write(uint8_t* data, int index, ::Fusion::NetworkString_1<::Fusion::_32> val);
    // public System.Int32 GetElementWordCount()
    // Offset: 0x29050D4
    int GetElementWordCount();
    // static public Fusion.IElementReaderWriter`1<Fusion.NetworkString`1<Fusion._32>> GetInstance()
    // Offset: 0x29050DC
    static ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* GetInstance();
  }; // Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__32>
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkString_1<::Fusion::_32> (Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::*)(uint8_t*, int)>(&Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::Read)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, index});
  }
};
// Writing MetadataGetter for method: Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::ReadRef
// Il2CppName: ReadRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkString_1<::Fusion::_32> (Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::*)(uint8_t*, int)>(&Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::ReadRef)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32), "ReadRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, index});
  }
};
// Writing MetadataGetter for method: Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::*)(uint8_t*, int, ::Fusion::NetworkString_1<::Fusion::_32>)>(&Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::Write)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* val = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Fusion", "NetworkString`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "_32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, index, val});
  }
};
// Writing MetadataGetter for method: Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::GetElementWordCount
// Il2CppName: GetElementWordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::*)()>(&Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::GetElementWordCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32), "GetElementWordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* (*)()>(&Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1$Fusion__32), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};