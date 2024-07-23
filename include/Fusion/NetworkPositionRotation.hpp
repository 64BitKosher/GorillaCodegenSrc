// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkPosition
#include "Fusion/NetworkPosition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: ReadAccuracy
  struct ReadAccuracy;
  // Forward declaring type: WriteAccuracy
  struct WriteAccuracy;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkPositionRotation
  class NetworkPositionRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkPositionRotation);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPositionRotation*, "Fusion", "NetworkPositionRotation");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkPositionRotation
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkBehaviourWeavedAttribute] Offset: FFFFFFFF
  // [OrderAfterAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class NetworkPositionRotation : public ::Fusion::NetworkPosition {
    public:
    // Nested type: ::Fusion::NetworkPositionRotation::EncodedRotation
    struct EncodedRotation;
    // static field const value: static private System.Int32 WORD_COUNT_ROTATION
    static constexpr const int WORD_COUNT_ROTATION = 4;
    // Get static field: static private System.Int32 WORD_COUNT_ROTATION
    static int _get_WORD_COUNT_ROTATION();
    // Set static field: static private System.Int32 WORD_COUNT_ROTATION
    static void _set_WORD_COUNT_ROTATION(int value);
    // static field const value: static private System.Int32 OFFSET_BASE
    static constexpr const int OFFSET_BASE = 3;
    // Get static field: static private System.Int32 OFFSET_BASE
    static int _get_OFFSET_BASE();
    // Set static field: static private System.Int32 OFFSET_BASE
    static void _set_OFFSET_BASE(int value);
    // static field const value: static private System.Int32 OFFSET_ROTATION
    static constexpr const int OFFSET_ROTATION = 3;
    // Get static field: static private System.Int32 OFFSET_ROTATION
    static int _get_OFFSET_ROTATION();
    // Set static field: static private System.Int32 OFFSET_ROTATION
    static void _set_OFFSET_ROTATION(int value);
    // static field const value: static protected System.Int32 WORD_COUNT_NPR
    static constexpr const int WORD_COUNT_NPR = 7;
    // Get static field: static protected System.Int32 WORD_COUNT_NPR
    static int _get_WORD_COUNT_NPR();
    // Set static field: static protected System.Int32 WORD_COUNT_NPR
    static void _set_WORD_COUNT_NPR(int value);
    // protected UnityEngine.Quaternion GetEngineRotation()
    // Offset: 0x2B1BF38
    ::UnityEngine::Quaternion GetEngineRotation();
    // protected System.Void SetEngineRotation(UnityEngine.Quaternion rot)
    // Offset: 0x2B1BF54
    void SetEngineRotation(::UnityEngine::Quaternion rot);
    // protected System.Int32 get_BaseWordCount()
    // Offset: 0x2B1BF70
    int get_BaseWordCount();
    // public UnityEngine.Quaternion ReadRotation()
    // Offset: 0x2B1BF78
    ::UnityEngine::Quaternion ReadRotation();
    // public UnityEngine.Quaternion ReadRotation(System.Int32* ptr)
    // Offset: 0x2B1BFD4
    ::UnityEngine::Quaternion ReadRotation(int* ptr);
    // static public UnityEngine.Quaternion ReadRotation(System.Int32* ptr, Fusion.ReadAccuracy readAccuracy)
    // Offset: 0x2B1C02C
    static ::UnityEngine::Quaternion ReadRotation(int* ptr, ::Fusion::ReadAccuracy readAccuracy);
    // public System.Void WriteRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x2B1C070
    void WriteRotation(::UnityEngine::Quaternion rotation);
    // public System.Void WriteRotation(UnityEngine.Quaternion rotation, System.Int32* ptr)
    // Offset: 0x2B1C140
    void WriteRotation(::UnityEngine::Quaternion rotation, int* ptr);
    // static public System.Void WriteRotation(UnityEngine.Quaternion rotation, System.Int32* ptr, Fusion.WriteAccuracy writeAccuracy)
    // Offset: 0x2B1C20C
    static void WriteRotation(::UnityEngine::Quaternion rotation, int* ptr, ::Fusion::WriteAccuracy writeAccuracy);
    // Fusion.NetworkPositionRotation/EncodedRotation* ReadEncodedRotation()
    // Offset: 0x2B1C2C0
    ::Fusion::NetworkPositionRotation::EncodedRotation* ReadEncodedRotation();
    // protected override System.Void CopyFromBufferToEngine()
    // Offset: 0x2B1BD90
    // Implemented from: Fusion.NetworkPosition
    // Base method: System.Void NetworkPosition::CopyFromBufferToEngine()
    void CopyFromBufferToEngine();
    // protected override System.Void CopyFromEngineToBuffer()
    // Offset: 0x2B1BE58
    // Implemented from: Fusion.NetworkPosition
    // Base method: System.Void NetworkPosition::CopyFromEngineToBuffer()
    void CopyFromEngineToBuffer();
    // public System.Void .ctor()
    // Offset: 0x2B1C2CC
    // Implemented from: Fusion.NetworkPosition
    // Base method: System.Void NetworkPosition::.ctor()
    // Base method: System.Void NetworkAreaOfInterestBehaviour::.ctor()
    // Base method: System.Void NetworkBehaviour::.ctor()
    // Base method: System.Void SimulationBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPositionRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkPositionRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPositionRotation*, creationType>()));
    }
  }; // Fusion.NetworkPositionRotation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::GetEngineRotation
