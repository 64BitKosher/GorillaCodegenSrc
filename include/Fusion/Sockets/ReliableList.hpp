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
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: ReliableHeader
  struct ReliableHeader;
}
// Completed forward declares
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: ReliableList
  struct ReliableList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::ReliableList, "Fusion.Sockets", "ReliableList");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.ReliableList
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReliableList/*, public ::System::ValueType*/ {
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
    // public Fusion.Sockets.ReliableHeader* Head
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::Sockets::ReliableHeader* Head;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::ReliableHeader*) == 0x8);
    // public Fusion.Sockets.ReliableHeader* Tail
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::Sockets::ReliableHeader* Tail;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::ReliableHeader*) == 0x8);
    public:
    // Creating value type constructor for type: ReliableList
    constexpr ReliableList(int Count_ = {}, ::Fusion::Sockets::ReliableHeader* Head_ = {}, ::Fusion::Sockets::ReliableHeader* Tail_ = {}) noexcept : Count{Count_}, Head{Head_}, Tail{Tail_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: public Fusion.Sockets.ReliableHeader* Head
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::ReliableHeader*& dyn_Head();
    // Get instance field reference: public Fusion.Sockets.ReliableHeader* Tail
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::ReliableHeader*& dyn_Tail();
    // public System.Void AddFirst(Fusion.Sockets.ReliableHeader* item)
    // Offset: 0x2B97668
    void AddFirst(::Fusion::Sockets::ReliableHeader* item);
    // public System.Void AddLast(Fusion.Sockets.ReliableHeader* item)
    // Offset: 0x2B959B4
    void AddLast(::Fusion::Sockets::ReliableHeader* item);
    // public Fusion.Sockets.ReliableHeader* RemoveHead()
    // Offset: 0x2B9167C
    ::Fusion::Sockets::ReliableHeader* RemoveHead();
    // public System.Void Remove(Fusion.Sockets.ReliableHeader* item)
    // Offset: 0x2B98A44
    void Remove(::Fusion::Sockets::ReliableHeader* item);
  }; // Fusion.Sockets.ReliableList
  #pragma pack(pop)
  static check_size<sizeof(ReliableList), 16 + sizeof(::Fusion::Sockets::ReliableHeader*)> __Fusion_Sockets_ReliableListSizeCheck;
  static_assert(sizeof(ReliableList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::ReliableList::AddFirst
// Il2CppName: AddFirst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&Fusion::Sockets::ReliableList::AddFirst)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "ReliableHeader"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::ReliableList), "AddFirst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::ReliableList::AddLast
// Il2CppName: AddLast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&Fusion::Sockets::ReliableList::AddLast)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "ReliableHeader"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::ReliableList), "AddLast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::ReliableList::RemoveHead
// Il2CppName: RemoveHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::ReliableHeader* (Fusion::Sockets::ReliableList::*)()>(&Fusion::Sockets::ReliableList::RemoveHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::ReliableList), "RemoveHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::ReliableList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&Fusion::Sockets::ReliableList::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "ReliableHeader"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::ReliableList), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
