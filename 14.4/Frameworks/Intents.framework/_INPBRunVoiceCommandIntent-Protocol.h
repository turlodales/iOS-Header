//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentExecutionResult, _INPBIntentMetadata, _INPBVoiceCommandDeviceInformation;

@protocol _INPBRunVoiceCommandIntent <NSObject>
@property(readonly, nonatomic) _Bool hasVoiceCommand;
@property(retain, nonatomic) _INPBDataString *voiceCommand;
@property(readonly, nonatomic) _Bool hasPreviousIntentIdentifier;
@property(copy, nonatomic) NSString *previousIntentIdentifier;
@property(readonly, nonatomic) _Bool hasOriginDevice;
@property(retain, nonatomic) _INPBVoiceCommandDeviceInformation *originDevice;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasExecutionResult;
@property(retain, nonatomic) _INPBIntentExecutionResult *executionResult;
@end

