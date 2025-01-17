// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.Protocol18
#include "ExitGames/Client/Photon/Protocol18.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Protocol18::GpType, "ExitGames.Client.Photon", "Protocol18/GpType");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.Protocol18/GpType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Protocol18::GpType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: GpType
    constexpr GpType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Unknown
    static constexpr const uint8_t Unknown = 0u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Unknown
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Unknown();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Unknown
    static void _set_Unknown(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Boolean
    static constexpr const uint8_t Boolean = 2u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Boolean
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Boolean();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Boolean
    static void _set_Boolean(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Byte
    static constexpr const uint8_t Byte = 3u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Byte
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Byte();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Byte
    static void _set_Byte(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Short
    static constexpr const uint8_t Short = 4u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Short
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Short();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Short
    static void _set_Short(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Float
    static constexpr const uint8_t Float = 5u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Float
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Float();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Float
    static void _set_Float(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Double
    static constexpr const uint8_t Double = 6u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Double
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Double();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Double
    static void _set_Double(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType String
    static constexpr const uint8_t String = 7u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType String
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_String();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType String
    static void _set_String(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Null
    static constexpr const uint8_t Null = 8u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Null
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Null();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Null
    static void _set_Null(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType CompressedInt
    static constexpr const uint8_t CompressedInt = 9u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedInt
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_CompressedInt();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedInt
    static void _set_CompressedInt(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType CompressedLong
    static constexpr const uint8_t CompressedLong = 10u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedLong
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_CompressedLong();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedLong
    static void _set_CompressedLong(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Int1
    static constexpr const uint8_t Int1 = 11u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Int1
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Int1();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Int1
    static void _set_Int1(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Int1_
    static constexpr const uint8_t Int1_ = 12u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Int1_
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Int1_();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Int1_
    static void _set_Int1_(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Int2
    static constexpr const uint8_t Int2 = 13u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Int2
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Int2();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Int2
    static void _set_Int2(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Int2_
    static constexpr const uint8_t Int2_ = 14u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Int2_
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Int2_();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Int2_
    static void _set_Int2_(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType L1
    static constexpr const uint8_t L1 = 15u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType L1
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_L1();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType L1
    static void _set_L1(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType L1_
    static constexpr const uint8_t L1_ = 16u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType L1_
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_L1_();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType L1_
    static void _set_L1_(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType L2
    static constexpr const uint8_t L2 = 17u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType L2
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_L2();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType L2
    static void _set_L2(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType L2_
    static constexpr const uint8_t L2_ = 18u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType L2_
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_L2_();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType L2_
    static void _set_L2_(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Custom
    static constexpr const uint8_t Custom = 19u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Custom
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Custom();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Custom
    static void _set_Custom(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType CustomTypeSlim
    static constexpr const uint8_t CustomTypeSlim = 128u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType CustomTypeSlim
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_CustomTypeSlim();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType CustomTypeSlim
    static void _set_CustomTypeSlim(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Dictionary
    static constexpr const uint8_t Dictionary = 20u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Dictionary
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Dictionary();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Dictionary
    static void _set_Dictionary(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Hashtable
    static constexpr const uint8_t Hashtable = 21u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Hashtable
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Hashtable();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Hashtable
    static void _set_Hashtable(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType ObjectArray
    static constexpr const uint8_t ObjectArray = 23u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType ObjectArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_ObjectArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType ObjectArray
    static void _set_ObjectArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType OperationRequest
    static constexpr const uint8_t OperationRequest = 24u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType OperationRequest
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_OperationRequest();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType OperationRequest
    static void _set_OperationRequest(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType OperationResponse
    static constexpr const uint8_t OperationResponse = 25u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType OperationResponse
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_OperationResponse();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType OperationResponse
    static void _set_OperationResponse(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType EventData
    static constexpr const uint8_t EventData = 26u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType EventData
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_EventData();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType EventData
    static void _set_EventData(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType BooleanFalse
    static constexpr const uint8_t BooleanFalse = 27u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType BooleanFalse
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_BooleanFalse();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType BooleanFalse
    static void _set_BooleanFalse(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType BooleanTrue
    static constexpr const uint8_t BooleanTrue = 28u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType BooleanTrue
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_BooleanTrue();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType BooleanTrue
    static void _set_BooleanTrue(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType ShortZero
    static constexpr const uint8_t ShortZero = 29u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType ShortZero
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_ShortZero();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType ShortZero
    static void _set_ShortZero(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType IntZero
    static constexpr const uint8_t IntZero = 30u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType IntZero
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_IntZero();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType IntZero
    static void _set_IntZero(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType LongZero
    static constexpr const uint8_t LongZero = 31u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType LongZero
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_LongZero();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType LongZero
    static void _set_LongZero(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType FloatZero
    static constexpr const uint8_t FloatZero = 32u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType FloatZero
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_FloatZero();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType FloatZero
    static void _set_FloatZero(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType DoubleZero
    static constexpr const uint8_t DoubleZero = 33u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType DoubleZero
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_DoubleZero();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType DoubleZero
    static void _set_DoubleZero(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType ByteZero
    static constexpr const uint8_t ByteZero = 34u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType ByteZero
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_ByteZero();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType ByteZero
    static void _set_ByteZero(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType Array
    static constexpr const uint8_t Array = 64u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType Array
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_Array();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType Array
    static void _set_Array(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType BooleanArray
    static constexpr const uint8_t BooleanArray = 66u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType BooleanArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_BooleanArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType BooleanArray
    static void _set_BooleanArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType ByteArray
    static constexpr const uint8_t ByteArray = 67u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType ByteArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_ByteArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType ByteArray
    static void _set_ByteArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType ShortArray
    static constexpr const uint8_t ShortArray = 68u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType ShortArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_ShortArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType ShortArray
    static void _set_ShortArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType DoubleArray
    static constexpr const uint8_t DoubleArray = 70u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType DoubleArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_DoubleArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType DoubleArray
    static void _set_DoubleArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType FloatArray
    static constexpr const uint8_t FloatArray = 69u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType FloatArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_FloatArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType FloatArray
    static void _set_FloatArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType StringArray
    static constexpr const uint8_t StringArray = 71u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType StringArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_StringArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType StringArray
    static void _set_StringArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType HashtableArray
    static constexpr const uint8_t HashtableArray = 85u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType HashtableArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_HashtableArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType HashtableArray
    static void _set_HashtableArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType DictionaryArray
    static constexpr const uint8_t DictionaryArray = 84u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType DictionaryArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_DictionaryArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType DictionaryArray
    static void _set_DictionaryArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType CustomTypeArray
    static constexpr const uint8_t CustomTypeArray = 83u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType CustomTypeArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_CustomTypeArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType CustomTypeArray
    static void _set_CustomTypeArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType CompressedIntArray
    static constexpr const uint8_t CompressedIntArray = 73u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedIntArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_CompressedIntArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedIntArray
    static void _set_CompressedIntArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol18/GpType CompressedLongArray
    static constexpr const uint8_t CompressedLongArray = 74u;
    // Get static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedLongArray
    static ::ExitGames::Client::Photon::Protocol18::GpType _get_CompressedLongArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol18/GpType CompressedLongArray
    static void _set_CompressedLongArray(::ExitGames::Client::Photon::Protocol18::GpType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // ExitGames.Client.Photon.Protocol18/GpType
  #pragma pack(pop)
  static check_size<sizeof(Protocol18::GpType), 0 + sizeof(uint8_t)> __ExitGames_Client_Photon_Protocol18_GpTypeSizeCheck;
  static_assert(sizeof(Protocol18::GpType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
