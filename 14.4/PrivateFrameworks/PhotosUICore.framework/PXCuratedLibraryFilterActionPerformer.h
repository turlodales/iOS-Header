//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

#import <PhotosUICore/PXContentFilterControllerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PXUIContentFilterController;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXContentFilterControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    PXUIContentFilterController *_contentFilterController;
}

- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)contentFilterControllerDidComplete:(id)arg1;
- (void)contentFilterController:(id)arg1 filterStateChanged:(id)arg2;
- (void)performUserInteractionTask;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)activitySystemImageName;
- (id)activityType;
- (_Bool)performerResetsAfterCompletion;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

