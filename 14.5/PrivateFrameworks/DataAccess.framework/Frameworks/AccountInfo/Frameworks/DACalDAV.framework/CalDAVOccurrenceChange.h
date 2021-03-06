//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject
{
    _Bool _isMaster;
    ICSDate *_recurrenceID;
    NSMutableDictionary *_changes;
}

+ (id)changeWithItem:(id)arg1;
+ (id)changeWithOccurrenceID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) ICSDate *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
@property(readonly, nonatomic) _Bool proposedStartDateChanged;
@property(readonly, nonatomic) _Bool privateCommentChanged;
@property(readonly, nonatomic) _Bool participationChanged;
@property(readonly, nonatomic) _Bool recurrenceChanged;
@property(readonly, nonatomic) _Bool attachmentsChanged;
@property(readonly, nonatomic) _Bool statusChanged;
@property(readonly, nonatomic) _Bool descriptionChanged;
@property(readonly, nonatomic) _Bool attendeesChanged;
@property(readonly, nonatomic) _Bool summaryChanged;
@property(readonly, nonatomic) _Bool urlChanged;
@property(readonly, nonatomic) _Bool locationChanged;
@property(readonly, nonatomic) _Bool timeZoneChanged;
@property(readonly, nonatomic) _Bool endTimeChanged;
@property(readonly, nonatomic) _Bool startTimeChanged;
@property(readonly, nonatomic) _Bool dateTimeChanged;
- (_Bool)didParameterChange:(id)arg1 onProperty:(id)arg2;
- (_Bool)didPropertyChange:(id)arg1;
- (void)addChangedParameter:(id)arg1 ofProperty:(id)arg2;
- (void)addChangedProperty:(id)arg1;
- (id)initWithOccurrenceID:(id)arg1;
- (id)init;

@end

