// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dynamic_obstacle_layer_setting.proto

#include "dynamic_obstacle_layer_setting.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace roborts_costmap {
class ParaDynamicObstacleLayerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ParaDynamicObstacleLayer>
      _instance;
} _ParaDynamicObstacleLayer_default_instance_;
}  // namespace roborts_costmap
namespace protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto {
static void InitDefaultsParaDynamicObstacleLayer() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::roborts_costmap::_ParaDynamicObstacleLayer_default_instance_;
    new (ptr) ::roborts_costmap::ParaDynamicObstacleLayer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::roborts_costmap::ParaDynamicObstacleLayer::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ParaDynamicObstacleLayer =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsParaDynamicObstacleLayer}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ParaDynamicObstacleLayer.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, observation_keep_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, expected_update_rate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, min_obstacle_height_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, max_obstacle_height_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, obstacle_range_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, raytrace_range_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, transform_tolerance_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, topic_string_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, sensor_frame_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, obstacle_size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, clearing_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, marking_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, footprint_clearing_enabled_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::roborts_costmap::ParaDynamicObstacleLayer, is_debug_),
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  0,
  1,
  9,
  10,
  11,
  12,
  13,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 19, sizeof(::roborts_costmap::ParaDynamicObstacleLayer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::roborts_costmap::_ParaDynamicObstacleLayer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "dynamic_obstacle_layer_setting.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n$dynamic_obstacle_layer_setting.proto\022\017"
      "roborts_costmap\"\372\002\n\030ParaDynamicObstacleL"
      "ayer\022\035\n\025observation_keep_time\030\001 \002(\001\022\034\n\024e"
      "xpected_update_rate\030\002 \002(\001\022\033\n\023min_obstacl"
      "e_height\030\003 \002(\001\022\033\n\023max_obstacle_height\030\004 "
      "\002(\001\022\026\n\016obstacle_range\030\005 \002(\001\022\026\n\016raytrace_"
      "range\030\006 \002(\001\022\033\n\023transform_tolerance\030\007 \002(\001"
      "\022\024\n\014topic_string\030\010 \002(\t\022\024\n\014sensor_frame\030\t"
      " \002(\t\022\025\n\robstacle_size\030\n \002(\002\022\020\n\010clearing\030"
      "\013 \002(\010\022\017\n\007marking\030\014 \002(\010\022\"\n\032footprint_clea"
      "ring_enabled\030\r \002(\010\022\020\n\010is_debug\030\016 \002(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 436);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dynamic_obstacle_layer_setting.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto
namespace roborts_costmap {

// ===================================================================

void ParaDynamicObstacleLayer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ParaDynamicObstacleLayer::kObservationKeepTimeFieldNumber;
const int ParaDynamicObstacleLayer::kExpectedUpdateRateFieldNumber;
const int ParaDynamicObstacleLayer::kMinObstacleHeightFieldNumber;
const int ParaDynamicObstacleLayer::kMaxObstacleHeightFieldNumber;
const int ParaDynamicObstacleLayer::kObstacleRangeFieldNumber;
const int ParaDynamicObstacleLayer::kRaytraceRangeFieldNumber;
const int ParaDynamicObstacleLayer::kTransformToleranceFieldNumber;
const int ParaDynamicObstacleLayer::kTopicStringFieldNumber;
const int ParaDynamicObstacleLayer::kSensorFrameFieldNumber;
const int ParaDynamicObstacleLayer::kObstacleSizeFieldNumber;
const int ParaDynamicObstacleLayer::kClearingFieldNumber;
const int ParaDynamicObstacleLayer::kMarkingFieldNumber;
const int ParaDynamicObstacleLayer::kFootprintClearingEnabledFieldNumber;
const int ParaDynamicObstacleLayer::kIsDebugFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ParaDynamicObstacleLayer::ParaDynamicObstacleLayer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto::scc_info_ParaDynamicObstacleLayer.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:roborts_costmap.ParaDynamicObstacleLayer)
}
ParaDynamicObstacleLayer::ParaDynamicObstacleLayer(const ParaDynamicObstacleLayer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  topic_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_topic_string()) {
    topic_string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_string_);
  }
  sensor_frame_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_sensor_frame()) {
    sensor_frame_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sensor_frame_);
  }
  ::memcpy(&observation_keep_time_, &from.observation_keep_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_debug_) -
    reinterpret_cast<char*>(&observation_keep_time_)) + sizeof(is_debug_));
  // @@protoc_insertion_point(copy_constructor:roborts_costmap.ParaDynamicObstacleLayer)
}

