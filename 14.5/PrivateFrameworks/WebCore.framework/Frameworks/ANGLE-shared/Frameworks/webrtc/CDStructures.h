//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BitrateAdjuster;

struct Chromaticity {
    float _field1;
    float _field2;
};

struct CodecBufferUsage;

struct CodecSpecificInfo {
    int _field1;
    union CodecSpecificInfoUnion _field2;
    struct optional<webrtc::GenericFrameInfo> _field3;
    struct optional<webrtc::FrameDependencyStructure> _field4;
};

struct CodecSpecificInfoH264 {
    int _field1;
    unsigned char _field2;
    _Bool _field3;
    _Bool _field4;
};

struct CodecSpecificInfoH265 {
    int _field1;
    _Bool _field2;
};

struct CodecSpecificInfoVP8 {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    char _field4;
    _Bool _field5;
    unsigned long long _field6[3];
    unsigned long long _field7;
    unsigned long long _field8[3];
    unsigned long long _field9;
};

struct CodecSpecificInfoVP9 {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    unsigned char _field6;
    _Bool _field7;
    _Bool _field8;
    unsigned char _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    _Bool _field12;
    unsigned short _field13[8];
    unsigned short _field14[8];
    struct GofInfoVP9 _field15;
    unsigned char _field16;
    unsigned char _field17[3];
    _Bool _field18;
};

struct ColorSpace {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    int _field4;
    int _field5;
    int _field6;
    struct optional<webrtc::HdrMetadata> _field7;
};

struct CompressedTuple<std::__1::allocator<int>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::__1::allocator<webrtc::CodecBufferUsage>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::__1::allocator<webrtc::DecodeTargetIndication>, unsigned long> {
    unsigned long long _field1;
};

struct CompressedTuple<std::__1::allocator<webrtc::RenderResolution>, unsigned long> {
    unsigned long long _field1;
};

struct Data;

struct EncodedImage {
    unsigned int _field1;
    unsigned int _field2;
    long long _field3;
    long long _field4;
    int _field5;
    int _field6;
    unsigned char _field7;
    _Bool _field8;
    int _field9;
    struct VideoPlayoutDelay _field10;
    struct Timing _field11;
    scoped_refptr_05c3cd2c _field12;
    unsigned long long _field13;
    char *_field14;
    unsigned long long _field15;
    unsigned int _field16;
    struct optional<int> _field17;
    struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long>>> _field18;
    struct optional<webrtc::ColorSpace> _field19;
    struct RtpPacketInfos _field20;
    _Bool _field21;
};

struct EncodedImageBufferInterface;

struct FrameDependencyStructure {
    int _field1;
    int _field2;
    int _field3;
    struct InlinedVector<int, 10, std::__1::allocator<int>> _field4;
    struct InlinedVector<webrtc::RenderResolution, 4, std::__1::allocator<webrtc::RenderResolution>> _field5;
    struct vector<webrtc::FrameDependencyTemplate, std::__1::allocator<webrtc::FrameDependencyTemplate>> _field6;
};

struct FrameDependencyTemplate;

struct GenericFrameInfo {
    int _field1;
    int _field2;
    struct InlinedVector<webrtc::DecodeTargetIndication, 10, std::__1::allocator<webrtc::DecodeTargetIndication>> _field3;
    struct InlinedVector<int, 4, std::__1::allocator<int>> _field4;
    struct InlinedVector<int, 4, std::__1::allocator<int>> _field5;
    struct InlinedVector<webrtc::CodecBufferUsage, 8, std::__1::allocator<webrtc::CodecBufferUsage>> _field6;
    struct vector<bool, std::__1::allocator<bool>> _field7;
    struct bitset<32> _field8;
};

struct GofInfoVP9 {
    unsigned long long _field1;
    unsigned char _field2[255];
    _Bool _field3[255];
    unsigned char _field4[255];
    unsigned char _field5[255][3];
    unsigned short _field6;
};

struct H264BitstreamParser {
    CDUnknownFunctionPointerType *_vptr$BitstreamParser;
    struct optional<webrtc::SpsParser::SpsState> sps_;
    struct optional<webrtc::PpsParser::PpsState> pps_;
    struct optional<int> last_slice_qp_delta_;
};

struct HdrMasteringMetadata {
    struct Chromaticity _field1;
    struct Chromaticity _field2;
    struct Chromaticity _field3;
    struct Chromaticity _field4;
    float _field5;
    float _field6;
};

struct HdrMetadata {
    struct HdrMasteringMetadata _field1;
    int _field2;
    int _field3;
};

struct I420BufferInterface;

struct Inlined {
    char _field1[16];
};

