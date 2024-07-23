// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessageEnvelope
  struct SimulationMessageEnvelope;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessageList
  struct SimulationMessageList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationMessageList, "Fusion", "SimulationMessageList");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.SimulationMessageList
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationMessageList/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x0
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Count and: Head
    char __padding0[0x4] = {};
    // public Fusion.SimulationMessageEnvelope* Head
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::SimulationMessageEnvelope* Head;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationMessageEnvelope*) == 0x8);
    // public Fusion.SimulationMessageEnvelope* Tail
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::SimulationMessageEnvelope* Tail;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationMessageEnvelope*) == 0x8);
    public:
    // Creating value type constructor for type: SimulationMessageList
    constexpr SimulationMessageList(int Count_ = {}, ::Fusion::SimulationMessageEnvelope* Head_ = {}, ::Fusion::SimulationMessageEnvelope* Tail_ = {}) noexcept : Count{Count_}, Head{Head_}, Tail{Tail_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: public Fusion.SimulationMessageEnvelope* Head
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationMessageEnvelope*& dyn_Head();
    // Get instance field reference: public Fusion.SimulationMessageEnvelope* Tail
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationMessageEnvelope*& dyn_Tail();
    // public System.Void AddFirst(Fusion.SimulationMessageEnvelope* item)
    // Offset: 0x2B6E510
    void AddFirst(::Fusion::SimulationMessageEnvelope* item);
    // public System.Void AddLast(Fusion.SimulationMessageEnvelope* item)
    // Offset: 0x2B6E554
    void AddLast(::Fusion::SimulationMessageEnvelope* item);
    // public System.Void AddBefore(Fusion.SimulationMessageEnvelope* item, Fusion.SimulationMessageEnvelope* before)
    // Offset: 0x2B6E598
    void AddBefore(::Fusion::SimulationMessageEnvelope* item, ::Fusion::SimulationMessageEnvelope* before);
    // public System.Void AddAfter(Fusion.SimulationMessageEnvelope* item, Fusion.SimulationMessageEnvelope* after)
    // Offset: 0x2B6E5EC
    void AddAfter(::Fusion::SimulationMessageEnvelope* item, ::Fusion::SimulationMessageEnvelope* after);
    // public Fusion.SimulationMessageEnvelope* RemoveHead()
    // Offset: 0x2B6E63C
    ::Fusion::SimulationMessageEnvelope* RemoveHead();
    // public System.Void Remove(Fusion.SimulationMessageEnvelope* item)
    // Offset: 0x2B6E658
    void Remove(::Fusion::SimulationMessageEnvelope* item);
    // private System.Boolean IsInList(Fusion.SimulationMessageEnvelope* item)
    // Offset: 0x2B6E6C0
    bool IsInList(::Fusion::SimulationMessageEnvelope* item);
    // public Fusion.SimulationMessageList RemoveAll()
    // Offset: 0x2B6E6E4
    ::Fusion::SimulationMessageList RemoveAll();
    // public System.Void Concat(Fusion.SimulationMessageList other)
    // Offset: 0x2B6E700
    void Concat(::Fusion::SimulationMessageList other);
  }; // Fusion.SimulationMessageList
  #pragma pack(pop)
  static check_size<sizeof(SimulationMessageList), 16 + sizeof(::Fusion::SimulationMessageEnvelope*)> __Fusion_SimulationMessageListSizeCheck;
  static_assert(sizeof(SimulationMessageList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SimulationMessageList::AddFirst
// Il2CppName: AddFirst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&Fusion::SimulationMessageList::AddFirst)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "AddFirst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::AddLast
// Il2CppName: AddLast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&Fusion::SimulationMessageList::AddLast)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "AddLast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::AddBefore
// Il2CppName: AddBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*, ::Fusion::SimulationMessageEnvelope*)>(&Fusion::SimulationMessageList::AddBefore)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    static auto* before = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "AddBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item, before});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::AddAfter
// Il2CppName: AddAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*, ::Fusion::SimulationMessageEnvelope*)>(&Fusion::SimulationMessageList::AddAfter)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    static auto* after = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "AddAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item, after});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::RemoveHead
// Il2CppName: RemoveHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationMessageEnvelope* (Fusion::SimulationMessageList::*)()>(&Fusion::SimulationMessageList::RemoveHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "RemoveHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&Fusion::SimulationMessageList::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::IsInList
// Il2CppName: IsInList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&Fusion::SimulationMessageList::IsInList)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageEnvelope"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "IsInList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::RemoveAll
// Il2CppName: RemoveAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationMessageList (Fusion::SimulationMessageList::*)()>(&Fusion::SimulationMessageList::RemoveAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "RemoveAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationMessageList::Concat
// Il2CppName: Concat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageList)>(&Fusion::SimulationMessageList::Concat)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationMessageList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationMessageList), "Concat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
