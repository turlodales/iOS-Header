//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface _TtC8FMClient24VoiceAssistantSyncResult : NSObject
{
    MISSING_TYPE *devices;
    MISSING_TYPE *anchor;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1 anchor:(id)arg2;
@property(nonatomic, readonly) NSString *anchor;
@property(nonatomic, readonly) NSSet *devices;

@end

