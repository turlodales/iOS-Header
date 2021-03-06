//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSString;

@interface CFCBGetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNightShiftMode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)getNightShiftStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

