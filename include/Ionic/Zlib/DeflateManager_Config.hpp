// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Ionic.Zlib.DeflateManager
#include "Ionic/Zlib/DeflateManager.hpp"
// Including type: Ionic.Zlib.DeflateFlavor
#include "Ionic/Zlib/DeflateFlavor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Ionic::Zlib
namespace Ionic::Zlib {
  // Forward declaring type: CompressionLevel
  struct CompressionLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ionic::Zlib::DeflateManager::Config);
DEFINE_IL2CPP_ARG_TYPE(::Ionic::Zlib::DeflateManager::Config*, "Ionic.Zlib", "DeflateManager/Config");
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Ionic.Zlib.DeflateManager/Config
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateManager::Config : public ::Il2CppObject {
    public:
    public:
    // System.Int32 GoodLength
    // Size: 0x4
    // Offset: 0x10
    int GoodLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 MaxLazy
    // Size: 0x4
    // Offset: 0x14
    int MaxLazy;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 NiceLength
    // Size: 0x4
    // Offset: 0x18
    int NiceLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 MaxChainLength
    // Size: 0x4
    // Offset: 0x1C
    int MaxChainLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Ionic.Zlib.DeflateFlavor Flavor
    // Size: 0x4
    // Offset: 0x20
    ::Ionic::Zlib::DeflateFlavor Flavor;
    // Field size check
    static_assert(sizeof(::Ionic::Zlib::DeflateFlavor) == 0x4);
    public:
    // Get static field: static private readonly Ionic.Zlib.DeflateManager/Config[] Table
    static ::ArrayW<::Ionic::Zlib::DeflateManager::Config*> _get_Table();
    // Set static field: static private readonly Ionic.Zlib.DeflateManager/Config[] Table
    static void _set_Table(::ArrayW<::Ionic::Zlib::DeflateManager::Config*> value);
    // Get instance field reference: System.Int32 GoodLength
    [[deprecated("Use field access instead!")]] int& dyn_GoodLength();
    // Get instance field reference: System.Int32 MaxLazy
    [[deprecated("Use field access instead!")]] int& dyn_MaxLazy();
    // Get instance field reference: System.Int32 NiceLength
    [[deprecated("Use field access instead!")]] int& dyn_NiceLength();
    // Get instance field reference: System.Int32 MaxChainLength
    [[deprecated("Use field access instead!")]] int& dyn_MaxChainLength();
    // Get instance field reference: Ionic.Zlib.DeflateFlavor Flavor
    [[deprecated("Use field access instead!")]] ::Ionic::Zlib::DeflateFlavor& dyn_Flavor();
    // private System.Void .ctor(System.Int32 goodLength, System.Int32 maxLazy, System.Int32 niceLength, System.Int32 maxChainLength, Ionic.Zlib.DeflateFlavor flavor)
    // Offset: 0x4AAF30C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateManager::Config* New_ctor(int goodLength, int maxLazy, int niceLength, int maxChainLength, ::Ionic::Zlib::DeflateFlavor flavor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ionic::Zlib::DeflateManager::Config::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateManager::Config*, creationType>(goodLength, maxLazy, niceLength, maxChainLength, flavor)));
    }
    // static public Ionic.Zlib.DeflateManager/Config Lookup(Ionic.Zlib.CompressionLevel level)
    // Offset: 0x4AAAD0C
    static ::Ionic::Zlib::DeflateManager::Config* Lookup(::Ionic::Zlib::CompressionLevel level);
    // static private System.Void .cctor()
    // Offset: 0x4AAF35C
    static void _cctor();
  }; // Ionic.Zlib.DeflateManager/Config
  #pragma pack(pop)
  static check_size<sizeof(DeflateManager::Config), 32 + sizeof(::Ionic::Zlib::DeflateFlavor)> __Ionic_Zlib_DeflateManager_ConfigSizeCheck;
  static_assert(sizeof(DeflateManager::Config) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ionic::Zlib::DeflateManager::Config::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ionic::Zlib::DeflateManager::Config::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Ionic::Zlib::DeflateManager::Config* (*)(::Ionic::Zlib::CompressionLevel)>(&Ionic::Zlib::DeflateManager::Config::Lookup)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("Ionic.Zlib", "CompressionLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::DeflateManager::Config*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::DeflateManager::Config::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Ionic::Zlib::DeflateManager::Config::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::DeflateManager::Config*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
