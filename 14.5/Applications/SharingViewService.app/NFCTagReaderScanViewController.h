//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSObject, NSString, PKGlyphView, UIButton, UIImageView, UILabel;
@protocol OS_dispatch_source;

@interface NFCTagReaderScanViewController : SVSBaseViewController <LSApplicationWorkspaceObserverProtocol>
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UILabel *_info1Label;
    UIButton *_mainButton;
    UIButton *_notNowButton;
    PKGlyphView *_nfcAnimationView;
    long long _mode;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _idle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool idle; // @synthesize idle=_idle;
- (void)updatePurpose:(id)arg1;
- (void)dismissEventually;
- (void)nfcTagScanned;
- (void)handleNotNowButton:(id)arg1;
- (void)handleMainButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showFailureUI;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

