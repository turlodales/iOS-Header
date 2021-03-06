//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBArchivedObject, _INPBVoiceCommandStepInfo;

@protocol _INPBRunWorkflowIntentResponse <NSObject>
+ (Class)stepType;
@property(nonatomic) _Bool hasWaitingForResume;
@property(nonatomic) _Bool waitingForResume;
@property(readonly, nonatomic) _Bool hasUtterance;
@property(copy, nonatomic) NSString *utterance;
@property(readonly, nonatomic) _Bool hasUnderlyingIntentResponse;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property(readonly, nonatomic) _Bool hasUnderlyingIntent;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property(readonly, nonatomic) unsigned long long stepsCount;
@property(copy, nonatomic) NSArray *steps;
@property(nonatomic) _Bool hasRequestsIntentExecution;
@property(nonatomic) _Bool requestsIntentExecution;
@property(nonatomic) _Bool hasContinueRunning;
@property(nonatomic) _Bool continueRunning;
- (_INPBVoiceCommandStepInfo *)stepAtIndex:(unsigned long long)arg1;
- (void)addStep:(_INPBVoiceCommandStepInfo *)arg1;
- (void)clearSteps;
@end

