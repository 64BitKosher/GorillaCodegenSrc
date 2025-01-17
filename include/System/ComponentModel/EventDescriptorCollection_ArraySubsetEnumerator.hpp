// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.EventDescriptorCollection
#include "System/ComponentModel/EventDescriptorCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator*, "System.ComponentModel", "EventDescriptorCollection/ArraySubsetEnumerator");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EventDescriptorCollection/ArraySubsetEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class EventDescriptorCollection::ArraySubsetEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private readonly System.Array _array
    // Size: 0x8
    // Offset: 0x10
    ::System::Array* array;
    // Field size check
    static_assert(sizeof(::System::Array*) == 0x8);
    // private readonly System.Int32 _total
    // Size: 0x4
    // Offset: 0x18
    int total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _current
    // Size: 0x4
    // Offset: 0x1C
    int current;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private readonly System.Array _array
    [[deprecated("Use field access instead!")]] ::System::Array*& dyn__array();
    // Get instance field reference: private readonly System.Int32 _total
    [[deprecated("Use field access instead!")]] int& dyn__total();
    // Get instance field reference: private System.Int32 _current
    [[deprecated("Use field access instead!")]] int& dyn__current();
    // public System.Void .ctor(System.Array array, System.Int32 count)
    // Offset: 0x4F02FE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventDescriptorCollection::ArraySubsetEnumerator* New_ctor(::System::Array* array, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventDescriptorCollection::ArraySubsetEnumerator*, creationType>(array, count)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x4F03750
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x4F03774
    void Reset();
    // public System.Object get_Current()
    // Offset: 0x4F03780
    ::Il2CppObject* get_Current();
  }; // System.ComponentModel.EventDescriptorCollection/ArraySubsetEnumerator
  #pragma pack(pop)
  static check_size<sizeof(EventDescriptorCollection::ArraySubsetEnumerator), 28 + sizeof(int)> __System_ComponentModel_EventDescriptorCollection_ArraySubsetEnumeratorSizeCheck;
  static_assert(sizeof(EventDescriptorCollection::ArraySubsetEnumerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::*)()>(&System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::*)()>(&System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::*)()>(&System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection::ArraySubsetEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
