// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0*, "UnityEngine.ProBuilder", "EdgeLookup/<>c__DisplayClass16_0");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.EdgeLookup/<>c__DisplayClass16_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EdgeLookup::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<int, int>* lookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<int, int>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<int, int>*() const noexcept {
      return lookup;
    }
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, int>*& dyn_lookup();
    // public System.Void .ctor()
    // Offset: 0x51A5B0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EdgeLookup::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EdgeLookup::$$c__DisplayClass16_0*, creationType>()));
    }
    // UnityEngine.ProBuilder.EdgeLookup <GetEdgeLookup>b__0(UnityEngine.ProBuilder.Edge x)
    // Offset: 0x51A5EB0
    ::UnityEngine::ProBuilder::EdgeLookup $GetEdgeLookup$b__0(::UnityEngine::ProBuilder::Edge x);
  }; // UnityEngine.ProBuilder.EdgeLookup/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(EdgeLookup::$$c__DisplayClass16_0), 16 + sizeof(::System::Collections::Generic::Dictionary_2<int, int>*)> __UnityEngine_ProBuilder_EdgeLookup_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(EdgeLookup::$$c__DisplayClass16_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0::$GetEdgeLookup$b__0
// Il2CppName: <GetEdgeLookup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::EdgeLookup (UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0::*)(::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0::$GetEdgeLookup$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0*), "<GetEdgeLookup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