struct InlinedVector<int, 10, std::__1::allocator<int>> {
    struct Storage<int, 10, std::__1::allocator<int>> _field1;
};

struct InlinedVector<int, 4, std::__1::allocator<int>> {
    struct Storage<int, 4, std::__1::allocator<int>> _field1;
};

struct InlinedVector<webrtc::CodecBufferUsage, 8, std::__1::allocator<webrtc::CodecBufferUsage>> {
    struct Storage<webrtc::CodecBufferUsage, 8, std::__1::allocator<webrtc::CodecBufferUsage>> _field1;
};

struct InlinedVector<webrtc::DecodeTargetIndication, 10, std::__1::allocator<webrtc::DecodeTargetIndication>> {
    struct Storage<webrtc::DecodeTargetIndication, 10, std::__1::allocator<webrtc::DecodeTargetIndication>> _field1;
};

struct InlinedVector<webrtc::RenderResolution, 4, std::__1::allocator<webrtc::RenderResolution>> {
    struct Storage<webrtc::RenderResolution, 4, std::__1::allocator<webrtc::RenderResolution>> _field1;
};

struct PpsState {
    _Bool bottom_field_pic_order_in_frame_present_flag;
    _Bool weighted_pred_flag;
    _Bool entropy_coding_mode_flag;
    unsigned int weighted_bipred_idc;
    unsigned int redundant_pic_cnt_present_flag;
    int pic_init_qp_minus26;
    unsigned int id;
    unsigned int sps_id;
};

struct ProfileLevelId {
    int profile;
    int level;
};

struct RtpEncodingParameters {
    struct optional<unsigned int> _field1;
    double _field2;
    int _field3;
    struct optional<int> _field4;
    struct optional<int> _field5;
    struct optional<double> _field6;
    struct optional<int> _field7;
    struct optional<double> _field8;
    _Bool _field9;
    basic_string_a1f69cfb _field10;
    _Bool _field11;
};

struct RtpPacketInfos {
    struct scoped_refptr<webrtc::RtpPacketInfos::Data> _field1;
};

struct SdpVideoFormat {
    basic_string_a1f69cfb _field1;
    struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>> _field2;
};

struct SpatialLayer {
    unsigned short _field1;
    unsigned short _field2;
    float _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    _Bool _field9;
};

struct SpsState {
    unsigned int width;
    unsigned int height;
    unsigned int delta_pic_order_always_zero_flag;
    unsigned int separate_colour_plane_flag;
    unsigned int frame_mbs_only_flag;
    unsigned int log2_max_frame_num;
    unsigned int log2_max_pic_order_cnt_lsb;
    unsigned int pic_order_cnt_type;
    unsigned int max_num_ref_frames;
    unsigned int vui_params_present;
    unsigned int id;
};

