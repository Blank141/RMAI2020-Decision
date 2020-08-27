// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dynamic_obstacle_layer_setting.proto

#ifndef PROTOBUF_dynamic_5fobstacle_5flayer_5fsetting_2eproto__INCLUDED
#define PROTOBUF_dynamic_5fobstacle_5flayer_5fsetting_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace roborts_costmap {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_dynamic_5fobstacle_5flayer_5fsetting_2eproto();
void protobuf_AssignDesc_dynamic_5fobstacle_5flayer_5fsetting_2eproto();
void protobuf_ShutdownFile_dynamic_5fobstacle_5flayer_5fsetting_2eproto();

class ParaDynamicObstacleLayer;

// ===================================================================

class ParaDynamicObstacleLayer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:roborts_costmap.ParaDynamicObstacleLayer) */ {
 public:
  ParaDynamicObstacleLayer();
  virtual ~ParaDynamicObstacleLayer();

  ParaDynamicObstacleLayer(const ParaDynamicObstacleLayer& from);

  inline ParaDynamicObstacleLayer& operator=(const ParaDynamicObstacleLayer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ParaDynamicObstacleLayer& default_instance();

  void Swap(ParaDynamicObstacleLayer* other);

  // implements Message ----------------------------------------------

  inline ParaDynamicObstacleLayer* New() const { return New(NULL); }

  ParaDynamicObstacleLayer* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ParaDynamicObstacleLayer& from);
  void MergeFrom(const ParaDynamicObstacleLayer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ParaDynamicObstacleLayer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double observation_keep_time = 1;
  bool has_observation_keep_time() const;
  void clear_observation_keep_time();
  static const int kObservationKeepTimeFieldNumber = 1;
  double observation_keep_time() const;
  void set_observation_keep_time(double value);

  // required double expected_update_rate = 2;
  bool has_expected_update_rate() const;
  void clear_expected_update_rate();
  static const int kExpectedUpdateRateFieldNumber = 2;
  double expected_update_rate() const;
  void set_expected_update_rate(double value);

  // required double min_obstacle_height = 3;
  bool has_min_obstacle_height() const;
  void clear_min_obstacle_height();
  static const int kMinObstacleHeightFieldNumber = 3;
  double min_obstacle_height() const;
  void set_min_obstacle_height(double value);

  // required double max_obstacle_height = 4;
  bool has_max_obstacle_height() const;
  void clear_max_obstacle_height();
  static const int kMaxObstacleHeightFieldNumber = 4;
  double max_obstacle_height() const;
  void set_max_obstacle_height(double value);

  // required double obstacle_range = 5;
  bool has_obstacle_range() const;
  void clear_obstacle_range();
  static const int kObstacleRangeFieldNumber = 5;
  double obstacle_range() const;
  void set_obstacle_range(double value);

  // required double raytrace_range = 6;
  bool has_raytrace_range() const;
  void clear_raytrace_range();
  static const int kRaytraceRangeFieldNumber = 6;
  double raytrace_range() const;
  void set_raytrace_range(double value);

  // required double transform_tolerance = 7;
  bool has_transform_tolerance() const;
  void clear_transform_tolerance();
  static const int kTransformToleranceFieldNumber = 7;
  double transform_tolerance() const;
  void set_transform_tolerance(double value);

  // required string topic_string = 8;
  bool has_topic_string() const;
  void clear_topic_string();
  static const int kTopicStringFieldNumber = 8;
  const ::std::string& topic_string() const;
  void set_topic_string(const ::std::string& value);
  void set_topic_string(const char* value);
  void set_topic_string(const char* value, size_t size);
  ::std::string* mutable_topic_string();
  ::std::string* release_topic_string();
  void set_allocated_topic_string(::std::string* topic_string);

  // required string sensor_frame = 9;
  bool has_sensor_frame() const;
  void clear_sensor_frame();
  static const int kSensorFrameFieldNumber = 9;
  const ::std::string& sensor_frame() const;
  void set_sensor_frame(const ::std::string& value);
  void set_sensor_frame(const char* value);
  void set_sensor_frame(const char* value, size_t size);
  ::std::string* mutable_sensor_frame();
  ::std::string* release_sensor_frame();
  void set_allocated_sensor_frame(::std::string* sensor_frame);

  // required float obstacle_size = 10;
  bool has_obstacle_size() const;
  void clear_obstacle_size();
  static const int kObstacleSizeFieldNumber = 10;
  float obstacle_size() const;
  void set_obstacle_size(float value);

  // required bool clearing = 11;
  bool has_clearing() const;
  void clear_clearing();
  static const int kClearingFieldNumber = 11;
  bool clearing() const;
  void set_clearing(bool value);

  // required bool marking = 12;
  bool has_marking() const;
  void clear_marking();
  static const int kMarkingFieldNumber = 12;
  bool marking() const;
  void set_marking(bool value);

  // required bool footprint_clearing_enabled = 13;
  bool has_footprint_clearing_enabled() const;
  void clear_footprint_clearing_enabled();
  static const int kFootprintClearingEnabledFieldNumber = 13;
  bool footprint_clearing_enabled() const;
  void set_footprint_clearing_enabled(bool value);

  // required bool is_debug = 14;
  bool has_is_debug() const;
  void clear_is_debug();
  static const int kIsDebugFieldNumber = 14;
  bool is_debug() const;
  void set_is_debug(bool value);

  // @@protoc_insertion_point(class_scope:roborts_costmap.ParaDynamicObstacleLayer)
 private:
  inline void set_has_observation_keep_time();
  inline void clear_has_observation_keep_time();
  inline void set_has_expected_update_rate();
  inline void clear_has_expected_update_rate();
  inline void set_has_min_obstacle_height();
  inline void clear_has_min_obstacle_height();
  inline void set_has_max_obstacle_height();
  inline void clear_has_max_obstacle_height();
  inline void set_has_obstacle_range();
  inline void clear_has_obstacle_range();
  inline void set_has_raytrace_range();
  inline void clear_has_raytrace_range();
  inline void set_has_transform_tolerance();
  inline void clear_has_transform_tolerance();
  inline void set_has_topic_string();
  inline void clear_has_topic_string();
  inline void set_has_sensor_frame();
  inline void clear_has_sensor_frame();
  inline void set_has_obstacle_size();
  inline void clear_has_obstacle_size();
  inline void set_has_clearing();
  inline void clear_has_clearing();
  inline void set_has_marking();
  inline void clear_has_marking();
  inline void set_has_footprint_clearing_enabled();
  inline void clear_has_footprint_clearing_enabled();
  inline void set_has_is_debug();
  inline void clear_has_is_debug();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double observation_keep_time_;
  double expected_update_rate_;
  double min_obstacle_height_;
  double max_obstacle_height_;
  double obstacle_range_;
  double raytrace_range_;
  double transform_tolerance_;
  ::google::protobuf::internal::ArenaStringPtr topic_string_;
  ::google::protobuf::internal::ArenaStringPtr sensor_frame_;
  float obstacle_size_;
  bool clearing_;
  bool marking_;
  bool footprint_clearing_enabled_;
  bool is_debug_;
  friend void  protobuf_AddDesc_dynamic_5fobstacle_5flayer_5fsetting_2eproto();
  friend void protobuf_AssignDesc_dynamic_5fobstacle_5flayer_5fsetting_2eproto();
  friend void protobuf_ShutdownFile_dynamic_5fobstacle_5flayer_5fsetting_2eproto();

  void InitAsDefaultInstance();
  static ParaDynamicObstacleLayer* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ParaDynamicObstacleLayer

// required double observation_keep_time = 1;
inline bool ParaDynamicObstacleLayer::has_observation_keep_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_observation_keep_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ParaDynamicObstacleLayer::clear_has_observation_keep_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ParaDynamicObstacleLayer::clear_observation_keep_time() {
  observation_keep_time_ = 0;
  clear_has_observation_keep_time();
}
inline double ParaDynamicObstacleLayer::observation_keep_time() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.observation_keep_time)
  return observation_keep_time_;
}
inline void ParaDynamicObstacleLayer::set_observation_keep_time(double value) {
  set_has_observation_keep_time();
  observation_keep_time_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.observation_keep_time)
}

