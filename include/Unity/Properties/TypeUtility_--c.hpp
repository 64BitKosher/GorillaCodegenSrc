// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.TypeUtility
#include "Unity/Properties/TypeUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::TypeUtility::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility::$$c*, "Unity.Properties", "TypeUtility/<>c");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.TypeUtility/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Unity.Properties.TypeUtility/<>c <>9
    static ::Unity::Properties::TypeUtility::$$c* _get_$$9();
    // Set static field: static public readonly Unity.Properties.TypeUtility/<>c <>9
    static void _set_$$9(::Unity::Properties::TypeUtility::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x5537EFC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5537F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::TypeUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeUtility::$$c*, creationType>()));
    }
    // System.Text.StringBuilder <.cctor>b__11_0()
    // Offset: 0x5537F6C
    ::System::Text::StringBuilder* $_cctor$b__11_0();
    // System.Void <.cctor>b__11_1(System.Text.StringBuilder sb)
    // Offset: 0x5537FC0
    void $_cctor$b__11_1(::System::Text::StringBuilder* sb);
    // System.String <.cctor>b__11_2()
    // Offset: 0x5537FD8
    ::StringW $_cctor$b__11_2();
  }; // Unity.Properties.TypeUtility/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Properties::TypeUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::TypeUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::$$c::$_cctor$b__11_0
// Il2CppName: <.cctor>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (Unity::Properties::TypeUtility::$$c::*)()>(&Unity::Properties::TypeUtility::$$c::$_cctor$b__11_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::TypeUtility::$$c*), "<.cctor>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::$$c::$_cctor$b__11_1
// Il2CppName: <.cctor>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Properties::TypeUtility::$$c::*)(::System::Text::StringBuilder*)>(&Unity::Properties::TypeUtility::$$c::$_cctor$b__11_1)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::TypeUtility::$$c*), "<.cctor>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::$$c::$_cctor$b__11_2
// Il2CppName: <.cctor>b__11_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Properties::TypeUtility::$$c::*)()>(&Unity::Properties::TypeUtility::$$c::$_cctor$b__11_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::TypeUtility::$$c*), "<.cctor>b__11_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};