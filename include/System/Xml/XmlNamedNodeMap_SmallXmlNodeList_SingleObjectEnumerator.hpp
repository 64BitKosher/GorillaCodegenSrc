// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
#include "System/Xml/XmlNamedNodeMap.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator*, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Object loneValue
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* loneValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 position
    // Size: 0x4
    // Offset: 0x18
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Object loneValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_loneValue();
    // Get instance field reference: private System.Int32 position
    [[deprecated("Use field access instead!")]] int& dyn_position();
    // public System.Void .ctor(System.Object value)
    // Offset: 0x4E1C054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator* New_ctor(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator*, creationType>(value)));
    }
    // public System.Object get_Current()
    // Offset: 0x4E1C08C
    ::Il2CppObject* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x4E1C0D8
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x4E1C0F4
    void Reset();
  }; // System.Xml.XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator
  #pragma pack(pop)
  static check_size<sizeof(XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator), 24 + sizeof(int)> __System_Xml_XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumeratorSizeCheck;
  static_assert(sizeof(XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::*)()>(&System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::*)()>(&System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::*)()>(&System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
