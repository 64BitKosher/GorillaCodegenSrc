// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Json.WitResponseNode
#include "Meta/WitAi/Json/WitResponseNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseData
  class WitResponseData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Json::WitResponseData);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Json::WitResponseData*, "Meta.WitAi.Json", "WitResponseData");
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Json.WitResponseData
  // [TokenAttribute] Offset: FFFFFFFF
  class WitResponseData : public ::Meta::WitAi::Json::WitResponseNode {
    public:
    public:
    // private System.String m_Data
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_Data;
    }
    // Get instance field reference: private System.String m_Data
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Data();
    // public System.Void .ctor(System.String aData)
    // Offset: 0x44472A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseData* New_ctor(::StringW aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseData*, creationType>(aData)));
    }
    // public System.Void .ctor(System.Single aData)
    // Offset: 0x444B3F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseData* New_ctor(float aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseData*, creationType>(aData)));
    }
    // public System.Void .ctor(System.Double aData)
    // Offset: 0x444B430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseData* New_ctor(double aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseData*, creationType>(aData)));
    }
    // public System.Void .ctor(System.Boolean aData)
    // Offset: 0x444B388
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseData* New_ctor(bool aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseData*, creationType>(aData)));
    }
    // public System.Void .ctor(System.Int32 aData)
    // Offset: 0x444B3C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseData* New_ctor(int aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseData*, creationType>(aData)));
    }
    // public override System.String get_Value()
    // Offset: 0x44505F0
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.String WitResponseNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x44505F8
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x4450600
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseData*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x4450658
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.String WitResponseNode::ToString()
    ::StringW ToString();
    // public override System.String ToString(System.String aPrefix)
    // Offset: 0x44506B0
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.String WitResponseNode::ToString(System.String aPrefix)
    ::StringW ToString(::StringW aPrefix);
    // public override System.Void Serialize(System.IO.BinaryWriter aWriter)
    // Offset: 0x4450708
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::Serialize(System.IO.BinaryWriter aWriter)
    void Serialize(::System::IO::BinaryWriter* aWriter);
  }; // Meta.WitAi.Json.WitResponseData
  #pragma pack(pop)
  static check_size<sizeof(WitResponseData), 16 + sizeof(::StringW)> __Meta_WitAi_Json_WitResponseDataSizeCheck;
  static_assert(sizeof(WitResponseData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Json::WitResponseData::*)()>(&Meta::WitAi::Json::WitResponseData::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseData*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseData::*)(::StringW)>(&Meta::WitAi::Json::WitResponseData::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseData*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Json::WitResponseData::*)()>(&Meta::WitAi::Json::WitResponseData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Json::WitResponseData::*)(::StringW)>(&Meta::WitAi::Json::WitResponseData::ToString)> {
  static const MethodInfo* get() {
    static auto* aPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aPrefix});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseData::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseData::*)(::System::IO::BinaryWriter*)>(&Meta::WitAi::Json::WitResponseData::Serialize)> {
  static const MethodInfo* get() {
    static auto* aWriter = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseData*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aWriter});
  }
};