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
// Type namespace: System
namespace System {
  // Forward declaring type: ExceptionArgument
  struct ExceptionArgument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ExceptionArgument, "System", "ExceptionArgument");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ExceptionArgument
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExceptionArgument/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ExceptionArgument
    constexpr ExceptionArgument(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ExceptionArgument obj
    static constexpr const int obj = 0;
    // Get static field: static public System.ExceptionArgument obj
    static ::System::ExceptionArgument _get_obj();
    // Set static field: static public System.ExceptionArgument obj
    static void _set_obj(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument dictionary
    static constexpr const int dictionary = 1;
    // Get static field: static public System.ExceptionArgument dictionary
    static ::System::ExceptionArgument _get_dictionary();
    // Set static field: static public System.ExceptionArgument dictionary
    static void _set_dictionary(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument dictionaryCreationThreshold
    static constexpr const int dictionaryCreationThreshold = 2;
    // Get static field: static public System.ExceptionArgument dictionaryCreationThreshold
    static ::System::ExceptionArgument _get_dictionaryCreationThreshold();
    // Set static field: static public System.ExceptionArgument dictionaryCreationThreshold
    static void _set_dictionaryCreationThreshold(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument array
    static constexpr const int array = 3;
    // Get static field: static public System.ExceptionArgument array
    static ::System::ExceptionArgument _get_array();
    // Set static field: static public System.ExceptionArgument array
    static void _set_array(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument info
    static constexpr const int info = 4;
    // Get static field: static public System.ExceptionArgument info
    static ::System::ExceptionArgument _get_info();
    // Set static field: static public System.ExceptionArgument info
    static void _set_info(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument key
    static constexpr const int key = 5;
    // Get static field: static public System.ExceptionArgument key
    static ::System::ExceptionArgument _get_key();
    // Set static field: static public System.ExceptionArgument key
    static void _set_key(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument collection
    static constexpr const int collection = 6;
    // Get static field: static public System.ExceptionArgument collection
    static ::System::ExceptionArgument _get_collection();
    // Set static field: static public System.ExceptionArgument collection
    static void _set_collection(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument list
    static constexpr const int list = 7;
    // Get static field: static public System.ExceptionArgument list
    static ::System::ExceptionArgument _get_list();
    // Set static field: static public System.ExceptionArgument list
    static void _set_list(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument match
    static constexpr const int match = 8;
    // Get static field: static public System.ExceptionArgument match
    static ::System::ExceptionArgument _get_match();
    // Set static field: static public System.ExceptionArgument match
    static void _set_match(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument converter
    static constexpr const int converter = 9;
    // Get static field: static public System.ExceptionArgument converter
    static ::System::ExceptionArgument _get_converter();
    // Set static field: static public System.ExceptionArgument converter
    static void _set_converter(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument queue
    static constexpr const int queue = 10;
    // Get static field: static public System.ExceptionArgument queue
    static ::System::ExceptionArgument _get_queue();
    // Set static field: static public System.ExceptionArgument queue
    static void _set_queue(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument stack
    static constexpr const int stack = 11;
    // Get static field: static public System.ExceptionArgument stack
    static ::System::ExceptionArgument _get_stack();
    // Set static field: static public System.ExceptionArgument stack
    static void _set_stack(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument capacity
    static constexpr const int capacity = 12;
    // Get static field: static public System.ExceptionArgument capacity
    static ::System::ExceptionArgument _get_capacity();
    // Set static field: static public System.ExceptionArgument capacity
    static void _set_capacity(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument index
    static constexpr const int index = 13;
    // Get static field: static public System.ExceptionArgument index
    static ::System::ExceptionArgument _get_index();
    // Set static field: static public System.ExceptionArgument index
    static void _set_index(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument startIndex
    static constexpr const int startIndex = 14;
    // Get static field: static public System.ExceptionArgument startIndex
    static ::System::ExceptionArgument _get_startIndex();
    // Set static field: static public System.ExceptionArgument startIndex
    static void _set_startIndex(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument value
    static constexpr const int Value = 15;
    // Get static field: static public System.ExceptionArgument value
    static ::System::ExceptionArgument _get_value();
    // Set static field: static public System.ExceptionArgument value
    static void _set_value(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument count
    static constexpr const int count = 16;
    // Get static field: static public System.ExceptionArgument count
    static ::System::ExceptionArgument _get_count();
    // Set static field: static public System.ExceptionArgument count
    static void _set_count(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument arrayIndex
    static constexpr const int arrayIndex = 17;
    // Get static field: static public System.ExceptionArgument arrayIndex
    static ::System::ExceptionArgument _get_arrayIndex();
    // Set static field: static public System.ExceptionArgument arrayIndex
    static void _set_arrayIndex(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument name
    static constexpr const int name = 18;
    // Get static field: static public System.ExceptionArgument name
    static ::System::ExceptionArgument _get_name();
    // Set static field: static public System.ExceptionArgument name
    static void _set_name(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument mode
    static constexpr const int mode = 19;
    // Get static field: static public System.ExceptionArgument mode
    static ::System::ExceptionArgument _get_mode();
    // Set static field: static public System.ExceptionArgument mode
    static void _set_mode(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument item
    static constexpr const int item = 20;
    // Get static field: static public System.ExceptionArgument item
    static ::System::ExceptionArgument _get_item();
    // Set static field: static public System.ExceptionArgument item
    static void _set_item(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument options
    static constexpr const int options = 21;
    // Get static field: static public System.ExceptionArgument options
    static ::System::ExceptionArgument _get_options();
    // Set static field: static public System.ExceptionArgument options
    static void _set_options(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument view
    static constexpr const int view = 22;
    // Get static field: static public System.ExceptionArgument view
    static ::System::ExceptionArgument _get_view();
    // Set static field: static public System.ExceptionArgument view
    static void _set_view(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument sourceBytesToCopy
    static constexpr const int sourceBytesToCopy = 23;
    // Get static field: static public System.ExceptionArgument sourceBytesToCopy
    static ::System::ExceptionArgument _get_sourceBytesToCopy();
    // Set static field: static public System.ExceptionArgument sourceBytesToCopy
    static void _set_sourceBytesToCopy(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument start
    static constexpr const int start = 24;
    // Get static field: static public System.ExceptionArgument start
    static ::System::ExceptionArgument _get_start();
    // Set static field: static public System.ExceptionArgument start
    static void _set_start(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument pointer
    static constexpr const int pointer = 25;
    // Get static field: static public System.ExceptionArgument pointer
    static ::System::ExceptionArgument _get_pointer();
    // Set static field: static public System.ExceptionArgument pointer
    static void _set_pointer(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument ownedMemory
    static constexpr const int ownedMemory = 26;
    // Get static field: static public System.ExceptionArgument ownedMemory
    static ::System::ExceptionArgument _get_ownedMemory();
    // Set static field: static public System.ExceptionArgument ownedMemory
    static void _set_ownedMemory(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument text
    static constexpr const int text = 27;
    // Get static field: static public System.ExceptionArgument text
    static ::System::ExceptionArgument _get_text();
    // Set static field: static public System.ExceptionArgument text
    static void _set_text(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument length
    static constexpr const int length = 28;
    // Get static field: static public System.ExceptionArgument length
    static ::System::ExceptionArgument _get_length();
    // Set static field: static public System.ExceptionArgument length
    static void _set_length(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument comparer
    static constexpr const int comparer = 29;
    // Get static field: static public System.ExceptionArgument comparer
    static ::System::ExceptionArgument _get_comparer();
    // Set static field: static public System.ExceptionArgument comparer
    static void _set_comparer(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument comparable
    static constexpr const int comparable = 30;
    // Get static field: static public System.ExceptionArgument comparable
    static ::System::ExceptionArgument _get_comparable();
    // Set static field: static public System.ExceptionArgument comparable
    static void _set_comparable(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument exceptions
    static constexpr const int exceptions = 31;
    // Get static field: static public System.ExceptionArgument exceptions
    static ::System::ExceptionArgument _get_exceptions();
    // Set static field: static public System.ExceptionArgument exceptions
    static void _set_exceptions(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument exception
    static constexpr const int exception = 32;
    // Get static field: static public System.ExceptionArgument exception
    static ::System::ExceptionArgument _get_exception();
    // Set static field: static public System.ExceptionArgument exception
    static void _set_exception(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument action
    static constexpr const int action = 33;
    // Get static field: static public System.ExceptionArgument action
    static ::System::ExceptionArgument _get_action();
    // Set static field: static public System.ExceptionArgument action
    static void _set_action(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument comparison
    static constexpr const int comparison = 34;
    // Get static field: static public System.ExceptionArgument comparison
    static ::System::ExceptionArgument _get_comparison();
    // Set static field: static public System.ExceptionArgument comparison
    static void _set_comparison(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument startSegment
    static constexpr const int startSegment = 35;
    // Get static field: static public System.ExceptionArgument startSegment
    static ::System::ExceptionArgument _get_startSegment();
    // Set static field: static public System.ExceptionArgument startSegment
    static void _set_startSegment(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument endSegment
    static constexpr const int endSegment = 36;
    // Get static field: static public System.ExceptionArgument endSegment
    static ::System::ExceptionArgument _get_endSegment();
    // Set static field: static public System.ExceptionArgument endSegment
    static void _set_endSegment(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument endIndex
    static constexpr const int endIndex = 37;
    // Get static field: static public System.ExceptionArgument endIndex
    static ::System::ExceptionArgument _get_endIndex();
    // Set static field: static public System.ExceptionArgument endIndex
    static void _set_endIndex(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument task
    static constexpr const int task = 38;
    // Get static field: static public System.ExceptionArgument task
    static ::System::ExceptionArgument _get_task();
    // Set static field: static public System.ExceptionArgument task
    static void _set_task(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument source
    static constexpr const int source = 39;
    // Get static field: static public System.ExceptionArgument source
    static ::System::ExceptionArgument _get_source();
    // Set static field: static public System.ExceptionArgument source
    static void _set_source(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument state
    static constexpr const int state = 40;
    // Get static field: static public System.ExceptionArgument state
    static ::System::ExceptionArgument _get_state();
    // Set static field: static public System.ExceptionArgument state
    static void _set_state(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument culture
    static constexpr const int culture = 41;
    // Get static field: static public System.ExceptionArgument culture
    static ::System::ExceptionArgument _get_culture();
    // Set static field: static public System.ExceptionArgument culture
    static void _set_culture(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument destination
    static constexpr const int destination = 42;
    // Get static field: static public System.ExceptionArgument destination
    static ::System::ExceptionArgument _get_destination();
    // Set static field: static public System.ExceptionArgument destination
    static void _set_destination(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument byteOffset
    static constexpr const int byteOffset = 43;
    // Get static field: static public System.ExceptionArgument byteOffset
    static ::System::ExceptionArgument _get_byteOffset();
    // Set static field: static public System.ExceptionArgument byteOffset
    static void _set_byteOffset(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument minimumBufferSize
    static constexpr const int minimumBufferSize = 44;
    // Get static field: static public System.ExceptionArgument minimumBufferSize
    static ::System::ExceptionArgument _get_minimumBufferSize();
    // Set static field: static public System.ExceptionArgument minimumBufferSize
    static void _set_minimumBufferSize(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument offset
    static constexpr const int offset = 45;
    // Get static field: static public System.ExceptionArgument offset
    static ::System::ExceptionArgument _get_offset();
    // Set static field: static public System.ExceptionArgument offset
    static void _set_offset(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument values
    static constexpr const int values = 46;
    // Get static field: static public System.ExceptionArgument values
    static ::System::ExceptionArgument _get_values();
    // Set static field: static public System.ExceptionArgument values
    static void _set_values(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument comparisonType
    static constexpr const int comparisonType = 47;
    // Get static field: static public System.ExceptionArgument comparisonType
    static ::System::ExceptionArgument _get_comparisonType();
    // Set static field: static public System.ExceptionArgument comparisonType
    static void _set_comparisonType(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument s
    static constexpr const int s = 48;
    // Get static field: static public System.ExceptionArgument s
    static ::System::ExceptionArgument _get_s();
    // Set static field: static public System.ExceptionArgument s
    static void _set_s(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument input
    static constexpr const int input = 49;
    // Get static field: static public System.ExceptionArgument input
    static ::System::ExceptionArgument _get_input();
    // Set static field: static public System.ExceptionArgument input
    static void _set_input(::System::ExceptionArgument value);
    // static field const value: static public System.ExceptionArgument format
    static constexpr const int format = 50;
    // Get static field: static public System.ExceptionArgument format
    static ::System::ExceptionArgument _get_format();
    // Set static field: static public System.ExceptionArgument format
    static void _set_format(::System::ExceptionArgument value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ExceptionArgument
  #pragma pack(pop)
  static check_size<sizeof(ExceptionArgument), 0 + sizeof(int)> __System_ExceptionArgumentSizeCheck;
  static_assert(sizeof(ExceptionArgument) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
