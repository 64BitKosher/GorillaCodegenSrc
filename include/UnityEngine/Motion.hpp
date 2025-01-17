// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Motion
  class Motion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Motion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Motion*, "UnityEngine", "Motion");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Motion
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class Motion : public ::UnityEngine::Object {
    public:
    public:
    // private readonly System.Boolean <isAnimatorMotion>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool isAnimatorMotion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly System.Boolean <isAnimatorMotion>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isAnimatorMotion$k__BackingField();
    // protected System.Void .ctor()
    // Offset: 0x5464408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Motion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Motion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Motion*, creationType>()));
    }
    // public System.Boolean get_isLooping()
    // Offset: 0x546A8F4
    bool get_isLooping();
  }; // UnityEngine.Motion
  #pragma pack(pop)
  static check_size<sizeof(Motion), 24 + sizeof(bool)> __UnityEngine_MotionSizeCheck;
  static_assert(sizeof(Motion) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Motion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Motion::get_isLooping
// Il2CppName: get_isLooping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Motion::*)()>(&UnityEngine::Motion::get_isLooping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Motion*), "get_isLooping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
