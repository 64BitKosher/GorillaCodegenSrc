// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Photon.Voice.IOS.AudioSessionCategory
#include "Photon/Voice/IOS/AudioSessionCategory.hpp"
// Including type: Photon.Voice.IOS.AudioSessionMode
#include "Photon/Voice/IOS/AudioSessionMode.hpp"
// Including type: Photon.Voice.IOS.AudioSessionCategoryOption
#include "Photon/Voice/IOS/AudioSessionCategoryOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Voice.IOS
namespace Photon::Voice::IOS {
  // Forward declaring type: AudioSessionParameters
  struct AudioSessionParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::IOS::AudioSessionParameters, "Photon.Voice.IOS", "AudioSessionParameters");
// Type namespace: Photon.Voice.IOS
namespace Photon::Voice::IOS {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Photon.Voice.IOS.AudioSessionParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct AudioSessionParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // public Photon.Voice.IOS.AudioSessionCategory Category
    // Size: 0x4
    // Offset: 0x0
    ::Photon::Voice::IOS::AudioSessionCategory Category;
    // Field size check
    static_assert(sizeof(::Photon::Voice::IOS::AudioSessionCategory) == 0x4);
    // public Photon.Voice.IOS.AudioSessionMode Mode
    // Size: 0x4
    // Offset: 0x4
    ::Photon::Voice::IOS::AudioSessionMode Mode;
    // Field size check
    static_assert(sizeof(::Photon::Voice::IOS::AudioSessionMode) == 0x4);
    // public Photon.Voice.IOS.AudioSessionCategoryOption[] CategoryOptions
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption> CategoryOptions;
    // Field size check
    static_assert(sizeof(::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>) == 0x8);
    public:
    // Creating value type constructor for type: AudioSessionParameters
    constexpr AudioSessionParameters(::Photon::Voice::IOS::AudioSessionCategory Category_ = {}, ::Photon::Voice::IOS::AudioSessionMode Mode_ = {}, ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption> CategoryOptions_ = ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>(static_cast<void*>(nullptr))) noexcept : Category{Category_}, Mode{Mode_}, CategoryOptions{CategoryOptions_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Photon.Voice.IOS.AudioSessionCategory Category
    [[deprecated("Use field access instead!")]] ::Photon::Voice::IOS::AudioSessionCategory& dyn_Category();
    // Get instance field reference: public Photon.Voice.IOS.AudioSessionMode Mode
    [[deprecated("Use field access instead!")]] ::Photon::Voice::IOS::AudioSessionMode& dyn_Mode();
    // Get instance field reference: public Photon.Voice.IOS.AudioSessionCategoryOption[] CategoryOptions
    [[deprecated("Use field access instead!")]] ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>& dyn_CategoryOptions();
    // public System.Int32 CategoryOptionsToInt()
    // Offset: 0x4A7CAE0
    int CategoryOptionsToInt();
    // public override System.String ToString()
    // Offset: 0x4A7CB3C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Photon.Voice.IOS.AudioSessionParameters
  #pragma pack(pop)
  static check_size<sizeof(AudioSessionParameters), 8 + sizeof(::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>)> __Photon_Voice_IOS_AudioSessionParametersSizeCheck;
  static_assert(sizeof(AudioSessionParameters) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::IOS::AudioSessionParameters::CategoryOptionsToInt
// Il2CppName: CategoryOptionsToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::IOS::AudioSessionParameters::*)()>(&Photon::Voice::IOS::AudioSessionParameters::CategoryOptionsToInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IOS::AudioSessionParameters), "CategoryOptionsToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::IOS::AudioSessionParameters::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::IOS::AudioSessionParameters::*)()>(&Photon::Voice::IOS::AudioSessionParameters::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IOS::AudioSessionParameters), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
