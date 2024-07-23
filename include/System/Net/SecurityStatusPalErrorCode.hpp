// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: SecurityStatusPalErrorCode
  struct SecurityStatusPalErrorCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SecurityStatusPalErrorCode, "System.Net", "SecurityStatusPalErrorCode");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SecurityStatusPalErrorCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SecurityStatusPalErrorCode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SecurityStatusPalErrorCode
    constexpr SecurityStatusPalErrorCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.SecurityStatusPalErrorCode NotSet
    static constexpr const int NotSet = 0;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode NotSet
    static ::System::Net::SecurityStatusPalErrorCode _get_NotSet();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode NotSet
    static void _set_NotSet(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode OK
    static constexpr const int OK = 1;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode OK
    static ::System::Net::SecurityStatusPalErrorCode _get_OK();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode OK
    static void _set_OK(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode ContinueNeeded
    static constexpr const int ContinueNeeded = 2;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode ContinueNeeded
    static ::System::Net::SecurityStatusPalErrorCode _get_ContinueNeeded();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode ContinueNeeded
    static void _set_ContinueNeeded(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CompleteNeeded
    static constexpr const int CompleteNeeded = 3;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CompleteNeeded
    static ::System::Net::SecurityStatusPalErrorCode _get_CompleteNeeded();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CompleteNeeded
    static void _set_CompleteNeeded(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CompAndContinue
    static constexpr const int CompAndContinue = 4;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CompAndContinue
    static ::System::Net::SecurityStatusPalErrorCode _get_CompAndContinue();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CompAndContinue
    static void _set_CompAndContinue(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode ContextExpired
    static constexpr const int ContextExpired = 5;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode ContextExpired
    static ::System::Net::SecurityStatusPalErrorCode _get_ContextExpired();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode ContextExpired
    static void _set_ContextExpired(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CredentialsNeeded
    static constexpr const int CredentialsNeeded = 6;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CredentialsNeeded
    static ::System::Net::SecurityStatusPalErrorCode _get_CredentialsNeeded();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CredentialsNeeded
    static void _set_CredentialsNeeded(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode Renegotiate
    static constexpr const int Renegotiate = 7;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode Renegotiate
    static ::System::Net::SecurityStatusPalErrorCode _get_Renegotiate();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode Renegotiate
    static void _set_Renegotiate(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode OutOfMemory
    static constexpr const int OutOfMemory = 8;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode OutOfMemory
    static ::System::Net::SecurityStatusPalErrorCode _get_OutOfMemory();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode OutOfMemory
    static void _set_OutOfMemory(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode InvalidHandle
    static constexpr const int InvalidHandle = 9;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode InvalidHandle
    static ::System::Net::SecurityStatusPalErrorCode _get_InvalidHandle();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode InvalidHandle
    static void _set_InvalidHandle(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode Unsupported
    static constexpr const int Unsupported = 10;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode Unsupported
    static ::System::Net::SecurityStatusPalErrorCode _get_Unsupported();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode Unsupported
    static void _set_Unsupported(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode TargetUnknown
    static constexpr const int TargetUnknown = 11;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode TargetUnknown
    static ::System::Net::SecurityStatusPalErrorCode _get_TargetUnknown();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode TargetUnknown
    static void _set_TargetUnknown(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode InternalError
    static constexpr const int InternalError = 12;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode InternalError
    static ::System::Net::SecurityStatusPalErrorCode _get_InternalError();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode InternalError
    static void _set_InternalError(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode PackageNotFound
    static constexpr const int PackageNotFound = 13;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode PackageNotFound
    static ::System::Net::SecurityStatusPalErrorCode _get_PackageNotFound();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode PackageNotFound
    static void _set_PackageNotFound(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode NotOwner
    static constexpr const int NotOwner = 14;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode NotOwner
    static ::System::Net::SecurityStatusPalErrorCode _get_NotOwner();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode NotOwner
    static void _set_NotOwner(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CannotInstall
    static constexpr const int CannotInstall = 15;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CannotInstall
    static ::System::Net::SecurityStatusPalErrorCode _get_CannotInstall();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CannotInstall
    static void _set_CannotInstall(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode InvalidToken
    static constexpr const int InvalidToken = 16;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode InvalidToken
    static ::System::Net::SecurityStatusPalErrorCode _get_InvalidToken();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode InvalidToken
    static void _set_InvalidToken(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CannotPack
    static constexpr const int CannotPack = 17;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CannotPack
    static ::System::Net::SecurityStatusPalErrorCode _get_CannotPack();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CannotPack
    static void _set_CannotPack(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode QopNotSupported
    static constexpr const int QopNotSupported = 18;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode QopNotSupported
    static ::System::Net::SecurityStatusPalErrorCode _get_QopNotSupported();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode QopNotSupported
    static void _set_QopNotSupported(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode NoImpersonation
    static constexpr const int NoImpersonation = 19;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode NoImpersonation
    static ::System::Net::SecurityStatusPalErrorCode _get_NoImpersonation();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode NoImpersonation
    static void _set_NoImpersonation(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode LogonDenied
    static constexpr const int LogonDenied = 20;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode LogonDenied
    static ::System::Net::SecurityStatusPalErrorCode _get_LogonDenied();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode LogonDenied
    static void _set_LogonDenied(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode UnknownCredentials
    static constexpr const int UnknownCredentials = 21;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode UnknownCredentials
    static ::System::Net::SecurityStatusPalErrorCode _get_UnknownCredentials();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode UnknownCredentials
    static void _set_UnknownCredentials(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode NoCredentials
    static constexpr const int NoCredentials = 22;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode NoCredentials
    static ::System::Net::SecurityStatusPalErrorCode _get_NoCredentials();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode NoCredentials
    static void _set_NoCredentials(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode MessageAltered
    static constexpr const int MessageAltered = 23;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode MessageAltered
    static ::System::Net::SecurityStatusPalErrorCode _get_MessageAltered();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode MessageAltered
    static void _set_MessageAltered(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode OutOfSequence
    static constexpr const int OutOfSequence = 24;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode OutOfSequence
    static ::System::Net::SecurityStatusPalErrorCode _get_OutOfSequence();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode OutOfSequence
    static void _set_OutOfSequence(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode NoAuthenticatingAuthority
    static constexpr const int NoAuthenticatingAuthority = 25;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode NoAuthenticatingAuthority
    static ::System::Net::SecurityStatusPalErrorCode _get_NoAuthenticatingAuthority();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode NoAuthenticatingAuthority
    static void _set_NoAuthenticatingAuthority(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode IncompleteMessage
    static constexpr const int IncompleteMessage = 26;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode IncompleteMessage
    static ::System::Net::SecurityStatusPalErrorCode _get_IncompleteMessage();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode IncompleteMessage
    static void _set_IncompleteMessage(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode IncompleteCredentials
    static constexpr const int IncompleteCredentials = 27;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode IncompleteCredentials
    static ::System::Net::SecurityStatusPalErrorCode _get_IncompleteCredentials();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode IncompleteCredentials
    static void _set_IncompleteCredentials(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode BufferNotEnough
    static constexpr const int BufferNotEnough = 28;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode BufferNotEnough
    static ::System::Net::SecurityStatusPalErrorCode _get_BufferNotEnough();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode BufferNotEnough
    static void _set_BufferNotEnough(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode WrongPrincipal
    static constexpr const int WrongPrincipal = 29;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode WrongPrincipal
    static ::System::Net::SecurityStatusPalErrorCode _get_WrongPrincipal();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode WrongPrincipal
    static void _set_WrongPrincipal(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode TimeSkew
    static constexpr const int TimeSkew = 30;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode TimeSkew
    static ::System::Net::SecurityStatusPalErrorCode _get_TimeSkew();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode TimeSkew
    static void _set_TimeSkew(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode UntrustedRoot
    static constexpr const int UntrustedRoot = 31;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode UntrustedRoot
    static ::System::Net::SecurityStatusPalErrorCode _get_UntrustedRoot();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode UntrustedRoot
    static void _set_UntrustedRoot(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode IllegalMessage
    static constexpr const int IllegalMessage = 32;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode IllegalMessage
    static ::System::Net::SecurityStatusPalErrorCode _get_IllegalMessage();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode IllegalMessage
    static void _set_IllegalMessage(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CertUnknown
    static constexpr const int CertUnknown = 33;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CertUnknown
    static ::System::Net::SecurityStatusPalErrorCode _get_CertUnknown();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CertUnknown
    static void _set_CertUnknown(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode CertExpired
    static constexpr const int CertExpired = 34;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode CertExpired
    static ::System::Net::SecurityStatusPalErrorCode _get_CertExpired();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode CertExpired
    static void _set_CertExpired(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode AlgorithmMismatch
    static constexpr const int AlgorithmMismatch = 35;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode AlgorithmMismatch
    static ::System::Net::SecurityStatusPalErrorCode _get_AlgorithmMismatch();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode AlgorithmMismatch
    static void _set_AlgorithmMismatch(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode SecurityQosFailed
    static constexpr const int SecurityQosFailed = 36;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode SecurityQosFailed
    static ::System::Net::SecurityStatusPalErrorCode _get_SecurityQosFailed();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode SecurityQosFailed
    static void _set_SecurityQosFailed(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode SmartcardLogonRequired
    static constexpr const int SmartcardLogonRequired = 37;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode SmartcardLogonRequired
    static ::System::Net::SecurityStatusPalErrorCode _get_SmartcardLogonRequired();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode SmartcardLogonRequired
    static void _set_SmartcardLogonRequired(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode UnsupportedPreauth
    static constexpr const int UnsupportedPreauth = 38;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode UnsupportedPreauth
    static ::System::Net::SecurityStatusPalErrorCode _get_UnsupportedPreauth();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode UnsupportedPreauth
    static void _set_UnsupportedPreauth(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode BadBinding
    static constexpr const int BadBinding = 39;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode BadBinding
    static ::System::Net::SecurityStatusPalErrorCode _get_BadBinding();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode BadBinding
    static void _set_BadBinding(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode DowngradeDetected
    static constexpr const int DowngradeDetected = 40;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode DowngradeDetected
    static ::System::Net::SecurityStatusPalErrorCode _get_DowngradeDetected();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode DowngradeDetected
    static void _set_DowngradeDetected(::System::Net::SecurityStatusPalErrorCode value);
    // static field const value: static public System.Net.SecurityStatusPalErrorCode ApplicationProtocolMismatch
    static constexpr const int ApplicationProtocolMismatch = 41;
    // Get static field: static public System.Net.SecurityStatusPalErrorCode ApplicationProtocolMismatch
    static ::System::Net::SecurityStatusPalErrorCode _get_ApplicationProtocolMismatch();
    // Set static field: static public System.Net.SecurityStatusPalErrorCode ApplicationProtocolMismatch
    static void _set_ApplicationProtocolMismatch(::System::Net::SecurityStatusPalErrorCode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.SecurityStatusPalErrorCode
  #pragma pack(pop)
  static check_size<sizeof(SecurityStatusPalErrorCode), 0 + sizeof(int)> __System_Net_SecurityStatusPalErrorCodeSizeCheck;
  static_assert(sizeof(SecurityStatusPalErrorCode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
