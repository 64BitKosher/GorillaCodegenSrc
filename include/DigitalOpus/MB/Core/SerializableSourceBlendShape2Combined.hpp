// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombiner
#include "DigitalOpus/MB/Core/MB3_MeshCombiner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: SerializableSourceBlendShape2Combined
  class SerializableSourceBlendShape2Combined;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*, "DigitalOpus.MB.Core", "SerializableSourceBlendShape2Combined");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.SerializableSourceBlendShape2Combined
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializableSourceBlendShape2Combined : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject[] srcGameObject
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::GameObject*> srcGameObject;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Int32[] srcBlendShapeIdx
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> srcBlendShapeIdx;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public UnityEngine.GameObject[] combinedMeshTargetGameObject
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> combinedMeshTargetGameObject;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Int32[] blendShapeIdx
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> blendShapeIdx;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject[] srcGameObject
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_srcGameObject();
    // Get instance field reference: public System.Int32[] srcBlendShapeIdx
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_srcBlendShapeIdx();
    // Get instance field reference: public UnityEngine.GameObject[] combinedMeshTargetGameObject
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_combinedMeshTargetGameObject();
    // Get instance field reference: public System.Int32[] blendShapeIdx
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_blendShapeIdx();
    // public System.Void SetBuffers(UnityEngine.GameObject[] srcGameObjs, System.Int32[] srcBlendShapeIdxs, UnityEngine.GameObject[] targGameObjs, System.Int32[] targBlendShapeIdx)
    // Offset: 0x43D2E64
    void SetBuffers(::ArrayW<::UnityEngine::GameObject*> srcGameObjs, ::ArrayW<int> srcBlendShapeIdxs, ::ArrayW<::UnityEngine::GameObject*> targGameObjs, ::ArrayW<int> targBlendShapeIdx);
    // public System.Void DebugPrint()
    // Offset: 0x43D2EC4
    void DebugPrint();
    // public System.Collections.Generic.Dictionary`2<DigitalOpus.MB.Core.MB3_MeshCombiner/MBBlendShapeKey,DigitalOpus.MB.Core.MB3_MeshCombiner/MBBlendShapeValue> GenerateMapFromSerializedData()
    // Offset: 0x43D0C78
    ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner::MBBlendShapeKey*, ::DigitalOpus::MB::Core::MB3_MeshCombiner::MBBlendShapeValue*>* GenerateMapFromSerializedData();
    // public System.Void .ctor()
    // Offset: 0x43D2D34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializableSourceBlendShape2Combined* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializableSourceBlendShape2Combined*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.SerializableSourceBlendShape2Combined
  #pragma pack(pop)
  static check_size<sizeof(SerializableSourceBlendShape2Combined), 40 + sizeof(::ArrayW<int>)> __DigitalOpus_MB_Core_SerializableSourceBlendShape2CombinedSizeCheck;
  static_assert(sizeof(SerializableSourceBlendShape2Combined) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::SetBuffers
// Il2CppName: SetBuffers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int>, ::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int>)>(&DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::SetBuffers)> {
  static const MethodInfo* get() {
    static auto* srcGameObjs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* srcBlendShapeIdxs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* targGameObjs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* targBlendShapeIdx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*), "SetBuffers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{srcGameObjs, srcBlendShapeIdxs, targGameObjs, targBlendShapeIdx});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::DebugPrint
// Il2CppName: DebugPrint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)()>(&DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::DebugPrint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*), "DebugPrint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::GenerateMapFromSerializedData
// Il2CppName: GenerateMapFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner::MBBlendShapeKey*, ::DigitalOpus::MB::Core::MB3_MeshCombiner::MBBlendShapeValue*>* (DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::*)()>(&DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::GenerateMapFromSerializedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*), "GenerateMapFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