// required double expected_update_rate = 2;
inline bool ParaDynamicObstacleLayer::has_expected_update_rate() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_expected_update_rate() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ParaDynamicObstacleLayer::clear_has_expected_update_rate() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ParaDynamicObstacleLayer::clear_expected_update_rate() {
  expected_update_rate_ = 0;
  clear_has_expected_update_rate();
}
inline double ParaDynamicObstacleLayer::expected_update_rate() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.expected_update_rate)
  return expected_update_rate_;
}
inline void ParaDynamicObstacleLayer::set_expected_update_rate(double value) {
  set_has_expected_update_rate();
  expected_update_rate_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.expected_update_rate)
}

// required double min_obstacle_height = 3;
inline bool ParaDynamicObstacleLayer::has_min_obstacle_height() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_min_obstacle_height() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ParaDynamicObstacleLayer::clear_has_min_obstacle_height() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ParaDynamicObstacleLayer::clear_min_obstacle_height() {
  min_obstacle_height_ = 0;
  clear_has_min_obstacle_height();
}
inline double ParaDynamicObstacleLayer::min_obstacle_height() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.min_obstacle_height)
  return min_obstacle_height_;
}
inline void ParaDynamicObstacleLayer::set_min_obstacle_height(double value) {
  set_has_min_obstacle_height();
  min_obstacle_height_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.min_obstacle_height)
}

