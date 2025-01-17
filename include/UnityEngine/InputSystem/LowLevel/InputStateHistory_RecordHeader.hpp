// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputStateHistory
#include "UnityEngine/InputSystem/LowLevel/InputStateHistory.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputStateHistory::RecordHeader/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer
    struct $m_StateWithControlIndex$e__FixedBuffer;
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer
    struct $m_StateWithoutControlIndex$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $m_StateWithControlIndex$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $m_StateWithControlIndex$e__FixedBuffer
      constexpr $m_StateWithControlIndex$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordHeader_$m_StateWithControlIndex$e__FixedBufferSizeCheck;
    static_assert(sizeof(InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer) == 0x1);
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $m_StateWithoutControlIndex$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $m_StateWithoutControlIndex$e__FixedBuffer
      constexpr $m_StateWithoutControlIndex$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordHeader_$m_StateWithoutControlIndex$e__FixedBufferSizeCheck;
    static_assert(sizeof(InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer) == 0x1);
    public:
    // public System.Double time
    // Size: 0x8
    // Offset: 0x0
    double time;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.UInt32 version
    // Size: 0x4
    // Offset: 0x8
    uint version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating union for fields at offset: 0xC
    union {
      // public System.Int32 controlIndex
      // Size: 0x4
      // Offset: 0xC
      int controlIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer m_StateWithoutControlIndex
      // Size: 0x1
      // Offset: 0xC
      ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer m_StateWithoutControlIndex;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer) == 0x1);
    };
    // private UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer m_StateWithControlIndex
    // Size: 0x1
    // Offset: 0x10
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer m_StateWithControlIndex;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer) == 0x1);
    public:
    // Creating value type constructor for type: RecordHeader
    constexpr RecordHeader(double time_ = {}, uint version_ = {}, int controlIndex_ = {}, ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer m_StateWithControlIndex_ = {}) noexcept : time{time_}, version{version_}, controlIndex{controlIndex_}, m_StateWithControlIndex{m_StateWithControlIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 kSizeWithControlIndex
    static constexpr const int kSizeWithControlIndex = 16;
    // Get static field: static public System.Int32 kSizeWithControlIndex
    static int _get_kSizeWithControlIndex();
    // Set static field: static public System.Int32 kSizeWithControlIndex
    static void _set_kSizeWithControlIndex(int value);
    // static field const value: static public System.Int32 kSizeWithoutControlIndex
    static constexpr const int kSizeWithoutControlIndex = 12;
    // Get static field: static public System.Int32 kSizeWithoutControlIndex
    static int _get_kSizeWithoutControlIndex();
    // Set static field: static public System.Int32 kSizeWithoutControlIndex
    static void _set_kSizeWithoutControlIndex(int value);
    // Get instance field reference: public System.Double time
    [[deprecated("Use field access instead!")]] double& dyn_time();
    // Get instance field reference: public System.UInt32 version
    [[deprecated("Use field access instead!")]] uint& dyn_version();
    // Get instance field reference: public System.Int32 controlIndex
    [[deprecated("Use field access instead!")]] int& dyn_controlIndex();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer m_StateWithoutControlIndex
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer& dyn_m_StateWithoutControlIndex();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer m_StateWithControlIndex
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer& dyn_m_StateWithControlIndex();
    // public System.Byte* get_statePtrWithControlIndex()
    // Offset: 0x5159410
    uint8_t* get_statePtrWithControlIndex();
    // public System.Byte* get_statePtrWithoutControlIndex()
    // Offset: 0x5159408
    uint8_t* get_statePtrWithoutControlIndex();
  }; // UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader
  #pragma pack(pop)
  static check_size<sizeof(InputStateHistory::RecordHeader), 16 + sizeof(::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer)> __UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordHeaderSizeCheck;
  static_assert(sizeof(InputStateHistory::RecordHeader) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithoutControlIndex$e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::$m_StateWithControlIndex$e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::get_statePtrWithControlIndex
// Il2CppName: get_statePtrWithControlIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::get_statePtrWithControlIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader), "get_statePtrWithControlIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::get_statePtrWithoutControlIndex
// Il2CppName: get_statePtrWithoutControlIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader::get_statePtrWithoutControlIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::RecordHeader), "get_statePtrWithoutControlIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
