// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: CjLib
namespace CjLib {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: CjLib
namespace CjLib {
  // Forward declaring type: QuaternionUtil
  class QuaternionUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::CjLib::QuaternionUtil);
DEFINE_IL2CPP_ARG_TYPE(::CjLib::QuaternionUtil*, "CjLib", "QuaternionUtil");
// Type namespace: CjLib
namespace CjLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CjLib.QuaternionUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class QuaternionUtil : public ::Il2CppObject {
    public:
    // Nested type: ::CjLib::QuaternionUtil::SterpMode
    struct SterpMode;
    // static public System.Single Magnitude(UnityEngine.Quaternion q)
    // Offset: 0x28E5B70
    static float Magnitude(::UnityEngine::Quaternion q);
    // static public System.Single MagnitudeSqr(UnityEngine.Quaternion q)
    // Offset: 0x28E5B94
    static float MagnitudeSqr(::UnityEngine::Quaternion q);
    // static public UnityEngine.Quaternion Normalize(UnityEngine.Quaternion q)
    // Offset: 0x28E5BB4
    static ::UnityEngine::Quaternion Normalize(::UnityEngine::Quaternion q);
    // static public UnityEngine.Quaternion AngularVector(UnityEngine.Vector3 v)
    // Offset: 0x28E5BF0
    static ::UnityEngine::Quaternion AngularVector(::UnityEngine::Vector3 v);
    // static public UnityEngine.Quaternion AxisAngle(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x28E5D28
    static ::UnityEngine::Quaternion AxisAngle(::UnityEngine::Vector3 axis, float angle);
    // static public UnityEngine.Vector3 GetAxis(UnityEngine.Quaternion q)
    // Offset: 0x28E5D7C
    static ::UnityEngine::Vector3 GetAxis(::UnityEngine::Quaternion q);
    // static public System.Single GetAngle(UnityEngine.Quaternion q)
    // Offset: 0x28E5E88
    static float GetAngle(::UnityEngine::Quaternion q);
    // static public UnityEngine.Quaternion Pow(UnityEngine.Quaternion q, System.Single exp)
    // Offset: 0x28E5EB0
    static ::UnityEngine::Quaternion Pow(::UnityEngine::Quaternion q, float exp);
    // static public UnityEngine.Quaternion Integrate(UnityEngine.Quaternion q, UnityEngine.Quaternion v, System.Single dt)
    // Offset: 0x28E5F38
    static ::UnityEngine::Quaternion Integrate(::UnityEngine::Quaternion q, ::UnityEngine::Quaternion v, float dt);
    // static public UnityEngine.Quaternion Integrate(UnityEngine.Quaternion q, UnityEngine.Vector3 omega, System.Single dt)
    // Offset: 0x28E5FF0
    static ::UnityEngine::Quaternion Integrate(::UnityEngine::Quaternion q, ::UnityEngine::Vector3 omega, float dt);
    // static public UnityEngine.Vector4 ToVector4(UnityEngine.Quaternion q)
    // Offset: 0x28E53EC
    static ::UnityEngine::Vector4 ToVector4(::UnityEngine::Quaternion q);
    // static public UnityEngine.Quaternion FromVector4(UnityEngine.Vector4 v, System.Boolean normalize)
    // Offset: 0x28E52D4
    static ::UnityEngine::Quaternion FromVector4(::UnityEngine::Vector4 v, bool normalize);
    // static public System.Void DecomposeSwingTwist(UnityEngine.Quaternion q, UnityEngine.Vector3 twistAxis, out UnityEngine.Quaternion swing, out UnityEngine.Quaternion twist)
    // Offset: 0x28E60A0
    static void DecomposeSwingTwist(::UnityEngine::Quaternion q, ::UnityEngine::Vector3 twistAxis, ByRef<::UnityEngine::Quaternion> swing, ByRef<::UnityEngine::Quaternion> twist);
    // static public UnityEngine.Quaternion Sterp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, UnityEngine.Vector3 twistAxis, System.Single t, CjLib.QuaternionUtil/SterpMode mode)
    // Offset: 0x28E64C0
    static ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::UnityEngine::Vector3 twistAxis, float t, ::CjLib::QuaternionUtil::SterpMode mode);
    // static public UnityEngine.Quaternion Sterp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, UnityEngine.Vector3 twistAxis, System.Single t, out UnityEngine.Quaternion swing, out UnityEngine.Quaternion twist, CjLib.QuaternionUtil/SterpMode mode)
    // Offset: 0x28E6508
    static ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::UnityEngine::Vector3 twistAxis, float t, ByRef<::UnityEngine::Quaternion> swing, ByRef<::UnityEngine::Quaternion> twist, ::CjLib::QuaternionUtil::SterpMode mode);
    // static public UnityEngine.Quaternion Sterp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, UnityEngine.Vector3 twistAxis, System.Single tSwing, System.Single tTwist, CjLib.QuaternionUtil/SterpMode mode)
    // Offset: 0x28E67B8
    static ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::UnityEngine::Vector3 twistAxis, float tSwing, float tTwist, ::CjLib::QuaternionUtil::SterpMode mode);
    // static public UnityEngine.Quaternion Sterp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, UnityEngine.Vector3 twistAxis, System.Single tSwing, System.Single tTwist, out UnityEngine.Quaternion swing, out UnityEngine.Quaternion twist, CjLib.QuaternionUtil/SterpMode mode)
    // Offset: 0x28E653C
    static ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::UnityEngine::Vector3 twistAxis, float tSwing, float tTwist, ByRef<::UnityEngine::Quaternion> swing, ByRef<::UnityEngine::Quaternion> twist, ::CjLib::QuaternionUtil::SterpMode mode);
    // public System.Void .ctor()
    // Offset: 0x28E6804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuaternionUtil* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::CjLib::QuaternionUtil::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuaternionUtil*, creationType>()));
    }
  }; // CjLib.QuaternionUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Magnitude
