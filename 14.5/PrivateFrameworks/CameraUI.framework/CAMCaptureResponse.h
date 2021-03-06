//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMCaptureCoordinationInfo;

@interface CAMCaptureResponse : NSObject
{
    unsigned short _sessionIdentifier;
    long long _type;
    CAMCaptureCoordinationInfo *_coordinationInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // @synthesize coordinationInfo=_coordinationInfo;
@property(readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)releaseCachedImages;
- (id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3;
- (id)init;

@end

