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
  // Forward declaring type: NetworkStructWeavedAttribute
  class NetworkStructWeavedAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkStructWeavedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkStructWeavedAttribute*, "Fusion", "NetworkStructWeavedAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkStructWeavedAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NetworkStructWeavedAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.Int32 <WordCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int WordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Boolean <IsGenericComposite>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool IsGenericComposite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Int32 <WordCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$WordCount$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <IsGenericComposite>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsGenericComposite$k__BackingField();
    // public System.Int32 get_WordCount()
    // Offset: 0x2AFF318
    int get_WordCount();
    // System.Boolean get_IsGenericComposite()
    // Offset: 0x2AFF320
    bool get_IsGenericComposite();
    // public System.Void .ctor(System.Int32 wordCount)
    // Offset: 0x2AFF328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkStructWeavedAttribute* New_ctor(int wordCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkStructWeavedAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkStructWeavedAttribute*, creationType>(wordCount)));
    }
    // System.Void .ctor(System.Int32 wordCount, System.Boolean isGenericComposite)
    // Offset: 0x2AFF350
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkStructWeavedAttribute* New_ctor(int wordCount, bool isGenericComposite) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkStructWeavedAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkStructWeavedAttribute*, creationType>(wordCount, isGenericComposite)));
    }
  }; // Fusion.NetworkStructWeavedAttribute
  #pragma pack(pop)
  static check_size<sizeof(NetworkStructWeavedAttribute), 20 + sizeof(bool)> __Fusion_NetworkStructWeavedAttributeSizeCheck;
  static_assert(sizeof(NetworkStructWeavedAttribute) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkStructWeavedAttribute::get_WordCount
// Il2CppName: get_WordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkStructWeavedAttribute::*)()>(&Fusion::NetworkStructWeavedAttribute::get_WordCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkStructWeavedAttribute*), "get_WordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkStructWeavedAttribute::get_IsGenericComposite
// Il2CppName: get_IsGenericComposite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkStructWeavedAttribute::*)()>(&Fusion::NetworkStructWeavedAttribute::get_IsGenericComposite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkStructWeavedAttribute*), "get_IsGenericComposite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkStructWeavedAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkStructWeavedAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