// required double max_obstacle_height = 4;
inline bool ParaDynamicObstacleLayer::has_max_obstacle_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_max_obstacle_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ParaDynamicObstacleLayer::clear_has_max_obstacle_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ParaDynamicObstacleLayer::clear_max_obstacle_height() {
  max_obstacle_height_ = 0;
  clear_has_max_obstacle_height();
}
inline double ParaDynamicObstacleLayer::max_obstacle_height() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.max_obstacle_height)
  return max_obstacle_height_;
}
inline void ParaDynamicObstacleLayer::set_max_obstacle_height(double value) {
  set_has_max_obstacle_height();
  max_obstacle_height_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.max_obstacle_height)
}

// required double obstacle_range = 5;
inline bool ParaDynamicObstacleLayer::has_obstacle_range() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_obstacle_range() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ParaDynamicObstacleLayer::clear_has_obstacle_range() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ParaDynamicObstacleLayer::clear_obstacle_range() {
  obstacle_range_ = 0;
  clear_has_obstacle_range();
}
inline double ParaDynamicObstacleLayer::obstacle_range() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.obstacle_range)
  return obstacle_range_;
}
inline void ParaDynamicObstacleLayer::set_obstacle_range(double value) {
  set_has_obstacle_range();
  obstacle_range_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.obstacle_range)
}

// required double raytrace_range = 6;
inline bool ParaDynamicObstacleLayer::has_raytrace_range() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_raytrace_range() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ParaDynamicObstacleLayer::clear_has_raytrace_range() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ParaDynamicObstacleLayer::clear_raytrace_range() {
  raytrace_range_ = 0;
  clear_has_raytrace_range();
}
inline double ParaDynamicObstacleLayer::raytrace_range() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.raytrace_range)
  return raytrace_range_;
}
inline void ParaDynamicObstacleLayer::set_raytrace_range(double value) {
  set_has_raytrace_range();
  raytrace_range_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.raytrace_range)
}

// required double transform_tolerance = 7;
inline bool ParaDynamicObstacleLayer::has_transform_tolerance() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_transform_tolerance() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ParaDynamicObstacleLayer::clear_has_transform_tolerance() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ParaDynamicObstacleLayer::clear_transform_tolerance() {
  transform_tolerance_ = 0;
  clear_has_transform_tolerance();
}
inline double ParaDynamicObstacleLayer::transform_tolerance() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.transform_tolerance)
  return transform_tolerance_;
}
inline void ParaDynamicObstacleLayer::set_transform_tolerance(double value) {
  set_has_transform_tolerance();
  transform_tolerance_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.transform_tolerance)
}

