// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.SimulationInput
#include "Fusion/SimulationInput.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkProjectConfig
  class NetworkProjectConfig;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::SimulationInput::Buffer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationInput::Buffer*, "Fusion", "SimulationInput/Buffer");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.SimulationInput/Buffer
  // [TokenAttribute] Offset: FFFFFFFF
  class SimulationInput::Buffer : public ::Il2CppObject {
    public:
    public:
    // private Fusion.NetworkProjectConfig _cfg
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::NetworkProjectConfig* cfg;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkProjectConfig*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Fusion.Tick,Fusion.SimulationInput> _map
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationInput*>* map;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationInput*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Fusion.Tick,System.Double> _time
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::Fusion::Tick, double>* time;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Fusion::Tick, double>*) == 0x8);
    public:
    // Get instance field reference: private Fusion.NetworkProjectConfig _cfg
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkProjectConfig*& dyn__cfg();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Fusion.Tick,Fusion.SimulationInput> _map
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationInput*>*& dyn__map();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Fusion.Tick,System.Double> _time
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Fusion::Tick, double>*& dyn__time();
    // public System.Int32 get_Count()
    // Offset: 0x2B83824
    int get_Count();
    // public System.Boolean get_Full()
    // Offset: 0x2B83874
    bool get_Full();
    // public System.Void .ctor(Fusion.NetworkProjectConfig cfg)
    // Offset: 0x2B82BE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimulationInput::Buffer* New_ctor(::Fusion::NetworkProjectConfig* cfg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SimulationInput::Buffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimulationInput::Buffer*, creationType>(cfg)));
    }
    // public System.Void Clear()
    // Offset: 0x2B82F6C
    void Clear();
    // public System.Int32 CopySortedTo(Fusion.SimulationInput[] array)
    // Offset: 0x2B838E4
    int CopySortedTo(::ArrayW<::Fusion::SimulationInput*> array);
    // public System.Boolean Contains(Fusion.Tick tick)
    // Offset: 0x2B839F4
    bool Contains(::Fusion::Tick tick);
    // public System.Boolean Remove(Fusion.Tick tick, out Fusion.SimulationInput removed)
    // Offset: 0x2B83A4C
    bool Remove(::Fusion::Tick tick, ByRef<::Fusion::SimulationInput*> removed);
    // public System.Nullable`1<System.Double> GetInsertTime(Fusion.Tick tick)
    // Offset: 0x2B83B08
    ::System::Nullable_1<double> GetInsertTime(::Fusion::Tick tick);
    // public Fusion.SimulationInput Get(Fusion.Tick tick)
    // Offset: 0x2B83BAC
    ::Fusion::SimulationInput* Get(::Fusion::Tick tick);
    // public System.Boolean Add(Fusion.SimulationInput input, System.Nullable`1<System.Double> insertTime)
    // Offset: 0x2B83C24
    bool Add(::Fusion::SimulationInput* input, ::System::Nullable_1<double> insertTime);
  }; // Fusion.SimulationInput/Buffer
  #pragma pack(pop)
  static check_size<sizeof(SimulationInput::Buffer), 32 + sizeof(::System::Collections::Generic::Dictionary_2<::Fusion::Tick, double>*)> __Fusion_SimulationInput_BufferSizeCheck;
  static_assert(sizeof(SimulationInput::Buffer) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::SimulationInput::Buffer::*)()>(&Fusion::SimulationInput::Buffer::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::get_Full
// Il2CppName: get_Full
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationInput::Buffer::*)()>(&Fusion::SimulationInput::Buffer::get_Full)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "get_Full", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationInput::Buffer::*)()>(&Fusion::SimulationInput::Buffer::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::CopySortedTo
// Il2CppName: CopySortedTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::SimulationInput::Buffer::*)(::ArrayW<::Fusion::SimulationInput*>)>(&Fusion::SimulationInput::Buffer::CopySortedTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Fusion", "SimulationInput"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "CopySortedTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationInput::Buffer::*)(::Fusion::Tick)>(&Fusion::SimulationInput::Buffer::Contains)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationInput::Buffer::*)(::Fusion::Tick, ByRef<::Fusion::SimulationInput*>)>(&Fusion::SimulationInput::Buffer::Remove)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    static auto* removed = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationInput")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, removed});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::GetInsertTime
// Il2CppName: GetInsertTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double> (Fusion::SimulationInput::Buffer::*)(::Fusion::Tick)>(&Fusion::SimulationInput::Buffer::GetInsertTime)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "GetInsertTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationInput* (Fusion::SimulationInput::Buffer::*)(::Fusion::Tick)>(&Fusion::SimulationInput::Buffer::Get)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationInput::Buffer::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationInput::Buffer::*)(::Fusion::SimulationInput*, ::System::Nullable_1<double>)>(&Fusion::SimulationInput::Buffer::Add)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationInput")->byval_arg;
    static auto* insertTime = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Double")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationInput::Buffer*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, insertTime});
  }
};
