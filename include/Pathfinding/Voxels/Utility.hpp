// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Int3
#include "Pathfinding/Int3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Forward declaring type: Utility
  class Utility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Voxels::Utility);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Voxels::Utility*, "Pathfinding.Voxels", "Utility");
// Type namespace: Pathfinding.Voxels
namespace Pathfinding::Voxels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Voxels.Utility
  // [TokenAttribute] Offset: FFFFFFFF
  class Utility : public ::Il2CppObject {
    public:
    // static public System.Single Min(System.Single a, System.Single b, System.Single c)
    // Offset: 0x2A1ADC0
    static float Min(float a, float b, float c);
    // static public System.Single Max(System.Single a, System.Single b, System.Single c)
    // Offset: 0x2A1ADD4
    static float Max(float a, float b, float c);
    // static public Pathfinding.Int3[] RemoveDuplicateVertices(Pathfinding.Int3[] vertices, System.Int32[] triangles)
    // Offset: 0x2A1ADE8
    static ::ArrayW<::Pathfinding::Int3> RemoveDuplicateVertices(::ArrayW<::Pathfinding::Int3> vertices, ::ArrayW<int> triangles);
    // public System.Void .ctor()
    // Offset: 0x2A1B108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Utility* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Voxels::Utility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Utility*, creationType>()));
    }
  }; // Pathfinding.Voxels.Utility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Voxels::Utility::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::Voxels::Utility::Min)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::Utility*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: Pathfinding::Voxels::Utility::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::Voxels::Utility::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::Utility*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: Pathfinding::Voxels::Utility::RemoveDuplicateVertices
// Il2CppName: RemoveDuplicateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Pathfinding::Int3> (*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<int>)>(&Pathfinding::Voxels::Utility::RemoveDuplicateVertices)> {
  static const MethodInfo* get() {
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Pathfinding", "Int3"), 1)->byval_arg;
    static auto* triangles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Voxels::Utility*), "RemoveDuplicateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, triangles});
  }
};
// Writing MetadataGetter for method: Pathfinding::Voxels::Utility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
