// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
#include "UnityEngine/ProBuilder/KdTree/Math/TypeMath_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree.Math
namespace UnityEngine::ProBuilder::KdTree::Math {
  // Forward declaring type: FloatMath
  class FloatMath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::KdTree::Math::FloatMath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::Math::FloatMath*, "UnityEngine.ProBuilder.KdTree.Math", "FloatMath");
// Type namespace: UnityEngine.ProBuilder.KdTree.Math
namespace UnityEngine::ProBuilder::KdTree::Math {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.Math.FloatMath
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatMath : public ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<float> {
    public:
    // public System.Int32 Compare(System.Single a, System.Single b)
    // Offset: 0x5196500
    int Compare(float a, float b);
    // public System.Boolean AreEqual(System.Single a, System.Single b)
    // Offset: 0x5196520
    bool AreEqual(float a, float b);
    // public System.Single get_MinValue()
    // Offset: 0x519652C
    float get_MinValue();
    // public System.Single get_Zero()
    // Offset: 0x5196538
    float get_Zero();
    // public System.Single get_NegativeInfinity()
    // Offset: 0x5196540
    float get_NegativeInfinity();
    // public System.Single get_PositiveInfinity()
    // Offset: 0x519654C
    float get_PositiveInfinity();
    // public System.Single Add(System.Single a, System.Single b)
    // Offset: 0x5196558
    float Add(float a, float b);
    // public System.Single Subtract(System.Single a, System.Single b)
    // Offset: 0x5196560
    float Subtract(float a, float b);
    // public System.Single Multiply(System.Single a, System.Single b)
    // Offset: 0x5196568
    float Multiply(float a, float b);
    // public System.Single DistanceSquaredBetweenPoints(System.Single[] a, System.Single[] b)
    // Offset: 0x5196570
    float DistanceSquaredBetweenPoints(::ArrayW<float> a, ::ArrayW<float> b);
    // public System.Void .ctor()
    // Offset: 0x5196670
    // Implemented from: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
    // Base method: System.Void TypeMath_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatMath* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::Math::FloatMath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatMath*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.KdTree.Math.FloatMath
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)(float, float)>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)(float, float)>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::AreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_MinValue
// Il2CppName: get_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)()>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_MinValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "get_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_Zero
// Il2CppName: get_Zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)()>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_Zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "get_Zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_NegativeInfinity
// Il2CppName: get_NegativeInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)()>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_NegativeInfinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "get_NegativeInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_PositiveInfinity
// Il2CppName: get_PositiveInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)()>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::get_PositiveInfinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "get_PositiveInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)(float, float)>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::Add)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)(float, float)>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::Subtract)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)(float, float)>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::Multiply)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::DistanceSquaredBetweenPoints
// Il2CppName: DistanceSquaredBetweenPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::KdTree::Math::FloatMath::*)(::ArrayW<float>, ::ArrayW<float>)>(&UnityEngine::ProBuilder::KdTree::Math::FloatMath::DistanceSquaredBetweenPoints)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::KdTree::Math::FloatMath*), "DistanceSquaredBetweenPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::Math::FloatMath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
