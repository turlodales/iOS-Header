//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating>
{
    NSString *_platform;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;
- (id)initWithPlatform:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