// required string topic_string = 8;
inline bool ParaDynamicObstacleLayer::has_topic_string() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_topic_string() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ParaDynamicObstacleLayer::clear_has_topic_string() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ParaDynamicObstacleLayer::clear_topic_string() {
  topic_string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_topic_string();
}
inline const ::std::string& ParaDynamicObstacleLayer::topic_string() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
  return topic_string_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParaDynamicObstacleLayer::set_topic_string(const ::std::string& value) {
  set_has_topic_string();
  topic_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
}
inline void ParaDynamicObstacleLayer::set_topic_string(const char* value) {
  set_has_topic_string();
  topic_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
}
inline void ParaDynamicObstacleLayer::set_topic_string(const char* value, size_t size) {
  set_has_topic_string();
  topic_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
}
inline ::std::string* ParaDynamicObstacleLayer::mutable_topic_string() {
  set_has_topic_string();
  // @@protoc_insertion_point(field_mutable:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
  return topic_string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ParaDynamicObstacleLayer::release_topic_string() {
  // @@protoc_insertion_point(field_release:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
  clear_has_topic_string();
  return topic_string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParaDynamicObstacleLayer::set_allocated_topic_string(::std::string* topic_string) {
  if (topic_string != NULL) {
    set_has_topic_string();
  } else {
    clear_has_topic_string();
  }
  topic_string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic_string);
  // @@protoc_insertion_point(field_set_allocated:roborts_costmap.ParaDynamicObstacleLayer.topic_string)
}

// required string sensor_frame = 9;
inline bool ParaDynamicObstacleLayer::has_sensor_frame() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_sensor_frame() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ParaDynamicObstacleLayer::clear_has_sensor_frame() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ParaDynamicObstacleLayer::clear_sensor_frame() {
  sensor_frame_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sensor_frame();
}
inline const ::std::string& ParaDynamicObstacleLayer::sensor_frame() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
  return sensor_frame_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParaDynamicObstacleLayer::set_sensor_frame(const ::std::string& value) {
  set_has_sensor_frame();
  sensor_frame_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
}
inline void ParaDynamicObstacleLayer::set_sensor_frame(const char* value) {
  set_has_sensor_frame();
  sensor_frame_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
}
inline void ParaDynamicObstacleLayer::set_sensor_frame(const char* value, size_t size) {
  set_has_sensor_frame();
  sensor_frame_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
}
inline ::std::string* ParaDynamicObstacleLayer::mutable_sensor_frame() {
  set_has_sensor_frame();
  // @@protoc_insertion_point(field_mutable:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
  return sensor_frame_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ParaDynamicObstacleLayer::release_sensor_frame() {
  // @@protoc_insertion_point(field_release:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
  clear_has_sensor_frame();
  return sensor_frame_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParaDynamicObstacleLayer::set_allocated_sensor_frame(::std::string* sensor_frame) {
  if (sensor_frame != NULL) {
    set_has_sensor_frame();
  } else {
    clear_has_sensor_frame();
  }
  sensor_frame_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sensor_frame);
  // @@protoc_insertion_point(field_set_allocated:roborts_costmap.ParaDynamicObstacleLayer.sensor_frame)
}

// required float obstacle_size = 10;
inline bool ParaDynamicObstacleLayer::has_obstacle_size() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_obstacle_size() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ParaDynamicObstacleLayer::clear_has_obstacle_size() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ParaDynamicObstacleLayer::clear_obstacle_size() {
  obstacle_size_ = 0;
  clear_has_obstacle_size();
}
inline float ParaDynamicObstacleLayer::obstacle_size() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.obstacle_size)
  return obstacle_size_;
}
inline void ParaDynamicObstacleLayer::set_obstacle_size(float value) {
  set_has_obstacle_size();
  obstacle_size_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.obstacle_size)
}

// required bool clearing = 11;
inline bool ParaDynamicObstacleLayer::has_clearing() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_clearing() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ParaDynamicObstacleLayer::clear_has_clearing() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ParaDynamicObstacleLayer::clear_clearing() {
  clearing_ = false;
  clear_has_clearing();
}
inline bool ParaDynamicObstacleLayer::clearing() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.clearing)
  return clearing_;
}
inline void ParaDynamicObstacleLayer::set_clearing(bool value) {
  set_has_clearing();
  clearing_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.clearing)
}

// required bool marking = 12;
inline bool ParaDynamicObstacleLayer::has_marking() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_marking() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ParaDynamicObstacleLayer::clear_has_marking() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ParaDynamicObstacleLayer::clear_marking() {
  marking_ = false;
  clear_has_marking();
}
inline bool ParaDynamicObstacleLayer::marking() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.marking)
  return marking_;
}
inline void ParaDynamicObstacleLayer::set_marking(bool value) {
  set_has_marking();
  marking_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.marking)
}

// required bool footprint_clearing_enabled = 13;
inline bool ParaDynamicObstacleLayer::has_footprint_clearing_enabled() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_footprint_clearing_enabled() {
  _has_bits_[0] |= 0x00001000u;
}
inline void ParaDynamicObstacleLayer::clear_has_footprint_clearing_enabled() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void ParaDynamicObstacleLayer::clear_footprint_clearing_enabled() {
  footprint_clearing_enabled_ = false;
  clear_has_footprint_clearing_enabled();
}
inline bool ParaDynamicObstacleLayer::footprint_clearing_enabled() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.footprint_clearing_enabled)
  return footprint_clearing_enabled_;
}
inline void ParaDynamicObstacleLayer::set_footprint_clearing_enabled(bool value) {
  set_has_footprint_clearing_enabled();
  footprint_clearing_enabled_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.footprint_clearing_enabled)
}

// required bool is_debug = 14;
inline bool ParaDynamicObstacleLayer::has_is_debug() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void ParaDynamicObstacleLayer::set_has_is_debug() {
  _has_bits_[0] |= 0x00002000u;
}
inline void ParaDynamicObstacleLayer::clear_has_is_debug() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void ParaDynamicObstacleLayer::clear_is_debug() {
  is_debug_ = false;
  clear_has_is_debug();
}
inline bool ParaDynamicObstacleLayer::is_debug() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaDynamicObstacleLayer.is_debug)
  return is_debug_;
}
inline void ParaDynamicObstacleLayer::set_is_debug(bool value) {
  set_has_is_debug();
  is_debug_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaDynamicObstacleLayer.is_debug)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace roborts_costmap

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dynamic_5fobstacle_5flayer_5fsetting_2eproto__INCLUDED
