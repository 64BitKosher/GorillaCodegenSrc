// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Poly2Tri.TriangulationMode
#include "Pathfinding/Poly2Tri/TriangulationMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Pathfinding::Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: TriangulationDebugContext
  class TriangulationDebugContext;
  // Forward declaring type: Triangulatable
  class Triangulatable;
  // Forward declaring type: TriangulationAlgorithm
  struct TriangulationAlgorithm;
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
  // Forward declaring type: DTSweepDebugContext
  class DTSweepDebugContext;
}
// Completed forward declares
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Poly2Tri::TriangulationContext);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::TriangulationContext*, "Pathfinding.Poly2Tri", "TriangulationContext");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Poly2Tri.TriangulationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangulationContext : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle> Triangles
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* Triangles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint> Points
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* Points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // private Pathfinding.Poly2Tri.TriangulationDebugContext <DebugContext>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::Poly2Tri::TriangulationDebugContext* DebugContext;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationDebugContext*) == 0x8);
    // private Pathfinding.Poly2Tri.TriangulationMode <TriangulationMode>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::Pathfinding::Poly2Tri::TriangulationMode TriangulationMode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationMode) == 0x4);
    // Padding between fields: TriangulationMode and: Triangulatable
    char __padding3[0x4] = {};
    // private Pathfinding.Poly2Tri.Triangulatable <Triangulatable>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::Poly2Tri::Triangulatable* Triangulatable;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::Triangulatable*) == 0x8);
    // private System.Int32 <StepCount>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int StepCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <IsDebugEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool IsDebugEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle> Triangles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*& dyn_Triangles();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint> Points
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& dyn_Points();
    // Get instance field reference: private Pathfinding.Poly2Tri.TriangulationDebugContext <DebugContext>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::TriangulationDebugContext*& dyn_$DebugContext$k__BackingField();
    // Get instance field reference: private Pathfinding.Poly2Tri.TriangulationMode <TriangulationMode>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::TriangulationMode& dyn_$TriangulationMode$k__BackingField();
    // Get instance field reference: private Pathfinding.Poly2Tri.Triangulatable <Triangulatable>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::Triangulatable*& dyn_$Triangulatable$k__BackingField();
    // Get instance field reference: private System.Int32 <StepCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$StepCount$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDebugEnabled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDebugEnabled$k__BackingField();
    // protected System.Void .ctor()
    // Offset: 0x49C7798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Poly2Tri::TriangulationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationContext*, creationType>()));
    }
    // public Pathfinding.Poly2Tri.TriangulationDebugContext get_DebugContext()
    // Offset: 0x49C7FD8
    ::Pathfinding::Poly2Tri::TriangulationDebugContext* get_DebugContext();
    // public Pathfinding.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x49C7FE0
    ::Pathfinding::Poly2Tri::TriangulationMode get_TriangulationMode();
    // protected System.Void set_TriangulationMode(Pathfinding.Poly2Tri.TriangulationMode value)
    // Offset: 0x49C7FE8
    void set_TriangulationMode(::Pathfinding::Poly2Tri::TriangulationMode value);
    // public Pathfinding.Poly2Tri.Triangulatable get_Triangulatable()
    // Offset: 0x49C7FF0
    ::Pathfinding::Poly2Tri::Triangulatable* get_Triangulatable();
    // private System.Void set_Triangulatable(Pathfinding.Poly2Tri.Triangulatable value)
    // Offset: 0x49C7FF8
    void set_Triangulatable(::Pathfinding::Poly2Tri::Triangulatable* value);
    // public System.Int32 get_StepCount()
    // Offset: 0x49C8000
    int get_StepCount();
    // private System.Void set_StepCount(System.Int32 value)
    // Offset: 0x49C8008
    void set_StepCount(int value);
    // public System.Void Done()
    // Offset: 0x49C4790
    void Done();
    // public Pathfinding.Poly2Tri.TriangulationAlgorithm get_Algorithm()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::Poly2Tri::TriangulationAlgorithm get_Algorithm();
    // public System.Void PrepareTriangulation(Pathfinding.Poly2Tri.Triangulatable t)
    // Offset: 0x49C7D64
    void PrepareTriangulation(::Pathfinding::Poly2Tri::Triangulatable* t);
    // public Pathfinding.Poly2Tri.TriangulationConstraint NewConstraint(Pathfinding.Poly2Tri.TriangulationPoint a, Pathfinding.Poly2Tri.TriangulationPoint b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::Poly2Tri::TriangulationConstraint* NewConstraint(::Pathfinding::Poly2Tri::TriangulationPoint* a, ::Pathfinding::Poly2Tri::TriangulationPoint* b);
    // public System.Void Update(System.String message)
    // Offset: 0x49C4B2C
    void Update(::StringW message);
    // public System.Void Clear()
    // Offset: 0x49C7A3C
    void Clear();
    // public System.Boolean get_IsDebugEnabled()
    // Offset: 0x49C8010
    bool get_IsDebugEnabled();
    // public Pathfinding.Poly2Tri.DTSweepDebugContext get_DTDebugContext()
    // Offset: 0x49C48BC
    ::Pathfinding::Poly2Tri::DTSweepDebugContext* get_DTDebugContext();
  }; // Pathfinding.Poly2Tri.TriangulationContext
  #pragma pack(pop)
  static check_size<sizeof(TriangulationContext), 60 + sizeof(bool)> __Pathfinding_Poly2Tri_TriangulationContextSizeCheck;
  static_assert(sizeof(TriangulationContext) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_DebugContext
// Il2CppName: get_DebugContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationDebugContext* (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_DebugContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_DebugContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_TriangulationMode
// Il2CppName: get_TriangulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationMode (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_TriangulationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::set_TriangulationMode
// Il2CppName: set_TriangulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::TriangulationMode)>(&Pathfinding::Poly2Tri::TriangulationContext::set_TriangulationMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "set_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_Triangulatable
// Il2CppName: get_Triangulatable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::Triangulatable* (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_Triangulatable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_Triangulatable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::set_Triangulatable
// Il2CppName: set_Triangulatable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::Triangulatable*)>(&Pathfinding::Poly2Tri::TriangulationContext::set_Triangulatable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "Triangulatable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "set_Triangulatable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_StepCount
// Il2CppName: get_StepCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_StepCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_StepCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::set_StepCount
// Il2CppName: set_StepCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)(int)>(&Pathfinding::Poly2Tri::TriangulationContext::set_StepCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "set_StepCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::Done
// Il2CppName: Done
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::Done)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "Done", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_Algorithm
// Il2CppName: get_Algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationAlgorithm (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_Algorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_Algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::PrepareTriangulation
// Il2CppName: PrepareTriangulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::Triangulatable*)>(&Pathfinding::Poly2Tri::TriangulationContext::PrepareTriangulation)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "Triangulatable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "PrepareTriangulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::NewConstraint
// Il2CppName: NewConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::TriangulationConstraint* (Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&Pathfinding::Poly2Tri::TriangulationContext::NewConstraint)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "NewConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)(::StringW)>(&Pathfinding::Poly2Tri::TriangulationContext::Update)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_IsDebugEnabled
// Il2CppName: get_IsDebugEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_IsDebugEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_IsDebugEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::TriangulationContext::get_DTDebugContext
// Il2CppName: get_DTDebugContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Poly2Tri::DTSweepDebugContext* (Pathfinding::Poly2Tri::TriangulationContext::*)()>(&Pathfinding::Poly2Tri::TriangulationContext::get_DTDebugContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::TriangulationContext*), "get_DTDebugContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
