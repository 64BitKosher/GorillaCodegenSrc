// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.XPath.Axis
#include "MS/Internal/Xml/XPath/Axis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: DoubleLinkAxis
  class DoubleLinkAxis;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DoubleLinkAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DoubleLinkAxis*, "System.Xml.Schema", "DoubleLinkAxis");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DoubleLinkAxis
  // [TokenAttribute] Offset: FFFFFFFF
  class DoubleLinkAxis : public ::MS::Internal::Xml::XPath::Axis {
    public:
    public:
    // MS.Internal.Xml.XPath.Axis next
    // Size: 0x8
    // Offset: 0x40
    ::MS::Internal::Xml::XPath::Axis* next;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::XPath::Axis*) == 0x8);
    public:
    // Creating conversion operator: operator ::MS::Internal::Xml::XPath::Axis*
    constexpr operator ::MS::Internal::Xml::XPath::Axis*() const noexcept {
      return next;
    }
    // Get instance field reference: MS.Internal.Xml.XPath.Axis next
    [[deprecated("Use field access instead!")]] ::MS::Internal::Xml::XPath::Axis*& dyn_next();
    // MS.Internal.Xml.XPath.Axis get_Next()
    // Offset: 0x4E70758
    ::MS::Internal::Xml::XPath::Axis* get_Next();
    // System.Void set_Next(MS.Internal.Xml.XPath.Axis value)
    // Offset: 0x4E70760
    void set_Next(::MS::Internal::Xml::XPath::Axis* value);
    // System.Void .ctor(MS.Internal.Xml.XPath.Axis axis, System.Xml.Schema.DoubleLinkAxis inputaxis)
    // Offset: 0x4E70768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DoubleLinkAxis* New_ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DoubleLinkAxis::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DoubleLinkAxis*, creationType>(axis, inputaxis)));
    }
    // static System.Xml.Schema.DoubleLinkAxis ConvertTree(MS.Internal.Xml.XPath.Axis axis)
    // Offset: 0x4E707F8
    static ::System::Xml::Schema::DoubleLinkAxis* ConvertTree(::MS::Internal::Xml::XPath::Axis* axis);
  }; // System.Xml.Schema.DoubleLinkAxis
  #pragma pack(pop)
  static check_size<sizeof(DoubleLinkAxis), 64 + sizeof(::MS::Internal::Xml::XPath::Axis*)> __System_Xml_Schema_DoubleLinkAxisSizeCheck;
  static_assert(sizeof(DoubleLinkAxis) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DoubleLinkAxis::get_Next
// Il2CppName: get_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::Axis* (System::Xml::Schema::DoubleLinkAxis::*)()>(&System::Xml::Schema::DoubleLinkAxis::get_Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DoubleLinkAxis*), "get_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DoubleLinkAxis::set_Next
// Il2CppName: set_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::DoubleLinkAxis::*)(::MS::Internal::Xml::XPath::Axis*)>(&System::Xml::Schema::DoubleLinkAxis::set_Next)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DoubleLinkAxis*), "set_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DoubleLinkAxis::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::DoubleLinkAxis::ConvertTree
// Il2CppName: ConvertTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (*)(::MS::Internal::Xml::XPath::Axis*)>(&System::Xml::Schema::DoubleLinkAxis::ConvertTree)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DoubleLinkAxis*), "ConvertTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};