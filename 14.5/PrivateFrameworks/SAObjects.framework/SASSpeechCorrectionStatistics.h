//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechCorrectionStatistics;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *interactionId;
@property(copy, nonatomic) NSString *correctionText;
@property(copy, nonatomic) NSString *correctionSource;
@property(nonatomic) long long characterChangeCount;
@property(nonatomic) long long alternativeSelectCount;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

