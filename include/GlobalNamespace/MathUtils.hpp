// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MathUtils
  class MathUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MathUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MathUtils*, "", "MathUtils");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MathUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MathUtils : public ::Il2CppObject {
    public:
    // static public System.Boolean Approx(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single epsilon)
    // Offset: 0x2776AE4
    static bool Approx(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float epsilon);
    // static public System.Boolean Approx(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single epsilon)
    // Offset: 0x2776B14
    static bool Approx(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float epsilon);
    // static public UnityEngine.Vector3[] OrientedBoxCorners(UnityEngine.Vector3 center, UnityEngine.Vector3 size, UnityEngine.Quaternion angles)
    // Offset: 0x2776B48
    static ::ArrayW<::UnityEngine::Vector3> OrientedBoxCorners(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion angles);
    // static public System.Void OrientedBoxCornersNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 size, UnityEngine.Quaternion angles, UnityEngine.Vector3[] array, System.Int32 index)
    // Offset: 0x2776DA8
    static void OrientedBoxCornersNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion angles, ::ArrayW<::UnityEngine::Vector3> array, int index);
    // static public System.Boolean OrientedBoxContains(UnityEngine.Vector3 point, UnityEngine.Vector3 boxCenter, UnityEngine.Vector3 boxSize, UnityEngine.Quaternion boxAngles)
    // Offset: 0x277706C
    static bool OrientedBoxContains(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 boxCenter, ::UnityEngine::Vector3 boxSize, ::UnityEngine::Quaternion boxAngles);
    // static public System.Int32 OrientedBoxSphereOverlap(UnityEngine.Vector3 center, System.Single radius, UnityEngine.Vector3 boxCenter, UnityEngine.Vector3 boxSize, UnityEngine.Quaternion boxAngles)
    // Offset: 0x27772B0
    static int OrientedBoxSphereOverlap(::UnityEngine::Vector3 center, float radius, ::UnityEngine::Vector3 boxCenter, ::UnityEngine::Vector3 boxSize, ::UnityEngine::Quaternion boxAngles);
    // static public UnityEngine.Vector3 ClampVectorValues(UnityEngine.Vector3 v, UnityEngine.Vector3 min, UnityEngine.Vector3 max)
    // Offset: 0x27775A8
    static ::UnityEngine::Vector3 ClampVectorValues(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);
    // static public UnityEngine.Bounds[] Partition(UnityEngine.Bounds b, System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x27775E4
    static ::ArrayW<::UnityEngine::Bounds> Partition(::UnityEngine::Bounds b, int x, int y, int z);
    // static public System.Void Validate(ref UnityEngine.Vector3 v)
    // Offset: 0x2777788
    static void Validate(ByRef<::UnityEngine::Vector3> v);
    // static public System.Void ValidateTo(ref UnityEngine.Quaternion q, UnityEngine.Quaternion validForm)
    // Offset: 0x27777C8
    static void ValidateTo(ByRef<::UnityEngine::Quaternion> q, ::UnityEngine::Quaternion validForm);
    // static public System.Single ClampToReal(System.Single f, System.Single min, System.Single max, System.Single epsilon)
    // Offset: 0x2777B2C
    static float ClampToReal(float f, float min, float max, float epsilon);
    // static public System.Single ClampApprox(System.Single f, System.Single min, System.Single max, System.Single epsilon)
    // Offset: 0x2777C30
    static float ClampApprox(float f, float min, float max, float epsilon);
    // static public System.Boolean Approx(System.Single a, System.Single b, System.Single epsilon)
    // Offset: 0x2777CFC
    static bool Approx(float a, float b, float epsilon);
    // static public System.Single Linear(System.Single value, System.Single min, System.Single max, System.Single newMin, System.Single newMax)
    // Offset: 0x2777D70
    static float Linear(float value, float min, float max, float newMin, float newMax);
    // static public System.Single LinearUnclamped(System.Single value, System.Single min, System.Single max, System.Single newMin, System.Single newMax)
    // Offset: 0x2777DA4
    static float LinearUnclamped(float value, float min, float max, float newMin, float newMax);
    // static public System.Single GetCircleValue(System.Single degrees)
    // Offset: 0x2777DC0
    static float GetCircleValue(float degrees);
    // static public UnityEngine.Vector3 WeightedMaxVector(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single eps)
    // Offset: 0x2777E38
    static ::UnityEngine::Vector3 WeightedMaxVector(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float eps);
    // static public UnityEngine.Vector3 MatchMagnitudeInDirection(UnityEngine.Vector3 input, UnityEngine.Vector3 target, System.Single eps)
    // Offset: 0x2777FBC
    static ::UnityEngine::Vector3 MatchMagnitudeInDirection(::UnityEngine::Vector3 input, ::UnityEngine::Vector3 target, float eps);
  }; // MathUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::Approx
