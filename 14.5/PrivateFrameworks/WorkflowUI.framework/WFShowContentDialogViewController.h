//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFCompactDialogViewController.h>

#import <WorkflowUI/QLPreviewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFCompactContentPreviewViewControllerDelegate-Protocol.h>

@class NSString, WFCompactContentPreviewViewController, WFCompactHighlightedView, WFContentCollection;

@interface WFShowContentDialogViewController : WFCompactDialogViewController <WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate>
{
    WFCompactHighlightedView *_highlightView;
    WFCompactContentPreviewViewController *_previewViewController;
    WFContentCollection *_dataSource;
    CDUnknownBlockType _installThumbnailHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType installThumbnailHandler; // @synthesize installThumbnailHandler=_installThumbnailHandler;
@property(retain, nonatomic) WFContentCollection *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WFCompactContentPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(nonatomic) __weak WFCompactHighlightedView *highlightView; // @synthesize highlightView=_highlightView;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (id)sourceViewForQuickLook;
- (void)previewViewControllerDidInvalidateSize:(id)arg1;
- (double)targetHeightForAnimatingPreviewViewController:(id)arg1 toProposedHeight:(double)arg2;
- (void)presentFullScreenPreview;
- (void)handleTapGesture:(id)arg1;
- (void)updateActions;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareForPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)contentHeightWithPreferredHeight:(double)arg1 maxVisibleHeight:(double)arg2;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

