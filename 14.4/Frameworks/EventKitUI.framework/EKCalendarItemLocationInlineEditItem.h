//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEventDetailPredictedLocationCellDelegate-Protocol.h>
#import <EventKitUI/PKScribbleInteractionDelegate-Protocol.h>
#import <EventKitUI/PKScribbleInteractionElementSource-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class EKCalendarItemEditor, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem>
{
    NSMutableArray *_locationsAndCells;
    EKCalendarItemEditor *_editor;
    _Bool _sourceSupportsAvailabilityRequests;
    NSMutableDictionary *_conferenceRoomInfos;
}

+ (id)_locationPlaceholder;
+ (id)conferenceRoomNameForLocation:(id)arg1;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (id)participantForConferenceRoomName:(id)arg1;
- (_Bool)_showSuggestedLocation:(id)arg1;
- (_Bool)_showConferenceLocation:(id)arg1;
- (id)searchStringForEventAutocomplete;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)forceTableReloadOnSave;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)_clearLocation:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_clearButtonTapped:(id)arg1;
- (void)_updateAvailabilityInformation;
- (id)_clearButtonView:(unsigned long long)arg1;
- (void)_refreshConferenceRoomCell:(id)arg1;
- (id)locationCellPairForCell:(id)arg1;
- (void)_updateLocation:(id)arg1 withConferenceRoom:(id)arg2;
- (void)_updateLocation:(id)arg1 withStructuredLocation:(id)arg2;
- (void)_updateCalendarItemLocation;
- (void)_updateAuxiliaryLocationsForNewLocation:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)_setEditor:(id)arg1 andAddScribbleInteractionToCellIfNecessary:(id)arg2;
- (void)_updateCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isSaveable;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (_Bool)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)refreshFromCalendarItemAndStore;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