// Il2CppName: GetEngineRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Fusion::NetworkPositionRotation::*)()>(&Fusion::NetworkPositionRotation::GetEngineRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "GetEngineRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::SetEngineRotation
// Il2CppName: SetEngineRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPositionRotation::*)(::UnityEngine::Quaternion)>(&Fusion::NetworkPositionRotation::SetEngineRotation)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "SetEngineRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::get_BaseWordCount
// Il2CppName: get_BaseWordCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkPositionRotation::*)()>(&Fusion::NetworkPositionRotation::get_BaseWordCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "get_BaseWordCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::ReadRotation
// Il2CppName: ReadRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Fusion::NetworkPositionRotation::*)()>(&Fusion::NetworkPositionRotation::ReadRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "ReadRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::ReadRotation
// Il2CppName: ReadRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Fusion::NetworkPositionRotation::*)(int*)>(&Fusion::NetworkPositionRotation::ReadRotation)> {
  static const MethodInfo* get() {
    static auto* ptr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "ReadRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::ReadRotation
// Il2CppName: ReadRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(int*, ::Fusion::ReadAccuracy)>(&Fusion::NetworkPositionRotation::ReadRotation)> {
  static const MethodInfo* get() {
    static auto* ptr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* readAccuracy = &::il2cpp_utils::GetClassFromName("Fusion", "ReadAccuracy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "ReadRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, readAccuracy});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::WriteRotation
// Il2CppName: WriteRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPositionRotation::*)(::UnityEngine::Quaternion)>(&Fusion::NetworkPositionRotation::WriteRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "WriteRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::WriteRotation
// Il2CppName: WriteRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPositionRotation::*)(::UnityEngine::Quaternion, int*)>(&Fusion::NetworkPositionRotation::WriteRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* ptr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "WriteRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, ptr});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::WriteRotation
// Il2CppName: WriteRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Quaternion, int*, ::Fusion::WriteAccuracy)>(&Fusion::NetworkPositionRotation::WriteRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* ptr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* writeAccuracy = &::il2cpp_utils::GetClassFromName("Fusion", "WriteAccuracy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "WriteRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, ptr, writeAccuracy});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::ReadEncodedRotation
// Il2CppName: ReadEncodedRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkPositionRotation::EncodedRotation* (Fusion::NetworkPositionRotation::*)()>(&Fusion::NetworkPositionRotation::ReadEncodedRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "ReadEncodedRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::CopyFromBufferToEngine
// Il2CppName: CopyFromBufferToEngine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPositionRotation::*)()>(&Fusion::NetworkPositionRotation::CopyFromBufferToEngine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "CopyFromBufferToEngine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::CopyFromEngineToBuffer
// Il2CppName: CopyFromEngineToBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPositionRotation::*)()>(&Fusion::NetworkPositionRotation::CopyFromEngineToBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPositionRotation*), "CopyFromEngineToBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPositionRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
