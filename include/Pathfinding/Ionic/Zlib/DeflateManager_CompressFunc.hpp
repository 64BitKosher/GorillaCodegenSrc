// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zlib.DeflateManager
#include "Pathfinding/Ionic/Zlib/DeflateManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: BlockState
  struct BlockState;
  // Forward declaring type: FlushType
  struct FlushType;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc*, "Pathfinding.Ionic.Zlib", "DeflateManager/CompressFunc");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateManager::CompressFunc : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x49B60B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateManager::CompressFunc* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateManager::CompressFunc*, creationType>(object, method)));
    }
    // public Pathfinding.Ionic.Zlib.BlockState Invoke(Pathfinding.Ionic.Zlib.FlushType flush)
    // Offset: 0x49B6904
    ::Pathfinding::Ionic::Zlib::BlockState Invoke(::Pathfinding::Ionic::Zlib::FlushType flush);
  }; // Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zlib::BlockState (Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc::*)(::Pathfinding::Ionic::Zlib::FlushType)>(&Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc::Invoke)> {
  static const MethodInfo* get() {
    static auto* flush = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zlib", "FlushType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateManager::CompressFunc*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flush});
  }
};
