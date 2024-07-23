// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo
#include "UnityEngine/InputSystem/LowLevel/IInputDeviceCommandInfo.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputDeviceCommand
#include "UnityEngine/InputSystem/LowLevel/InputDeviceCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: FourCC because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: QueryPairedUserAccountCommand
  struct QueryPairedUserAccountCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x211
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
  // [TokenAttribute] Offset: FFFFFFFF
  struct QueryPairedUserAccountCommand/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result
    struct Result;
    // Nested type: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer
    struct $idBuffer$e__FixedBuffer;
    // Nested type: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer
    struct $nameBuffer$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $idBuffer$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $idBuffer$e__FixedBuffer
      constexpr $idBuffer$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
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
    }; // UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_LowLevel_QueryPairedUserAccountCommand_$idBuffer$e__FixedBufferSizeCheck;
    static_assert(sizeof(QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer) == 0x1);
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $nameBuffer$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $nameBuffer$e__FixedBuffer
      constexpr $nameBuffer$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
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
    }; // UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_LowLevel_QueryPairedUserAccountCommand_$nameBuffer$e__FixedBufferSizeCheck;
    static_assert(sizeof(QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer) == 0x1);
    public:
    // public UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand) == 0x8);
    // public System.UInt64 handle
    // Size: 0x8
    // Offset: 0x8
    uint64_t handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer nameBuffer
    // Size: 0x1
    // Offset: 0x10
    ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer nameBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer) == 0x1);
    // Padding between fields: nameBuffer and: idBuffer
    char __padding2[0x1FF] = {};
    // UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer idBuffer
    // Size: 0x1
    // Offset: 0x210
    ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer idBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer) == 0x1);
    public:
    // Creating value type constructor for type: QueryPairedUserAccountCommand
    constexpr QueryPairedUserAccountCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand_ = {}, uint64_t handle_ = {}, ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer nameBuffer_ = {}, ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer idBuffer_ = {}) noexcept : baseCommand{baseCommand_}, handle{handle_}, nameBuffer{nameBuffer_}, idBuffer{idBuffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(this);
    }
    // static field const value: static System.Int32 kMaxNameLength
    static constexpr const int kMaxNameLength = 256;
    // Get static field: static System.Int32 kMaxNameLength
    static int _get_kMaxNameLength();
    // Set static field: static System.Int32 kMaxNameLength
    static void _set_kMaxNameLength(int value);
    // static field const value: static System.Int32 kMaxIdLength
    static constexpr const int kMaxIdLength = 256;
    // Get static field: static System.Int32 kMaxIdLength
    static int _get_kMaxIdLength();
    // Set static field: static System.Int32 kMaxIdLength
    static void _set_kMaxIdLength(int value);
    // static field const value: static System.Int32 kSize
    static constexpr const int kSize = 1040;
    // Get static field: static System.Int32 kSize
    static int _get_kSize();
    // Set static field: static System.Int32 kSize
    static void _set_kSize(int value);
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& dyn_baseCommand();
    // Get instance field reference: public System.UInt64 handle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_handle();
    // Get instance field reference: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer nameBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer& dyn_nameBuffer();
    // Get instance field reference: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer idBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer& dyn_idBuffer();
    // static public UnityEngine.InputSystem.Utilities.FourCC get_Type()
    // Offset: 0x514A790
    static ::UnityEngine::InputSystem::Utilities::FourCC get_Type();
    // public System.String get_id()
    // Offset: 0x514A7C0
    ::StringW get_id();
    // public System.Void set_id(System.String value)
    // Offset: 0x514A7D0
    void set_id(::StringW value);
    // public System.String get_name()
    // Offset: 0x514A8E0
    ::StringW get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x514A8F0
    void set_name(::StringW value);
    // public UnityEngine.InputSystem.Utilities.FourCC get_typeStatic()
    // Offset: 0x514AA00
    ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();
    // static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand Create()
    // Offset: 0x514AA30
    static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand Create();
  }; // UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
  #pragma pack(pop)
  static check_size<sizeof(QueryPairedUserAccountCommand), 528 + sizeof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer)> __UnityEngine_InputSystem_LowLevel_QueryPairedUserAccountCommandSizeCheck;
  static_assert(sizeof(QueryPairedUserAccountCommand) == 0x211);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$nameBuffer$e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::$idBuffer$e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)(::StringW)>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)(::StringW)>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_typeStatic
// Il2CppName: get_typeStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_typeStatic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "get_typeStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand (*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