// Il2CppName: Magnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Quaternion)>(&CjLib::QuaternionUtil::Magnitude)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Magnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::MagnitudeSqr
// Il2CppName: MagnitudeSqr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Quaternion)>(&CjLib::QuaternionUtil::MagnitudeSqr)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "MagnitudeSqr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&CjLib::QuaternionUtil::Normalize)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::AngularVector
// Il2CppName: AngularVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&CjLib::QuaternionUtil::AngularVector)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "AngularVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::AxisAngle
// Il2CppName: AxisAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, float)>(&CjLib::QuaternionUtil::AxisAngle)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "AxisAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, angle});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::GetAxis
// Il2CppName: GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion)>(&CjLib::QuaternionUtil::GetAxis)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::GetAngle
// Il2CppName: GetAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Quaternion)>(&CjLib::QuaternionUtil::GetAngle)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "GetAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Pow
// Il2CppName: Pow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float)>(&CjLib::QuaternionUtil::Pow)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* exp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Pow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, exp});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Integrate
// Il2CppName: Integrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&CjLib::QuaternionUtil::Integrate)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Integrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, v, dt});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Integrate
// Il2CppName: Integrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, float)>(&CjLib::QuaternionUtil::Integrate)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* omega = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Integrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, omega, dt});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::ToVector4
// Il2CppName: ToVector4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Quaternion)>(&CjLib::QuaternionUtil::ToVector4)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "ToVector4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::FromVector4
// Il2CppName: FromVector4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector4, bool)>(&CjLib::QuaternionUtil::FromVector4)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* normalize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "FromVector4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, normalize});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::DecomposeSwingTwist
// Il2CppName: DecomposeSwingTwist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&CjLib::QuaternionUtil::DecomposeSwingTwist)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* twistAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* swing = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* twist = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "DecomposeSwingTwist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, twistAxis, swing, twist});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Sterp
// Il2CppName: Sterp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float, ::CjLib::QuaternionUtil::SterpMode)>(&CjLib::QuaternionUtil::Sterp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* twistAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("CjLib", "QuaternionUtil/SterpMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Sterp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, twistAxis, t, mode});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Sterp
// Il2CppName: Sterp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ::CjLib::QuaternionUtil::SterpMode)>(&CjLib::QuaternionUtil::Sterp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* twistAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* swing = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* twist = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("CjLib", "QuaternionUtil/SterpMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Sterp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, twistAxis, t, swing, twist, mode});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Sterp
// Il2CppName: Sterp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float, float, ::CjLib::QuaternionUtil::SterpMode)>(&CjLib::QuaternionUtil::Sterp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* twistAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tSwing = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tTwist = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("CjLib", "QuaternionUtil/SterpMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Sterp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, twistAxis, tSwing, tTwist, mode});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::Sterp
// Il2CppName: Sterp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float, float, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ::CjLib::QuaternionUtil::SterpMode)>(&CjLib::QuaternionUtil::Sterp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* twistAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tSwing = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tTwist = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* swing = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* twist = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("CjLib", "QuaternionUtil/SterpMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::QuaternionUtil*), "Sterp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, twistAxis, tSwing, tTwist, swing, twist, mode});
  }
};
// Writing MetadataGetter for method: CjLib::QuaternionUtil::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
