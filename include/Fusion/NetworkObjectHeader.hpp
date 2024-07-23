// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.INetworkStruct
#include "Fusion/INetworkStruct.hpp"
// Including type: Fusion.NetworkId
#include "Fusion/NetworkId.hpp"
// Including type: Fusion.NetworkPrefabId
#include "Fusion/NetworkPrefabId.hpp"
// Including type: Fusion.NetworkObjectNestingKey
#include "Fusion/NetworkObjectNestingKey.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: Fusion.NetworkObjectHeaderFlags
#include "Fusion/NetworkObjectHeaderFlags.hpp"
// Including type: Fusion.NetworkObjectPredictionKey
#include "Fusion/NetworkObjectPredictionKey.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectHeader
  struct NetworkObjectHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectHeader, "Fusion", "NetworkObjectHeader");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkObjectHeader
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  // [InlineHelpAttribute] Offset: FFFFFFFF
  struct NetworkObjectHeader/*, public ::System::ValueType, public ::Fusion::INetworkStruct*/ {
    public:
    // Nested type: ::Fusion::NetworkObjectHeader::$_reserved$e__FixedBuffer
    struct $_reserved$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.NetworkObjectHeader/<_reserved>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $_reserved$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 FixedElementField
      // Size: 0x4
      // Offset: 0x0
      int FixedElementField;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: $_reserved$e__FixedBuffer
      constexpr $_reserved$e__FixedBuffer(int FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Int32 FixedElementField
      [[deprecated("Use field access instead!")]] int& dyn_FixedElementField();
    }; // Fusion.NetworkObjectHeader/<_reserved>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(NetworkObjectHeader::$_reserved$e__FixedBuffer), 0 + sizeof(int)> __Fusion_NetworkObjectHeader_$_reserved$e__FixedBufferSizeCheck;
    static_assert(sizeof(NetworkObjectHeader::$_reserved$e__FixedBuffer) == 0x4);
    public:
    // public Fusion.NetworkId Id
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::NetworkId Id;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkId) == 0x4);
    // public Fusion.NetworkPrefabId Type
    // Size: 0x4
    // Offset: 0x4
    ::Fusion::NetworkPrefabId Type;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPrefabId) == 0x4);
    // public Fusion.NetworkId NestingRoot
    // Size: 0x4
    // Offset: 0x8
    ::Fusion::NetworkId NestingRoot;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkId) == 0x4);
    // public Fusion.NetworkObjectNestingKey NestingKey
    // Size: 0x4
    // Offset: 0xC
    ::Fusion::NetworkObjectNestingKey NestingKey;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectNestingKey) == 0x4);
    // public System.Guid SceneGuid
    // Size: 0x10
    // Offset: 0x10
    ::System::Guid SceneGuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // public System.Int32 WordCount
    // Size: 0x4
    // Offset: 0x20
    int WordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TransformOffset
    // Size: 0x4
    // Offset: 0x24
    int TransformOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Fusion.NetworkObjectHeaderFlags Flags
    // Size: 0x4
    // Offset: 0x28
    ::Fusion::NetworkObjectHeaderFlags Flags;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectHeaderFlags) == 0x4);
    // public Fusion.NetworkObjectPredictionKey PredictionKey
    // Size: 0xFFFFFFFF
    // Offset: 0x2C
    ::Fusion::NetworkObjectPredictionKey PredictionKey;
    // public Fusion.PlayerRef InputAuthority
    // Size: 0x4
    // Offset: 0x30
    ::Fusion::PlayerRef InputAuthority;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // public Fusion.PlayerRef StateAuthority
    // Size: 0x4
    // Offset: 0x34
    ::Fusion::PlayerRef StateAuthority;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // public System.Int32 AreaOfInterestLayerMask
    // Size: 0x4
    // Offset: 0x38
    int AreaOfInterestLayerMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Fusion.NetworkObjectHeader/<_reserved>e__FixedBuffer _reserved
    // Size: 0x4
    // Offset: 0x3C
    ::Fusion::NetworkObjectHeader::$_reserved$e__FixedBuffer reserved;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectHeader::$_reserved$e__FixedBuffer) == 0x4);
    public:
    // Creating value type constructor for type: NetworkObjectHeader
    constexpr NetworkObjectHeader(::Fusion::NetworkId Id_ = {}, ::Fusion::NetworkPrefabId Type_ = {}, ::Fusion::NetworkId NestingRoot_ = {}, ::Fusion::NetworkObjectNestingKey NestingKey_ = {}, ::System::Guid SceneGuid_ = {}, int WordCount_ = {}, int TransformOffset_ = {}, ::Fusion::NetworkObjectHeaderFlags Flags_ = {}, ::Fusion::NetworkObjectPredictionKey PredictionKey_ = {}, ::Fusion::PlayerRef InputAuthority_ = {}, ::Fusion::PlayerRef StateAuthority_ = {}, int AreaOfInterestLayerMask_ = {}, ::Fusion::NetworkObjectHeader::$_reserved$e__FixedBuffer reserved_ = {}) noexcept : Id{Id_}, Type{Type_}, NestingRoot{NestingRoot_}, NestingKey{NestingKey_}, SceneGuid{SceneGuid_}, WordCount{WordCount_}, TransformOffset{TransformOffset_}, Flags{Flags_}, PredictionKey{PredictionKey_}, InputAuthority{InputAuthority_}, StateAuthority{StateAuthority_}, AreaOfInterestLayerMask{AreaOfInterestLayerMask_}, reserved{reserved_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // static field const value: static System.Int32 ACTIVE_FLAG
    static constexpr const int ACTIVE_FLAG = 1;
    // Get static field: static System.Int32 ACTIVE_FLAG
    static int _get_ACTIVE_FLAG();
    // Set static field: static System.Int32 ACTIVE_FLAG
    static void _set_ACTIVE_FLAG(int value);
    // static field const value: static public System.Int32 WORD_COUNT
    static constexpr const int WORD_COUNT = 20;
    // Get static field: static public System.Int32 WORD_COUNT
    static int _get_WORD_COUNT();
    // Set static field: static public System.Int32 WORD_COUNT
    static void _set_WORD_COUNT(int value);
    // static field const value: static public System.Int32 REPLICATE_WORD_OFFSET
    static constexpr const int REPLICATE_WORD_OFFSET = 11;
    // Get static field: static public System.Int32 REPLICATE_WORD_OFFSET
    static int _get_REPLICATE_WORD_OFFSET();
    // Set static field: static public System.Int32 REPLICATE_WORD_OFFSET
    static void _set_REPLICATE_WORD_OFFSET(int value);
    // static field const value: static public System.Int32 INPUT_AUTHORITY_OFFSET
    static constexpr const int INPUT_AUTHORITY_OFFSET = 12;
    // Get static field: static public System.Int32 INPUT_AUTHORITY_OFFSET
    static int _get_INPUT_AUTHORITY_OFFSET();
    // Set static field: static public System.Int32 INPUT_AUTHORITY_OFFSET
    static void _set_INPUT_AUTHORITY_OFFSET(int value);
    // static field const value: static public System.Int32 STATE_AUTHORITY_OFFSET
    static constexpr const int STATE_AUTHORITY_OFFSET = 13;
    // Get static field: static public System.Int32 STATE_AUTHORITY_OFFSET
    static int _get_STATE_AUTHORITY_OFFSET();
    // Set static field: static public System.Int32 STATE_AUTHORITY_OFFSET
    static void _set_STATE_AUTHORITY_OFFSET(int value);
    // Get instance field reference: public Fusion.NetworkId Id
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkId& dyn_Id();
    // Get instance field reference: public Fusion.NetworkPrefabId Type
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabId& dyn_Type();
    // Get instance field reference: public Fusion.NetworkId NestingRoot
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkId& dyn_NestingRoot();
    // Get instance field reference: public Fusion.NetworkObjectNestingKey NestingKey
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectNestingKey& dyn_NestingKey();
    // Get instance field reference: public System.Guid SceneGuid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_SceneGuid();
    // Get instance field reference: public System.Int32 WordCount
    [[deprecated("Use field access instead!")]] int& dyn_WordCount();
    // Get instance field reference: public System.Int32 TransformOffset
    [[deprecated("Use field access instead!")]] int& dyn_TransformOffset();
    // Get instance field reference: public Fusion.NetworkObjectHeaderFlags Flags
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectHeaderFlags& dyn_Flags();
    // Get instance field reference: public Fusion.NetworkObjectPredictionKey PredictionKey
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectPredictionKey& dyn_PredictionKey();
    // Get instance field reference: public Fusion.PlayerRef InputAuthority
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn_InputAuthority();
    // Get instance field reference: public Fusion.PlayerRef StateAuthority
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn_StateAuthority();
    // Get instance field reference: public System.Int32 AreaOfInterestLayerMask
    [[deprecated("Use field access instead!")]] int& dyn_AreaOfInterestLayerMask();
    // Get instance field reference: private Fusion.NetworkObjectHeader/<_reserved>e__FixedBuffer _reserved
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectHeader::$_reserved$e__FixedBuffer& dyn__reserved();
    // public override System.String ToString()
    // Offset: 0x2B4CF44
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.NetworkObjectHeader
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectHeader::$_reserved$e__FixedBuffer, "Fusion", "NetworkObjectHeader/<_reserved>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkObjectHeader::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkObjectHeader::*)()>(&Fusion::NetworkObjectHeader::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectHeader), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
