//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SSSScreenshotAnnotationView.h"

#import "SSSScreenshotContainerView-Protocol.h"

@class PDFView, SSSScreenshot, UIActivityIndicatorView, UIView, _SSSScreenshotContentOverlayController;

@interface _SSSScreenshotPDFView : _SSSScreenshotAnnotationView <SSSScreenshotContainerView>
{
    PDFView *_pdfView;
    UIActivityIndicatorView *_activityIndicatorView;
    long long _currentVellumPage;
    struct CGPoint _scrollOffset;
    double _scrollZoomScale;
}

- (void).cxx_destruct;
- (void)updateViewState;
@property(readonly, nonatomic) long long currentPDFPage;
@property(readonly, nonatomic) PDFView *_pdfView;
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
- (void)exitMarkupMode;
- (void)enterMarkupMode;
- (void)enterCropMode;
- (void)setupOverlayControllerWithPDFDocument:(id)arg1;
- (void)setupPDFData;
- (id)undoManager;
@property(nonatomic) __weak SSSScreenshot *screenshot;
- (void)setCrop:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
@property(nonatomic) double vellumOpacity;

@end

