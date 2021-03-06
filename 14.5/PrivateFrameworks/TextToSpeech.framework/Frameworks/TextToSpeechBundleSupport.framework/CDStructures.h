//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioQueueBuffer;

struct OpaqueAudioFileID;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _VE_HSAFE {
    void *_field1;
    unsigned int _field2;
};

struct __CFString;

struct __TTSPlayback;

struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>;

struct vector<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>>> {
    struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>> *__begin_;
    struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>> *__end_;
    struct __compressed_pair<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>*, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>>> {
        struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>> *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    char _field1[128];
    char _field2[128];
    char _field3[128];
    char _field4[128];
    char _field5[128];
    unsigned short _field6;
} CDStruct_3f1f4513;

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    struct _VE_HSAFE _field5;
    struct __TTSPlayback *_field6;
    unsigned char _field7;
    char *_field8;
    int _field9;
    int _field10;
    struct __CFString *_field11;
    struct __CFString *_field12;
    float _field13;
    float _field14;
    float _field15;
    char *_field16;
    char *_field17;
    long long _field18;
    long long _field19;
    id _field20;
    unsigned int _field21;
    struct OpaqueAudioFileID *_field22;
    int _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned char _field27;
    unsigned char _field28;
} CDStruct_24e90a37;

typedef struct {
    struct __TTSPlayback *_field1;
    CDStruct_183601bc *_field2;
    struct AudioQueueBuffer *_field3;
    int _field4;
    struct {
        unsigned int _field1;
        int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned short _field7;
        unsigned int _field8;
        unsigned int _field9;
        char *_field10;
    } _field5[32];
} CDStruct_b823fdf7;

typedef struct {
    int _field1;
    unsigned int _field2;
    void *_field3;
    unsigned int _field4;
    CDStruct_183601bc *_field5;
} CDStruct_ef07e5a0;

