// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Types
namespace Backtrace::Unity::Types {
  // Forward declaring type: MinidumpException
  struct MinidumpException;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Common
namespace Backtrace::Unity::Common {
  // Forward declaring type: MiniDumpExceptionInformation
  struct MiniDumpExceptionInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Common::MiniDumpExceptionInformation, "Backtrace.Unity.Common", "MiniDumpExceptionInformation");
// Type namespace: Backtrace.Unity.Common
namespace Backtrace::Unity::Common {
  // Size: 0xD
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Backtrace.Unity.Common.MiniDumpExceptionInformation
  // [TokenAttribute] Offset: FFFFFFFF
  struct MiniDumpExceptionInformation/*, public ::System::ValueType*/ {
    public:
    public:
    // System.UInt32 ThreadId
    // Size: 0x4
    // Offset: 0x0
    uint ThreadId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.IntPtr ExceptionPointers
    // Size: 0x8
    // Offset: 0x4
    ::System::IntPtr ExceptionPointers;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.Boolean ClientPointers
    // Size: 0x1
    // Offset: 0xC
    bool ClientPointers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: MiniDumpExceptionInformation
    constexpr MiniDumpExceptionInformation(uint ThreadId_ = {}, ::System::IntPtr ExceptionPointers_ = {}, bool ClientPointers_ = {}) noexcept : ThreadId{ThreadId_}, ExceptionPointers{ExceptionPointers_}, ClientPointers{ClientPointers_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.UInt32 ThreadId
    [[deprecated("Use field access instead!")]] uint& dyn_ThreadId();
    // Get instance field reference: System.IntPtr ExceptionPointers
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_ExceptionPointers();
    // Get instance field reference: System.Boolean ClientPointers
    [[deprecated("Use field access instead!")]] bool& dyn_ClientPointers();
    // static Backtrace.Unity.Common.MiniDumpExceptionInformation GetInstance(Backtrace.Unity.Types.MinidumpException exceptionInfo)
    // Offset: 0x2A780F4
    static ::Backtrace::Unity::Common::MiniDumpExceptionInformation GetInstance(::Backtrace::Unity::Types::MinidumpException exceptionInfo);
  }; // Backtrace.Unity.Common.MiniDumpExceptionInformation
  #pragma pack(pop)
  static check_size<sizeof(MiniDumpExceptionInformation), 12 + sizeof(bool)> __Backtrace_Unity_Common_MiniDumpExceptionInformationSizeCheck;
  static_assert(sizeof(MiniDumpExceptionInformation) == 0xD);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Common::MiniDumpExceptionInformation::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Common::MiniDumpExceptionInformation (*)(::Backtrace::Unity::Types::MinidumpException)>(&Backtrace::Unity::Common::MiniDumpExceptionInformation::GetInstance)> {
  static const MethodInfo* get() {
    static auto* exceptionInfo = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Types", "MinidumpException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Common::MiniDumpExceptionInformation), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exceptionInfo});
  }
};
