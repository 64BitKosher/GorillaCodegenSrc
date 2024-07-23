// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WatchableGenericSO`1
#include "GlobalNamespace/WatchableGenericSO_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: WatchableIntSO
  class WatchableIntSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::WatchableIntSO);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::WatchableIntSO*, "GorillaTag", "WatchableIntSO");
// Type namespace: GorillaTag
namespace GorillaTag {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaTag.WatchableIntSO
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class WatchableIntSO : public ::GlobalNamespace::WatchableGenericSO_1<int> {
    public:
    // private System.Int32 get_currentValue()
    // Offset: 0x287CA7C
    int get_currentValue();
    // public System.Void .ctor()
    // Offset: 0x287CAC4
    // Implemented from: WatchableGenericSO`1
    // Base method: System.Void WatchableGenericSO_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WatchableIntSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::WatchableIntSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WatchableIntSO*, creationType>()));
    }
  }; // GorillaTag.WatchableIntSO
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::WatchableIntSO::get_currentValue
// Il2CppName: get_currentValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GorillaTag::WatchableIntSO::*)()>(&GorillaTag::WatchableIntSO::get_currentValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::WatchableIntSO*), "get_currentValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::WatchableIntSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
