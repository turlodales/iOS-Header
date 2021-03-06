//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUGLValue : NSObject
{
    union {
        int intValue;
        float floatValue;
        CDStruct_6e3f967a vec2Value;
        struct {
            float x;
            float y;
            float z;
            float w;
        } vec4Value;
        CDStruct_6fdb7d3f mat3Value;
        CDStruct_81e6f6d3 mat4Value;
    } _value;
    unsigned int _type;
}

+ (id)valueWithMat4:(CDStruct_81e6f6d3)arg1;
+ (id)valueWithMat3:(CDStruct_6fdb7d3f)arg1;
+ (id)valueWithVec4:(CDStruct_818bb265)arg1;
+ (id)valueWithVec2:(CDStruct_6e3f967a)arg1;
+ (id)valueWithFloat:(float)arg1;
+ (id)valueWithInt:(int)arg1;
@property(readonly) unsigned int type; // @synthesize type=_type;
- (id)description;
@property(readonly) CDStruct_81e6f6d3 mat4Value;
@property(readonly) CDStruct_6fdb7d3f mat3Value;
@property(readonly) CDStruct_818bb265 vec4Value;
@property(readonly) CDStruct_6e3f967a vec2Value;
@property(readonly) float floatValue;
@property(readonly) int intValue;
- (id)initWithBytes:(const void *)arg1 type:(unsigned int)arg2;
- (id)init;

@end

