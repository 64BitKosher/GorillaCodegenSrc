// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.FrameTiming
#include "UnityEngine/FrameTiming.hpp"
// Including type: UnityEngine.Rendering.FrameTimeSample
#include "UnityEngine/Rendering/FrameTimeSample.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: FrameTimeSampleHistory
  class FrameTimeSampleHistory;
  // Forward declaring type: BottleneckHistory
  class BottleneckHistory;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DebugFrameTiming
  class DebugFrameTiming;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugFrameTiming);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugFrameTiming*, "UnityEngine.Rendering", "DebugFrameTiming");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugFrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugFrameTiming : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.FrameTimeSampleHistory m_FrameHistory
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::FrameTimeSampleHistory* m_FrameHistory;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FrameTimeSampleHistory*) == 0x8);
    // UnityEngine.Rendering.BottleneckHistory m_BottleneckHistory
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::BottleneckHistory* m_BottleneckHistory;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BottleneckHistory*) == 0x8);
    // private System.Int32 <bottleneckHistorySize>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int bottleneckHistorySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <sampleHistorySize>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int sampleHistorySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.FrameTiming[] m_Timing
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::FrameTiming> m_Timing;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::FrameTiming>) == 0x8);
    // private UnityEngine.Rendering.FrameTimeSample m_Sample
    // Size: 0x18
    // Offset: 0x30
    ::UnityEngine::Rendering::FrameTimeSample m_Sample;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FrameTimeSample) == 0x18);
    public:
    // static field const value: static private System.String k_FpsFormatString
    static constexpr const char* k_FpsFormatString = "{0:F1}";
    // Get static field: static private System.String k_FpsFormatString
    static ::StringW _get_k_FpsFormatString();
    // Set static field: static private System.String k_FpsFormatString
    static void _set_k_FpsFormatString(::StringW value);
    // static field const value: static private System.String k_MsFormatString
    static constexpr const char* k_MsFormatString = "{0:F2}ms";
    // Get static field: static private System.String k_MsFormatString
    static ::StringW _get_k_MsFormatString();
    // Set static field: static private System.String k_MsFormatString
    static void _set_k_MsFormatString(::StringW value);
    // static field const value: static private System.Single k_RefreshRate
    static constexpr const float k_RefreshRate = 0.2;
    // Get static field: static private System.Single k_RefreshRate
    static float _get_k_RefreshRate();
    // Set static field: static private System.Single k_RefreshRate
    static void _set_k_RefreshRate(float value);
    // Get instance field reference: UnityEngine.Rendering.FrameTimeSampleHistory m_FrameHistory
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FrameTimeSampleHistory*& dyn_m_FrameHistory();
    // Get instance field reference: UnityEngine.Rendering.BottleneckHistory m_BottleneckHistory
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BottleneckHistory*& dyn_m_BottleneckHistory();
    // Get instance field reference: private System.Int32 <bottleneckHistorySize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$bottleneckHistorySize$k__BackingField();
    // Get instance field reference: private System.Int32 <sampleHistorySize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$sampleHistorySize$k__BackingField();
    // Get instance field reference: private UnityEngine.FrameTiming[] m_Timing
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::FrameTiming>& dyn_m_Timing();
    // Get instance field reference: private UnityEngine.Rendering.FrameTimeSample m_Sample
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FrameTimeSample& dyn_m_Sample();
    // public System.Int32 get_bottleneckHistorySize()
    // Offset: 0x5243CEC
    int get_bottleneckHistorySize();
    // public System.Int32 get_sampleHistorySize()
    // Offset: 0x5243CF4
    int get_sampleHistorySize();
    // public System.Void .ctor()
    // Offset: 0x5243CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugFrameTiming* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugFrameTiming::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugFrameTiming*, creationType>()));
    }
    // public System.Void UpdateFrameTiming()
    // Offset: 0x5243F64
    void UpdateFrameTiming();
    // public System.Void RegisterDebugUI(System.Collections.Generic.List`1<UnityEngine.Rendering.DebugUI/Widget> list)
    // Offset: 0x52447C4
    void RegisterDebugUI(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI::Widget*>* list);
    // private System.Object <RegisterDebugUI>b__17_0()
    // Offset: 0x5245C90
    ::Il2CppObject* $RegisterDebugUI$b__17_0();
    // private System.Object <RegisterDebugUI>b__17_1()
    // Offset: 0x5245CF0
    ::Il2CppObject* $RegisterDebugUI$b__17_1();
    // private System.Object <RegisterDebugUI>b__17_2()
    // Offset: 0x5245D50
    ::Il2CppObject* $RegisterDebugUI$b__17_2();
    // private System.Object <RegisterDebugUI>b__17_3()
    // Offset: 0x5245DB0
    ::Il2CppObject* $RegisterDebugUI$b__17_3();
    // private System.Object <RegisterDebugUI>b__17_4()
    // Offset: 0x5245E10
    ::Il2CppObject* $RegisterDebugUI$b__17_4();
    // private System.Object <RegisterDebugUI>b__17_5()
    // Offset: 0x5245E70
    ::Il2CppObject* $RegisterDebugUI$b__17_5();
    // private System.Object <RegisterDebugUI>b__17_6()
    // Offset: 0x5245ED0
    ::Il2CppObject* $RegisterDebugUI$b__17_6();
    // private System.Object <RegisterDebugUI>b__17_7()
    // Offset: 0x5245F30
    ::Il2CppObject* $RegisterDebugUI$b__17_7();
    // private System.Object <RegisterDebugUI>b__17_8()
    // Offset: 0x5245F90
    ::Il2CppObject* $RegisterDebugUI$b__17_8();
    // private System.Object <RegisterDebugUI>b__17_9()
    // Offset: 0x5245FF0
    ::Il2CppObject* $RegisterDebugUI$b__17_9();
    // private System.Object <RegisterDebugUI>b__17_10()
    // Offset: 0x5246050
    ::Il2CppObject* $RegisterDebugUI$b__17_10();
    // private System.Object <RegisterDebugUI>b__17_11()
    // Offset: 0x52460B0
    ::Il2CppObject* $RegisterDebugUI$b__17_11();
    // private System.Object <RegisterDebugUI>b__17_12()
    // Offset: 0x5246110
    ::Il2CppObject* $RegisterDebugUI$b__17_12();
    // private System.Object <RegisterDebugUI>b__17_13()
    // Offset: 0x5246170
    ::Il2CppObject* $RegisterDebugUI$b__17_13();
    // private System.Object <RegisterDebugUI>b__17_14()
    // Offset: 0x52461D0
    ::Il2CppObject* $RegisterDebugUI$b__17_14();
    // private System.Object <RegisterDebugUI>b__17_15()
    // Offset: 0x5246230
    ::Il2CppObject* $RegisterDebugUI$b__17_15();
    // private System.Object <RegisterDebugUI>b__17_16()
    // Offset: 0x5246290
    ::Il2CppObject* $RegisterDebugUI$b__17_16();
    // private System.Object <RegisterDebugUI>b__17_17()
    // Offset: 0x52462F0
    ::Il2CppObject* $RegisterDebugUI$b__17_17();
    // private System.Object <RegisterDebugUI>b__17_18()
    // Offset: 0x5246350
    ::Il2CppObject* $RegisterDebugUI$b__17_18();
    // private System.Object <RegisterDebugUI>b__17_19()
    // Offset: 0x52463B0
    ::Il2CppObject* $RegisterDebugUI$b__17_19();
    // private System.Object <RegisterDebugUI>b__17_20()
    // Offset: 0x5246410
    ::Il2CppObject* $RegisterDebugUI$b__17_20();
    // private System.Object <RegisterDebugUI>b__17_21()
    // Offset: 0x5246470
    ::Il2CppObject* $RegisterDebugUI$b__17_21();
  }; // UnityEngine.Rendering.DebugFrameTiming
  #pragma pack(pop)
  static check_size<sizeof(DebugFrameTiming), 48 + sizeof(::UnityEngine::Rendering::FrameTimeSample)> __UnityEngine_Rendering_DebugFrameTimingSizeCheck;
  static_assert(sizeof(DebugFrameTiming) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::get_bottleneckHistorySize
// Il2CppName: get_bottleneckHistorySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::get_bottleneckHistorySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "get_bottleneckHistorySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::get_sampleHistorySize
// Il2CppName: get_sampleHistorySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::get_sampleHistorySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "get_sampleHistorySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::UpdateFrameTiming
// Il2CppName: UpdateFrameTiming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::UpdateFrameTiming)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "UpdateFrameTiming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::RegisterDebugUI
// Il2CppName: RegisterDebugUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugFrameTiming::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI::Widget*>*)>(&UnityEngine::Rendering::DebugFrameTiming::RegisterDebugUI)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugUI/Widget")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "RegisterDebugUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_0
// Il2CppName: <RegisterDebugUI>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_1
// Il2CppName: <RegisterDebugUI>b__17_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_2
// Il2CppName: <RegisterDebugUI>b__17_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_3
// Il2CppName: <RegisterDebugUI>b__17_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_4
// Il2CppName: <RegisterDebugUI>b__17_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_5
// Il2CppName: <RegisterDebugUI>b__17_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_6
// Il2CppName: <RegisterDebugUI>b__17_6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_7
// Il2CppName: <RegisterDebugUI>b__17_7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_7)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_8
// Il2CppName: <RegisterDebugUI>b__17_8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_8)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_9
// Il2CppName: <RegisterDebugUI>b__17_9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_9)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_10
// Il2CppName: <RegisterDebugUI>b__17_10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_10)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_11
// Il2CppName: <RegisterDebugUI>b__17_11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_11)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_12
// Il2CppName: <RegisterDebugUI>b__17_12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_12)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_13
// Il2CppName: <RegisterDebugUI>b__17_13
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_13)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_13", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_14
// Il2CppName: <RegisterDebugUI>b__17_14
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_14)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_14", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_15
// Il2CppName: <RegisterDebugUI>b__17_15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_15)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_16
// Il2CppName: <RegisterDebugUI>b__17_16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_16)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_17
// Il2CppName: <RegisterDebugUI>b__17_17
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_17)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_17", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_18
// Il2CppName: <RegisterDebugUI>b__17_18
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_18)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_18", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_19
// Il2CppName: <RegisterDebugUI>b__17_19
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_19)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_19", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_20
// Il2CppName: <RegisterDebugUI>b__17_20
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_20)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_20", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_21
// Il2CppName: <RegisterDebugUI>b__17_21
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::DebugFrameTiming::*)()>(&UnityEngine::Rendering::DebugFrameTiming::$RegisterDebugUI$b__17_21)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugFrameTiming*), "<RegisterDebugUI>b__17_21", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
