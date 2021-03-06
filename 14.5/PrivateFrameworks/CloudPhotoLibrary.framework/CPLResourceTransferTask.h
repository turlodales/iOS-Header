//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding>
{
    _Bool _highPriority;
    _Bool _cancelled;
    CPLResource *_resource;
    NSString *_taskIdentifier;
    unsigned long long _intent;
}

+ (_Bool)isHighPriorityForIntent:(unsigned long long)arg1;
+ (id)intentsToBackgroundDownload;
+ (id)descriptionForIntent:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(readonly, copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)cancelTask;
- (void)launch;
- (void)setTaskIdentifier:(id)arg1;
- (void)setResource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (id)initWithResource:(id)arg1 taskIdentifier:(id)arg2;

@end

