//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_SFDigitalHealthHostingViewController-Protocol.h"

@class TabDocument, _SFBrowserView, _SFDigitalHealthViewController, _SFLinkPreviewHeader;

@interface LinkPreviewViewController : UIViewController <_SFDigitalHealthHostingViewController>
{
    _SFDigitalHealthViewController *_digitalHealthViewController;
    TabDocument *_previewTabDocument;
    _SFBrowserView *_browserView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _SFBrowserView *browserView; // @synthesize browserView=_browserView;
@property(readonly, nonatomic) __weak TabDocument *previewTabDocument; // @synthesize previewTabDocument=_previewTabDocument;
@property(retain, nonatomic) _SFDigitalHealthViewController *digitalHealthViewController; // @synthesize digitalHealthViewController=_digitalHealthViewController;
- (void)displayHostedDigitalHealthView;
- (void)willCommitPreviewedWebView;
- (void)updatePreviewLoadingUIWithURLString:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
- (void)loadView;
- (id)initWithTabDocument:(id)arg1;

@end