void ParaDynamicObstacleLayer::SharedCtor() {
  topic_string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sensor_frame_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&observation_keep_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_debug_) -
      reinterpret_cast<char*>(&observation_keep_time_)) + sizeof(is_debug_));
}

ParaDynamicObstacleLayer::~ParaDynamicObstacleLayer() {
  // @@protoc_insertion_point(destructor:roborts_costmap.ParaDynamicObstacleLayer)
  SharedDtor();
}

void ParaDynamicObstacleLayer::SharedDtor() {
  topic_string_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sensor_frame_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ParaDynamicObstacleLayer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ParaDynamicObstacleLayer::descriptor() {
  ::protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ParaDynamicObstacleLayer& ParaDynamicObstacleLayer::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto::scc_info_ParaDynamicObstacleLayer.base);
  return *internal_default_instance();
}


void ParaDynamicObstacleLayer::Clear() {
// @@protoc_insertion_point(message_clear_start:roborts_costmap.ParaDynamicObstacleLayer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      topic_string_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      sensor_frame_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 252u) {
    ::memset(&observation_keep_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&raytrace_range_) -
        reinterpret_cast<char*>(&observation_keep_time_)) + sizeof(raytrace_range_));
  }
  if (cached_has_bits & 16128u) {
    ::memset(&transform_tolerance_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&is_debug_) -
        reinterpret_cast<char*>(&transform_tolerance_)) + sizeof(is_debug_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ParaDynamicObstacleLayer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:roborts_costmap.ParaDynamicObstacleLayer)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double observation_keep_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_observation_keep_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &observation_keep_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double expected_update_rate = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          set_has_expected_update_rate();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &expected_update_rate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double min_obstacle_height = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          set_has_min_obstacle_height();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_obstacle_height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double max_obstacle_height = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {
          set_has_max_obstacle_height();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_obstacle_height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double obstacle_range = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {
          set_has_obstacle_range();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &obstacle_range_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double raytrace_range = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {
          set_has_raytrace_range();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &raytrace_range_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double transform_tolerance = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {
          set_has_transform_tolerance();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &transform_tolerance_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string topic_string = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic_string()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topic_string().data(), static_cast<int>(this->topic_string().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "roborts_costmap.ParaDynamicObstacleLayer.topic_string");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string sensor_frame = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sensor_frame()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->sensor_frame().data(), static_cast<int>(this->sensor_frame().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "roborts_costmap.ParaDynamicObstacleLayer.sensor_frame");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required float obstacle_size = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(85u /* 85 & 0xFF */)) {
          set_has_obstacle_size();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &obstacle_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool clearing = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          set_has_clearing();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &clearing_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool marking = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          set_has_marking();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &marking_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool footprint_clearing_enabled = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          set_has_footprint_clearing_enabled();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &footprint_clearing_enabled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool is_debug = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          set_has_is_debug();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_debug_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:roborts_costmap.ParaDynamicObstacleLayer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:roborts_costmap.ParaDynamicObstacleLayer)
  return false;
#undef DO_
}

void ParaDynamicObstacleLayer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:roborts_costmap.ParaDynamicObstacleLayer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double observation_keep_time = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->observation_keep_time(), output);
  }

  // required double expected_update_rate = 2;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->expected_update_rate(), output);
  }

  // required double min_obstacle_height = 3;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->min_obstacle_height(), output);
  }

  // required double max_obstacle_height = 4;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->max_obstacle_height(), output);
  }

  // required double obstacle_range = 5;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->obstacle_range(), output);
  }

  // required double raytrace_range = 6;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->raytrace_range(), output);
  }

  // required double transform_tolerance = 7;
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->transform_tolerance(), output);
  }

  // required string topic_string = 8;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic_string().data(), static_cast<int>(this->topic_string().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "roborts_costmap.ParaDynamicObstacleLayer.topic_string");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->topic_string(), output);
  }

  // required string sensor_frame = 9;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sensor_frame().data(), static_cast<int>(this->sensor_frame().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "roborts_costmap.ParaDynamicObstacleLayer.sensor_frame");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->sensor_frame(), output);
  }

  // required float obstacle_size = 10;
  if (cached_has_bits & 0x00000200u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->obstacle_size(), output);
  }

  // required bool clearing = 11;
  if (cached_has_bits & 0x00000400u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->clearing(), output);
  }

  // required bool marking = 12;
  if (cached_has_bits & 0x00000800u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->marking(), output);
  }

  // required bool footprint_clearing_enabled = 13;
  if (cached_has_bits & 0x00001000u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->footprint_clearing_enabled(), output);
  }

  // required bool is_debug = 14;
  if (cached_has_bits & 0x00002000u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->is_debug(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:roborts_costmap.ParaDynamicObstacleLayer)
}

