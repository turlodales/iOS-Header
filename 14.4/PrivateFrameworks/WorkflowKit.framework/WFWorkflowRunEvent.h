//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSDate, NSString, WFWorkflowReference;

@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor
{
    WFWorkflowReference *_workflow;
    NSString *_source;
    NSDate *_date;
    NSString *_triggerID;
    long long _outcome;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long outcome; // @synthesize outcome=_outcome;
@property(readonly, copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) WFWorkflowReference *workflow; // @synthesize workflow=_workflow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 workflow:(id)arg2 source:(id)arg3 date:(id)arg4 triggerID:(id)arg5 outcome:(long long)arg6;

@end

