//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIAlertController, UIPrintingProgressViewController, UIWindow, UIWindowScene;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject
{
    NSString *_printerName;
    CDUnknownBlockType _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertController *_alertController;
    UIPrintingProgressViewController *_viewController;
    _Bool _donePrinting;
    _Bool _forceDisplayAsAlert;
    _Bool _creatingPDF;
    double _lastPageUpdate;
    double _progressAlertDelay;
    UIWindowScene *_hostingWindowScene;
    UIWindow *_progressAlertWindow;
}

- (void).cxx_destruct;
@property(retain) UIWindow *progressAlertWindow; // @synthesize progressAlertWindow=_progressAlertWindow;
@property __weak UIWindowScene *hostingWindowScene; // @synthesize hostingWindowScene=_hostingWindowScene;
@property double progressAlertDelay; // @synthesize progressAlertDelay=_progressAlertDelay;
@property double lastPageUpdate; // @synthesize lastPageUpdate=_lastPageUpdate;
@property _Bool creatingPDF; // @synthesize creatingPDF=_creatingPDF;
- (double)nextPrintDelay;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)_mainQueue_endProgress;
- (void)endProgress;
- (void)progressCancel;
- (void)_mainQueue_hideProgressAnimated:(_Bool)arg1;
- (void)hideProgressAnimated:(_Bool)arg1;
- (void)_mainQueue_showProgress:(id)arg1 immediately:(_Bool)arg2;
- (void)showProgress:(id)arg1 immediately:(_Bool)arg2;
- (void)_mainQueue_presentProgressAlert;
- (void)_presentProgressAlert;
@property(readonly) NSString *title;
- (_Bool)progressVisible;
- (id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(_Bool)arg2 hostingWindowScene:(id)arg3 cancelHandler:(CDUnknownBlockType)arg4;

@end

