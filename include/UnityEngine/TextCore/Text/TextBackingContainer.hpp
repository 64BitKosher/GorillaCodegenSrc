// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextBackingContainer
  struct TextBackingContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextBackingContainer, "UnityEngine.TextCore.Text", "TextBackingContainer");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Text.TextBackingContainer
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct TextBackingContainer/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32[] m_Array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint> m_Array;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Int32 m_Count
    // Size: 0x4
    // Offset: 0x8
    int m_Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextBackingContainer
    constexpr TextBackingContainer(::ArrayW<uint> m_Array_ = ::ArrayW<uint>(static_cast<void*>(nullptr)), int m_Count_ = {}) noexcept : m_Array{m_Array_}, m_Count{m_Count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt32[] m_Array
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_m_Array();
    // Get instance field reference: private System.Int32 m_Count
    [[deprecated("Use field access instead!")]] int& dyn_m_Count();
    // public System.Int32 get_Capacity()
    // Offset: 0x556C1BC
    int get_Capacity();
    // public System.Int32 get_Count()
    // Offset: 0x556C1D8
    int get_Count();
    // public System.Void set_Count(System.Int32 value)
    // Offset: 0x556C1E0
    void set_Count(int value);
    // public System.UInt32 get_Item(System.Int32 index)
    // Offset: 0x556C1E8
    uint get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.UInt32 value)
    // Offset: 0x556C218
    void set_Item(int index, uint value);
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0x556C2DC
    TextBackingContainer(int size);
    // public System.Void Resize(System.Int32 size)
    // Offset: 0x556C278
    void Resize(int size);
  }; // UnityEngine.TextCore.Text.TextBackingContainer
  #pragma pack(pop)
  static check_size<sizeof(TextBackingContainer), 8 + sizeof(int)> __UnityEngine_TextCore_Text_TextBackingContainerSizeCheck;
  static_assert(sizeof(TextBackingContainer) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::Text::TextBackingContainer::*)()>(&UnityEngine::TextCore::Text::TextBackingContainer::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextBackingContainer), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::Text::TextBackingContainer::*)()>(&UnityEngine::TextCore::Text::TextBackingContainer::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextBackingContainer), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::set_Count
// Il2CppName: set_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextBackingContainer::*)(int)>(&UnityEngine::TextCore::Text::TextBackingContainer::set_Count)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextBackingContainer), "set_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::Text::TextBackingContainer::*)(int)>(&UnityEngine::TextCore::Text::TextBackingContainer::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextBackingContainer), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextBackingContainer::*)(int, uint)>(&UnityEngine::TextCore::Text::TextBackingContainer::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextBackingContainer), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::TextBackingContainer
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextBackingContainer::Resize
// Il2CppName: Resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextBackingContainer::*)(int)>(&UnityEngine::TextCore::Text::TextBackingContainer::Resize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextBackingContainer), "Resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