struct Storage<int, 10, std::__1::allocator<int>> {
    struct CompressedTuple<std::__1::allocator<int>, unsigned long> _field1;
    union Data {
        struct Allocated {
            int *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<int, 4, std::__1::allocator<int>> {
    struct CompressedTuple<std::__1::allocator<int>, unsigned long> _field1;
    union Data {
        struct Allocated {
            int *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::CodecBufferUsage, 8, std::__1::allocator<webrtc::CodecBufferUsage>> {
    struct CompressedTuple<std::__1::allocator<webrtc::CodecBufferUsage>, unsigned long> _field1;
    union Data {
        struct Allocated {
            struct CodecBufferUsage *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::DecodeTargetIndication, 10, std::__1::allocator<webrtc::DecodeTargetIndication>> {
    struct CompressedTuple<std::__1::allocator<webrtc::DecodeTargetIndication>, unsigned long> _field1;
    union Data {
        struct Allocated {
            int *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Storage<webrtc::RenderResolution, 4, std::__1::allocator<webrtc::RenderResolution>> {
    struct CompressedTuple<std::__1::allocator<webrtc::RenderResolution>, unsigned long> _field1;
    union Data {
        struct Allocated {
            struct RenderResolution *_field1;
            unsigned long long _field2;
        } _field1;
        struct Inlined _field2;
    } _field2;
};

struct Timing {
    unsigned char _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
};

struct TimingFrameTriggerThresholds {
    long long _field1;
    unsigned short _field2;
};

struct VideoCodec {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    unsigned int _field9;
    unsigned char _field10;
    struct SpatialLayer _field11[3];
    struct SpatialLayer _field12[5];
    int _field13;
    _Bool _field14;
    struct optional<int> _field15;
    struct TimingFrameTriggerThresholds _field16;
    _Bool _field17;
    union VideoCodecUnion _field18;
};

struct VideoCodecH264 {
    _Bool _field1;
    int _field2;
    unsigned char _field3;
};

struct VideoCodecVP8 {
    int _field1;
    unsigned char _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    int _field6;
};

struct VideoCodecVP9 {
    int _field1;
    unsigned char _field2;
    _Bool _field3;
    _Bool _field4;
    int _field5;
    _Bool _field6;
    _Bool _field7;
    unsigned char _field8;
    _Bool _field9;
    int _field10;
};

struct VideoDecoder;

struct VideoEncoder;

struct VideoPlayoutDelay {
    int _field1;
    int _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct bitset<32> {
    unsigned long long _field1;
};

struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long>>> {
    struct __tree<std::__1::__value_type<int, unsigned long>, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct optional<double> {
    union {
        char _field1;
        double _field2;
    } _field1;
    _Bool _field2;
};

struct optional<int> {
    union {
        char __null_state_;
        int __val_;
    } ;
    _Bool __engaged_;
};

struct optional<unsigned int> {
    union {
        char _field1;
        unsigned int _field2;
    } _field1;
    _Bool _field2;
};

struct optional<webrtc::ColorSpace> {
    union {
        char _field1;
        struct ColorSpace _field2;
    } _field1;
    _Bool _field2;
};

struct optional<webrtc::FrameDependencyStructure> {
    union {
        char _field1;
        struct FrameDependencyStructure _field2;
    } _field1;
    _Bool _field2;
};

struct optional<webrtc::GenericFrameInfo> {
    union {
        char _field1;
        struct GenericFrameInfo _field2;
    } _field1;
    _Bool _field2;
};

struct optional<webrtc::H264::ProfileLevelId> {
    union {
        char __null_state_;
        struct ProfileLevelId __val_;
    } ;
    _Bool __engaged_;
};

struct optional<webrtc::HdrMetadata> {
    union {
        char _field1;
        struct HdrMetadata _field2;
    } _field1;
    _Bool _field2;
};

struct optional<webrtc::PpsParser::PpsState> {
    union {
        char __null_state_;
        struct PpsState __val_;
    } ;
    _Bool __engaged_;
};

struct optional<webrtc::SpsParser::SpsState> {
    union {
        char __null_state_;
        struct SpsState __val_;
    } ;
    _Bool __engaged_;
};

struct scoped_refptr<webrtc::EncodedImageBufferInterface> {
    struct EncodedImageBufferInterface *ptr_;
};

struct scoped_refptr<webrtc::I420BufferInterface> {
    struct I420BufferInterface *ptr_;
};

struct scoped_refptr<webrtc::RtpPacketInfos::Data> {
    struct Data *_field1;
};

struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster>> {
    struct __compressed_pair<webrtc::BitrateAdjuster *, std::__1::default_delete<webrtc::BitrateAdjuster>> {
        struct BitrateAdjuster *__value_;
    } __ptr_;
};

struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder>> {
    struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder>> {
        struct VideoDecoder *__value_;
    } __ptr_;
};

struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder>> {
    struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder>> {
        struct VideoEncoder *__value_;
    } __ptr_;
};

struct vector<bool, std::__1::allocator<bool>> {
    unsigned long long *_field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long>> {
        unsigned long long _field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

struct vector<webrtc::FrameDependencyTemplate, std::__1::allocator<webrtc::FrameDependencyTemplate>> {
    struct FrameDependencyTemplate *_field1;
    struct FrameDependencyTemplate *_field2;
    struct __compressed_pair<webrtc::FrameDependencyTemplate *, std::__1::allocator<webrtc::FrameDependencyTemplate>> {
        struct FrameDependencyTemplate *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_a1f69cfb;

typedef struct scoped_refptr<webrtc::EncodedImageBufferInterface> {
    struct EncodedImageBufferInterface *ptr_;
} scoped_refptr_05c3cd2c;

typedef struct scoped_refptr<webrtc::I420BufferInterface> {
    struct I420BufferInterface *ptr_;
} scoped_refptr_b674d2a6;

typedef struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder>> {
    struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder>> {
        struct VideoDecoder *__value_;
    } __ptr_;
} unique_ptr_28850a1b;

typedef struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder>> {
    struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder>> {
        struct VideoEncoder *__value_;
    } __ptr_;
} unique_ptr_2722152f;

#pragma mark Named Unions

union CodecSpecificInfoUnion {
    struct CodecSpecificInfoVP8 _field1;
    struct CodecSpecificInfoVP9 _field2;
    struct CodecSpecificInfoH264 _field3;
    struct CodecSpecificInfoH265 _field4;
};

union VideoCodecUnion {
    struct VideoCodecVP8 _field1;
    struct VideoCodecVP9 _field2;
    struct VideoCodecH264 _field3;
};

