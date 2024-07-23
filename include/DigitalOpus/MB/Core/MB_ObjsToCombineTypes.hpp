// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_ObjsToCombineTypes
  struct MB_ObjsToCombineTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes, "DigitalOpus.MB.Core", "MB_ObjsToCombineTypes");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_ObjsToCombineTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB_ObjsToCombineTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MB_ObjsToCombineTypes
    constexpr MB_ObjsToCombineTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes prefabOnly
    static constexpr const int prefabOnly = 0;
    // Get static field: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes prefabOnly
    static ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes _get_prefabOnly();
    // Set static field: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes prefabOnly
    static void _set_prefabOnly(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes value);
    // static field const value: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes sceneObjOnly
    static constexpr const int sceneObjOnly = 1;
    // Get static field: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes sceneObjOnly
    static ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes _get_sceneObjOnly();
    // Set static field: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes sceneObjOnly
    static void _set_sceneObjOnly(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes value);
    // static field const value: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes dontCare
    static constexpr const int dontCare = 2;
    // Get static field: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes dontCare
    static ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes _get_dontCare();
    // Set static field: static public DigitalOpus.MB.Core.MB_ObjsToCombineTypes dontCare
    static void _set_dontCare(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DigitalOpus.MB.Core.MB_ObjsToCombineTypes
  #pragma pack(pop)
  static check_size<sizeof(MB_ObjsToCombineTypes), 0 + sizeof(int)> __DigitalOpus_MB_Core_MB_ObjsToCombineTypesSizeCheck;
  static_assert(sizeof(MB_ObjsToCombineTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
