//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPreviewController.h>

#import "QLPreviewControllerDataSource-Protocol.h"

@class MISSING_TYPE, NSArray;
@protocol QLPreviewControllerDelegate;

@interface _TtC5Files20DOCPreviewController : QLPreviewController <QLPreviewControllerDataSource>
{
    MISSING_TYPE *editingDelegate;
    MISSING_TYPE *source;
    MISSING_TYPE *transitioningProvider;
    MISSING_TYPE *observation;
    MISSING_TYPE *domainDisplayNameProvider;
    MISSING_TYPE *publishesUserActivity;
    MISSING_TYPE *currentUserActivity;
}

+ (void)clearSharedControllerFor:(id)arg1;
+ (id)sharedControllerFor:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPreviewItems:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)reallyBecomeCurrent:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
@property(nonatomic) long long modalPresentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismissViaKeyCommand;
- (void)registerDomainDisplayNameProvider:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, retain) id <QLPreviewControllerDelegate> delegate;

@end

