//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerPreviewing_Internal-Protocol.h>

@class NSString, UIGestureRecognizer, UIView;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIInertPreviewingContext : NSObject <UIViewControllerPreviewing_Internal>
{
    UIGestureRecognizer *_failureRelationshipGestureRecognizer;
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_customViewForInteractiveHighlight;
    UIView *_sourceView;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIView *customViewForInteractiveHighlight; // @synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) __weak id <UIViewControllerPreviewingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unregister;
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
- (id)initWithSourceView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

