// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FXType
#include "GlobalNamespace/FXType.hpp"
// Including type: Photon.Pun.PhotonMessageInfo
#include "Photon/Pun/PhotonMessageInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IFXContextParems`1<T>
  template<typename T>
  class IFXContextParems_1;
  // Forward declaring type: IFXContext
  class IFXContext;
  // Forward declaring type: FXSArgs
  class FXSArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FXSystem
  class FXSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FXSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FXSystem*, "", "FXSystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FXSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class FXSystem : public ::Il2CppObject {
    public:
    // static public System.Void PlayFXForRig(FXType fxType, IFXContext context, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x27657A0
    static void PlayFXForRig(::GlobalNamespace::FXType fxType, ::GlobalNamespace::IFXContext* context, ::Photon::Pun::PhotonMessageInfo info);
    // static public System.Void PlayFXForRigValidated(System.Collections.Generic.List`1<System.Int32> hashes, FXType fxType, IFXContext context, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2765964
    static void PlayFXForRigValidated(::System::Collections::Generic::List_1<int>* hashes, ::GlobalNamespace::FXType fxType, ::GlobalNamespace::IFXContext* context, ::Photon::Pun::PhotonMessageInfo info);
    // static public System.Void PlayFX(FXType fxType, IFXContextParems`1<T> context, T args, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void PlayFX(::GlobalNamespace::FXType fxType, ::GlobalNamespace::IFXContextParems_1<T>* context, T args, ::Photon::Pun::PhotonMessageInfo info) {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::FXSArgs*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FXSystem::PlayFX");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "FXSystem", "PlayFX", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fxType), ::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(info)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, fxType, context, args, info);
    }
  }; // FXSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FXSystem::PlayFXForRig
// Il2CppName: PlayFXForRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::FXType, ::GlobalNamespace::IFXContext*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::FXSystem::PlayFXForRig)> {
  static const MethodInfo* get() {
    static auto* fxType = &::il2cpp_utils::GetClassFromName("", "FXType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("", "IFXContext")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FXSystem*), "PlayFXForRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fxType, context, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FXSystem::PlayFXForRigValidated
// Il2CppName: PlayFXForRigValidated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<int>*, ::GlobalNamespace::FXType, ::GlobalNamespace::IFXContext*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::FXSystem::PlayFXForRigValidated)> {
  static const MethodInfo* get() {
    static auto* hashes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* fxType = &::il2cpp_utils::GetClassFromName("", "FXType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("", "IFXContext")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FXSystem*), "PlayFXForRigValidated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashes, fxType, context, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FXSystem::PlayFX
// Il2CppName: PlayFX
// Cannot write MetadataGetter for generic methods!
