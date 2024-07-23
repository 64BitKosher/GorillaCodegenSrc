// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkBehaviourWeavedAttribute
  class NetworkBehaviourWeavedAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkBehaviourWeavedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkBehaviourWeavedAttribute*, "Fusion", "NetworkBehaviourWeavedAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkBehaviourWeavedAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NetworkBehaviourWeavedAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.Int32 <WordCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int WordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return WordCount;
    }
    // Get instance field reference: private readonly System.Int32 <WordCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$WordCount$k__BackingField();
    // public System.Int32 get_WordCount()
    // Offset: 0x2AFF130
    int get_WordCount();
    // public System.Void .ctor(System.Int32 wordCount)
    // Offset: 0x2AFF138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkBehaviourWeavedAttribute* New_ctor(int wordCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkBehaviourWeavedAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkBehaviourWeavedAttribute*, creationType>(wordCount)));
    }
  }; // Fusion.NetworkBehaviourWeavedAttribute
  #pragma pack(pop)
  static check_size<sizeof(NetworkBehaviourWeavedAttribute), 16 + sizeof(int)> __Fusion_NetworkBehaviourWeavedAttributeSizeCheck;
  static_assert(sizeof(NetworkBehaviourWeavedAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkBehaviourWeavedAttribute::get_WordCount
// Il2CppName: get_WordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkBehaviourWeavedAttribute::*)()>(&Fusion::NetworkBehaviourWeavedAttribute::get_WordCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourWeavedAttribute*), "get_WordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourWeavedAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
