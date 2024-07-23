// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IWorkItemContext
  class IWorkItemContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: AstarWorkItem
  struct AstarWorkItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarWorkItem, "Pathfinding", "AstarWorkItem");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.AstarWorkItem
  // [TokenAttribute] Offset: FFFFFFFF
  struct AstarWorkItem/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Action init
    // Size: 0x8
    // Offset: 0x0
    ::System::Action* init;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<Pathfinding.IWorkItemContext> initWithContext
    // Size: 0x8
    // Offset: 0x8
    ::System::Action_1<::Pathfinding::IWorkItemContext*>* initWithContext;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Pathfinding::IWorkItemContext*>*) == 0x8);
    // public System.Func`2<System.Boolean,System.Boolean> update
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_2<bool, bool>* update;
    // Field size check
    static_assert(sizeof(::System::Func_2<bool, bool>*) == 0x8);
    // public System.Func`3<Pathfinding.IWorkItemContext,System.Boolean,System.Boolean> updateWithContext
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>* updateWithContext;
    // Field size check
    static_assert(sizeof(::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>*) == 0x8);
    public:
    // Creating value type constructor for type: AstarWorkItem
    constexpr AstarWorkItem(::System::Action* init_ = {}, ::System::Action_1<::Pathfinding::IWorkItemContext*>* initWithContext_ = {}, ::System::Func_2<bool, bool>* update_ = {}, ::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>* updateWithContext_ = {}) noexcept : init{init_}, initWithContext{initWithContext_}, update{update_}, updateWithContext{updateWithContext_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Action init
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_init();
    // Get instance field reference: public System.Action`1<Pathfinding.IWorkItemContext> initWithContext
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Pathfinding::IWorkItemContext*>*& dyn_initWithContext();
    // Get instance field reference: public System.Func`2<System.Boolean,System.Boolean> update
    [[deprecated("Use field access instead!")]] ::System::Func_2<bool, bool>*& dyn_update();
    // Get instance field reference: public System.Func`3<Pathfinding.IWorkItemContext,System.Boolean,System.Boolean> updateWithContext
    [[deprecated("Use field access instead!")]] ::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>*& dyn_updateWithContext();
    // public System.Void .ctor(System.Func`2<System.Boolean,System.Boolean> update)
    // Offset: 0x29AF078
    AstarWorkItem(::System::Func_2<bool, bool>* update);
    // public System.Void .ctor(System.Func`3<Pathfinding.IWorkItemContext,System.Boolean,System.Boolean> update)
    // Offset: 0x29B81B8
    AstarWorkItem(::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>* update);
    // public System.Void .ctor(System.Action init, System.Func`2<System.Boolean,System.Boolean> update)
    // Offset: 0x29A92FC
    AstarWorkItem(::System::Action* init, ::System::Func_2<bool, bool>* update);
    // public System.Void .ctor(System.Action`1<Pathfinding.IWorkItemContext> init, System.Func`3<Pathfinding.IWorkItemContext,System.Boolean,System.Boolean> update)
    // Offset: 0x29B820C
    AstarWorkItem(::System::Action_1<::Pathfinding::IWorkItemContext*>* init, ::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>* update);
  }; // Pathfinding.AstarWorkItem
  #pragma pack(pop)
  static check_size<sizeof(AstarWorkItem), 24 + sizeof(::System::Func_3<::Pathfinding::IWorkItemContext*, bool, bool>*)> __Pathfinding_AstarWorkItemSizeCheck;
  static_assert(sizeof(AstarWorkItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AstarWorkItem::AstarWorkItem
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::AstarWorkItem::AstarWorkItem
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::AstarWorkItem::AstarWorkItem
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::AstarWorkItem::AstarWorkItem
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
