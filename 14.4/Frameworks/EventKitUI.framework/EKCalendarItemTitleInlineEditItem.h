//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITableViewCell, UITextField;

__attribute__((visibility("hidden")))
@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem>
{
    UITableViewCell *_titleCell;
    _Bool _drawsOwnRowSeparators;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)arg1;
- (id)searchStringForEventAutocomplete;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UITextField *titleTextField;
- (_Bool)isSaveable;
- (id)_makeCell:(unsigned long long)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (_Bool)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