::google::protobuf::uint8* ParaDynamicObstacleLayer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:roborts_costmap.ParaDynamicObstacleLayer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double observation_keep_time = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->observation_keep_time(), target);
  }

  // required double expected_update_rate = 2;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->expected_update_rate(), target);
  }

  // required double min_obstacle_height = 3;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->min_obstacle_height(), target);
  }

  // required double max_obstacle_height = 4;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->max_obstacle_height(), target);
  }

  // required double obstacle_range = 5;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->obstacle_range(), target);
  }

  // required double raytrace_range = 6;
  if (cached_has_bits & 0x00000080u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->raytrace_range(), target);
  }

  // required double transform_tolerance = 7;
  if (cached_has_bits & 0x00000100u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->transform_tolerance(), target);
  }

  // required string topic_string = 8;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic_string().data(), static_cast<int>(this->topic_string().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "roborts_costmap.ParaDynamicObstacleLayer.topic_string");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->topic_string(), target);
  }

  // required string sensor_frame = 9;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sensor_frame().data(), static_cast<int>(this->sensor_frame().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "roborts_costmap.ParaDynamicObstacleLayer.sensor_frame");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->sensor_frame(), target);
  }

  // required float obstacle_size = 10;
  if (cached_has_bits & 0x00000200u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->obstacle_size(), target);
  }

  // required bool clearing = 11;
  if (cached_has_bits & 0x00000400u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->clearing(), target);
  }

  // required bool marking = 12;
  if (cached_has_bits & 0x00000800u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->marking(), target);
  }

  // required bool footprint_clearing_enabled = 13;
  if (cached_has_bits & 0x00001000u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->footprint_clearing_enabled(), target);
  }

  // required bool is_debug = 14;
  if (cached_has_bits & 0x00002000u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->is_debug(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:roborts_costmap.ParaDynamicObstacleLayer)
  return target;
}

size_t ParaDynamicObstacleLayer::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:roborts_costmap.ParaDynamicObstacleLayer)
  size_t total_size = 0;

  if (has_topic_string()) {
    // required string topic_string = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic_string());
  }

  if (has_sensor_frame()) {
    // required string sensor_frame = 9;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sensor_frame());
  }

  if (has_observation_keep_time()) {
    // required double observation_keep_time = 1;
    total_size += 1 + 8;
  }

  if (has_expected_update_rate()) {
    // required double expected_update_rate = 2;
    total_size += 1 + 8;
  }

  if (has_min_obstacle_height()) {
    // required double min_obstacle_height = 3;
    total_size += 1 + 8;
  }

  if (has_max_obstacle_height()) {
    // required double max_obstacle_height = 4;
    total_size += 1 + 8;
  }

  if (has_obstacle_range()) {
    // required double obstacle_range = 5;
    total_size += 1 + 8;
  }

  if (has_raytrace_range()) {
    // required double raytrace_range = 6;
    total_size += 1 + 8;
  }

  if (has_transform_tolerance()) {
    // required double transform_tolerance = 7;
    total_size += 1 + 8;
  }

  if (has_obstacle_size()) {
    // required float obstacle_size = 10;
    total_size += 1 + 4;
  }

  if (has_clearing()) {
    // required bool clearing = 11;
    total_size += 1 + 1;
  }

  if (has_marking()) {
    // required bool marking = 12;
    total_size += 1 + 1;
  }

  if (has_footprint_clearing_enabled()) {
    // required bool footprint_clearing_enabled = 13;
    total_size += 1 + 1;
  }

  if (has_is_debug()) {
    // required bool is_debug = 14;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t ParaDynamicObstacleLayer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:roborts_costmap.ParaDynamicObstacleLayer)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00003fff) ^ 0x00003fff) == 0) {  // All required fields are present.
    // required string topic_string = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic_string());

    // required string sensor_frame = 9;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sensor_frame());

    // required double observation_keep_time = 1;
    total_size += 1 + 8;

    // required double expected_update_rate = 2;
    total_size += 1 + 8;

    // required double min_obstacle_height = 3;
    total_size += 1 + 8;

    // required double max_obstacle_height = 4;
    total_size += 1 + 8;

    // required double obstacle_range = 5;
    total_size += 1 + 8;

    // required double raytrace_range = 6;
    total_size += 1 + 8;

    // required double transform_tolerance = 7;
    total_size += 1 + 8;

    // required float obstacle_size = 10;
    total_size += 1 + 4;

    // required bool clearing = 11;
    total_size += 1 + 1;

    // required bool marking = 12;
    total_size += 1 + 1;

    // required bool footprint_clearing_enabled = 13;
    total_size += 1 + 1;

    // required bool is_debug = 14;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ParaDynamicObstacleLayer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:roborts_costmap.ParaDynamicObstacleLayer)
  GOOGLE_DCHECK_NE(&from, this);
  const ParaDynamicObstacleLayer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ParaDynamicObstacleLayer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:roborts_costmap.ParaDynamicObstacleLayer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:roborts_costmap.ParaDynamicObstacleLayer)
    MergeFrom(*source);
  }
}

