//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSAbstractHandout.h>

#import <ClassKit/CLSCollaborationStateRepresentable-Protocol.h>
#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSClass, NSArray, NSDate, NSError, NSString;

@interface CLSHandout : CLSAbstractHandout <CLSRelationable, CLSCollaborationStateRepresentable>
{
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    _Bool _reviewed;
    unsigned long long _flags;
    NSDate *_dateLastReviewed;
    long long _state;
    long long _publishingState;
    NSError *_publishError;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
+ (id)relations;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSError *publishError; // @synthesize publishError=_publishError;
@property(nonatomic) long long publishingState; // @synthesize publishingState=_publishingState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *dateLastReviewed; // @synthesize dateLastReviewed=_dateLastReviewed;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *attachmentCollaborationStates;
@property(readonly, nonatomic) NSArray *collaborationStates;
@property(readonly, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) NSArray *recipients;
- (void)removeHandoutRecipient:(id)arg1;
- (void)addHandoutRecipient:(id)arg1;
- (void)removeHandoutAttachment:(id)arg1;
- (void)addHandoutAttachment:(id)arg1;
- (void)mergeWithObject:(id)arg1;
@property(retain, nonatomic) NSDate *lastReviewedDate;
@property(nonatomic, getter=isReviewed) _Bool reviewed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_adjustPublishingStateIfNeeded;
- (_Bool)validateObject:(id *)arg1;
- (id)init;
- (id)_init;
@property(readonly, nonatomic) CLSClass *effectiveClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