// Il2CppName: Approx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::MathUtils::Approx)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "Approx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::Approx
// Il2CppName: Approx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&GlobalNamespace::MathUtils::Approx)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "Approx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::OrientedBoxCorners
// Il2CppName: OrientedBoxCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&GlobalNamespace::MathUtils::OrientedBoxCorners)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angles = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "OrientedBoxCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size, angles});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::OrientedBoxCornersNonAlloc
// Il2CppName: OrientedBoxCornersNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::ArrayW<::UnityEngine::Vector3>, int)>(&GlobalNamespace::MathUtils::OrientedBoxCornersNonAlloc)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angles = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "OrientedBoxCornersNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size, angles, array, index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::OrientedBoxContains
// Il2CppName: OrientedBoxContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&GlobalNamespace::MathUtils::OrientedBoxContains)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boxCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boxSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boxAngles = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "OrientedBoxContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, boxCenter, boxSize, boxAngles});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::OrientedBoxSphereOverlap
// Il2CppName: OrientedBoxSphereOverlap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&GlobalNamespace::MathUtils::OrientedBoxSphereOverlap)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* boxCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boxSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boxAngles = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "OrientedBoxSphereOverlap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius, boxCenter, boxSize, boxAngles});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::ClampVectorValues
// Il2CppName: ClampVectorValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::MathUtils::ClampVectorValues)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "ClampVectorValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, min, max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::Partition
// Il2CppName: Partition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Bounds> (*)(::UnityEngine::Bounds, int, int, int)>(&GlobalNamespace::MathUtils::Partition)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "Partition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, x, y, z});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::MathUtils::Validate)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::ValidateTo
// Il2CppName: ValidateTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>, ::UnityEngine::Quaternion)>(&GlobalNamespace::MathUtils::ValidateTo)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* validForm = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "ValidateTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, validForm});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::ClampToReal
// Il2CppName: ClampToReal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&GlobalNamespace::MathUtils::ClampToReal)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "ClampToReal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f, min, max, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::ClampApprox
// Il2CppName: ClampApprox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&GlobalNamespace::MathUtils::ClampApprox)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "ClampApprox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f, min, max, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::Approx
// Il2CppName: Approx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float, float)>(&GlobalNamespace::MathUtils::Approx)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* epsilon = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "Approx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, epsilon});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::Linear
// Il2CppName: Linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float, float)>(&GlobalNamespace::MathUtils::Linear)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* newMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* newMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "Linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max, newMin, newMax});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::LinearUnclamped
// Il2CppName: LinearUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float, float)>(&GlobalNamespace::MathUtils::LinearUnclamped)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* newMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* newMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "LinearUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max, newMin, newMax});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::GetCircleValue
// Il2CppName: GetCircleValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::MathUtils::GetCircleValue)> {
  static const MethodInfo* get() {
    static auto* degrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "GetCircleValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{degrees});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::WeightedMaxVector
// Il2CppName: WeightedMaxVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::MathUtils::WeightedMaxVector)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* eps = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "WeightedMaxVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, eps});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MathUtils::MatchMagnitudeInDirection
// Il2CppName: MatchMagnitudeInDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::MathUtils::MatchMagnitudeInDirection)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* eps = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MathUtils*), "MatchMagnitudeInDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, target, eps});
  }
};
