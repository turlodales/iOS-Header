//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGReminderSuggestionBase.h>

#import <CoreSuggestionsUI/REMReminderCreationDelegate-Protocol.h>

@class CLLocation, NSAttributedString, NSDateComponents, NSString, NSURL, NSUserActivity;

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>
{
}

+ (id)remindersImage;
- (void)reminderCreationViewController:(id)arg1 didCreateReminder:(_Bool)arg2 error:(id)arg3;
- (id)suggestionCategoryImage;
- (id)suggestionImage;
- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(_Bool)arg2;
- (id)suggestionPrimaryAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDateComponents *dueDateComponents; // @dynamic dueDateComponents;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLLocation *location; // @dynamic location;
@property(readonly, nonatomic) long long locationProximity;
@property(readonly, nonatomic) NSString *locationString; // @dynamic locationString;
@property(readonly, nonatomic) NSAttributedString *notes; // @dynamic notes;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSAttributedString *title; // @dynamic title;
@property(readonly, nonatomic) _Bool titleIsGeneratedSuggestion;
@property(readonly, nonatomic) NSURL *url; // @dynamic url;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @dynamic userActivity;
@property(readonly, nonatomic) _Bool wantsExtendedDetailOnlyView;

@end

