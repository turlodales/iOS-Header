//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceReferable-Protocol.h>

@class NSString;

@interface SABaseAceObject : AceObject <SAAceReferable>
{
}

+ (id)baseAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseAceObject;
@property(copy, nonatomic) NSString *metricsContext;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

