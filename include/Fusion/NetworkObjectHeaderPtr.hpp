// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectHeader
  struct NetworkObjectHeader;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectHeaderPtr
  struct NetworkObjectHeaderPtr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectHeaderPtr, "Fusion", "NetworkObjectHeaderPtr");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkObjectHeaderPtr
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkObjectHeaderPtr/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.NetworkObjectHeader* Ptr
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::NetworkObjectHeader* Ptr;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectHeader*) == 0x8);
    public:
    // Creating value type constructor for type: NetworkObjectHeaderPtr
    constexpr NetworkObjectHeaderPtr(::Fusion::NetworkObjectHeader* Ptr_ = {}) noexcept : Ptr{Ptr_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Fusion::NetworkObjectHeader*
    constexpr operator ::Fusion::NetworkObjectHeader*() const noexcept {
      return Ptr;
    }
    // Get instance field reference: public Fusion.NetworkObjectHeader* Ptr
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectHeader*& dyn_Ptr();
  }; // Fusion.NetworkObjectHeaderPtr
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectHeaderPtr), 0 + sizeof(::Fusion::NetworkObjectHeader*)> __Fusion_NetworkObjectHeaderPtrSizeCheck;
  static_assert(sizeof(NetworkObjectHeaderPtr) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"