void ParaDynamicObstacleLayer::MergeFrom(const ParaDynamicObstacleLayer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:roborts_costmap.ParaDynamicObstacleLayer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_topic_string();
      topic_string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_string_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_sensor_frame();
      sensor_frame_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sensor_frame_);
    }
    if (cached_has_bits & 0x00000004u) {
      observation_keep_time_ = from.observation_keep_time_;
    }
    if (cached_has_bits & 0x00000008u) {
      expected_update_rate_ = from.expected_update_rate_;
    }
    if (cached_has_bits & 0x00000010u) {
      min_obstacle_height_ = from.min_obstacle_height_;
    }
    if (cached_has_bits & 0x00000020u) {
      max_obstacle_height_ = from.max_obstacle_height_;
    }
    if (cached_has_bits & 0x00000040u) {
      obstacle_range_ = from.obstacle_range_;
    }
    if (cached_has_bits & 0x00000080u) {
      raytrace_range_ = from.raytrace_range_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 16128u) {
    if (cached_has_bits & 0x00000100u) {
      transform_tolerance_ = from.transform_tolerance_;
    }
    if (cached_has_bits & 0x00000200u) {
      obstacle_size_ = from.obstacle_size_;
    }
    if (cached_has_bits & 0x00000400u) {
      clearing_ = from.clearing_;
    }
    if (cached_has_bits & 0x00000800u) {
      marking_ = from.marking_;
    }
    if (cached_has_bits & 0x00001000u) {
      footprint_clearing_enabled_ = from.footprint_clearing_enabled_;
    }
    if (cached_has_bits & 0x00002000u) {
      is_debug_ = from.is_debug_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ParaDynamicObstacleLayer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:roborts_costmap.ParaDynamicObstacleLayer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ParaDynamicObstacleLayer::CopyFrom(const ParaDynamicObstacleLayer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:roborts_costmap.ParaDynamicObstacleLayer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParaDynamicObstacleLayer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00003fff) != 0x00003fff) return false;
  return true;
}

void ParaDynamicObstacleLayer::Swap(ParaDynamicObstacleLayer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ParaDynamicObstacleLayer::InternalSwap(ParaDynamicObstacleLayer* other) {
  using std::swap;
  topic_string_.Swap(&other->topic_string_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  sensor_frame_.Swap(&other->sensor_frame_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(observation_keep_time_, other->observation_keep_time_);
  swap(expected_update_rate_, other->expected_update_rate_);
  swap(min_obstacle_height_, other->min_obstacle_height_);
  swap(max_obstacle_height_, other->max_obstacle_height_);
  swap(obstacle_range_, other->obstacle_range_);
  swap(raytrace_range_, other->raytrace_range_);
  swap(transform_tolerance_, other->transform_tolerance_);
  swap(obstacle_size_, other->obstacle_size_);
  swap(clearing_, other->clearing_);
  swap(marking_, other->marking_);
  swap(footprint_clearing_enabled_, other->footprint_clearing_enabled_);
  swap(is_debug_, other->is_debug_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ParaDynamicObstacleLayer::GetMetadata() const {
  protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dynamic_5fobstacle_5flayer_5fsetting_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace roborts_costmap
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::roborts_costmap::ParaDynamicObstacleLayer* Arena::CreateMaybeMessage< ::roborts_costmap::ParaDynamicObstacleLayer >(Arena* arena) {
  return Arena::CreateInternal< ::roborts_costmap::ParaDynamicObstacleLayer >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
