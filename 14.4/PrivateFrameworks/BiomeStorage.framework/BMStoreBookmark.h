//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BiomeStorage/BMProtoBufWrapper-Protocol.h>
#import <BiomeStorage/NSSecureCoding-Protocol.h>

@class NSString;

@interface BMStoreBookmark : NSObject <NSSecureCoding, BMProtoBufWrapper>
{
    NSString *_streamId;
    NSString *_segmentName;
    double _iterationStartTime;
    unsigned long long _offset;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) double iterationStartTime; // @synthesize iterationStartTime=_iterationStartTime;
@property(readonly, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(readonly, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)proto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_descriptionDict;
- (void)dealloc;
- (id)initWithStream:(id)arg1 segment:(id)arg2 iterationStartTime:(double)arg3 offset:(unsigned long long)arg4;

@end

